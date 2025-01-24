/*
** EPITECH PROJECT, 2025
** __
** File description:
** _
*/

#ifndef BLOOM_H
    #define BLOOM_H
    #define BLOOM_FILTER_SIZE 1024
    #include <stdint.h>

typedef struct {
    uint8_t bit_array[BLOOM_FILTER_SIZE / 8];
} bf_t;
int hash_fnc(const char *key);
#endif /* BLOOM_H */
