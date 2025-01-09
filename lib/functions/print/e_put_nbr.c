/*
** EPITECH PROJECT, 2024
** my_put_nbr
** File description:
** display numbers
*/

#include "eyes.h"

static
void put_overflow(void)
{
    e_putstr("-2147483648");
}

static
int e_put_h_nbr(int nb)
{
    short int n = (short int) nb;

    if (n < 10 && n >= 0) {
        e_putchar(n + 48);
    } else if (n < 0) {
        e_putchar('-');
        n *= -1;
        e_put_l_nbr(n);
    } else {
        e_put_l_nbr(n / 10);
        e_put_l_nbr(n % 10);
    }
    return 0;
}

static
int e_put_ll_nbr(long long int nb)
{
    if (nb < 10 && nb >= 0) {
        e_putchar(nb + 48);
    } else if (nb < 0) {
        e_putchar('-');
        nb *= -1;
        e_put_ll_nbr(nb);
    } else {
        e_put_ll_nbr(nb / 10);
        e_put_ll_nbr(nb % 10);
    }
    return 0;
}

static
int e_put_l_nbr(long int nb)
{
    if (nb == -2147483648)
        nb++;
    if (nb < 10 && nb >= 0) {
        e_putchar(nb + 48);
    } else if (nb < 0) {
        e_putchar('-');
        nb *= -1;
        e_put_l_nbr(nb);
    } else {
        e_put_l_nbr(nb / 10);
        e_put_l_nbr(nb % 10);
    }
    return 0;
}

int e_put_nbr(int nb)
{
    if (nb == -2147483648) {
        put_overflow();
        return 0;
    }
    if (nb < 10 && nb >= 0) {
        e_putchar(nb + 48);
    } else if (nb < 0) {
        e_putchar('-');
        nb *= -1;
        e_put_nbr(nb);
    } else {
        e_put_nbr(nb / 10);
        e_put_nbr(nb % 10);
    }
    return 0;
}
