/*
** EPITECH PROJECT, 2025
** secured
** File description:
** hash
*/

#include <stdint.h>

#include "eyes.h"

static const uint32_t C1 = 0xcc9e2d51;
static const uint32_t C2 = 0x1b873593;
static const uint32_t M = 5;
static const uint32_t N = 0xe6546b64;
static const int R1 = 15;
static const int R2 = 13;

unsigned int mix_block(unsigned int k)
{
    k *= C1;
    k = (k << R1) | (k >> (32 - R1));
    k *= C2;
    return k;
}

unsigned int process_tail(const uint8_t *tail, unsigned int len)
{
    unsigned int k = 0;

    switch (len & 3) {
        case 3:
            k ^= tail[2] << 16;
        case 2:
            k ^= tail[1] << 8;
        case 1:
            k ^= tail[0];
            k *= C1;
            k = (k << R1) | (k >> (32 - R1));
            k *= C2;
    }
    return k;
}

unsigned int mix_finalize(unsigned int h, unsigned int len)
{
    h ^= len;
    h ^= (h >> 16);
    h *= 0x85ebca6b;
    h ^= (h >> 13);
    h *= 0xc2b2ae35;
    h ^= (h >> 16);
    return h & 0x7FFFFFFF;
}

unsigned int process_block(unsigned int h, unsigned int k)
{
    h ^= k;
    h = (h << R2) | (h >> (32 - R2));
    h = h * M + N;
    return h;
}

int hash(const char *key)
{
    uint32_t h = 42;
    uint32_t len = e_strlen(key);
    uint32_t *blocks = (uint32_t *)key;
    int nblocks = len / 4;
    unsigned int k = 0;
    const uint8_t *tail;

    for (int i = 0; i < nblocks; i++) {
        k = blocks[i];
        k = mix_block(k);
        h = process_block(h, k);
    }
    tail = (const uint8_t *)(key + nblocks * 4);
    k = process_tail(tail, len & 3);
    h ^= k;
    h = mix_finalize(h, len);
    return h;
}
