/*
** EPITECH PROJECT, 2024
** eyes
** File description:
** eyes
*/

#ifndef EYES_H_
    #define EYES_H_

    #include <stddef.h>
    #include <stdarg.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include <stdio.h>
    #include <stddef.h>
    #include <string.h>
    #include "my_printf.h"

// int
int e_compute_power_rec(int nb, int p);
int e_compute_square_root(int nb);
int e_getnbr(char const *str);
int e_str_isnum(char const *str);
int e_nb_len(int nb);

// linked_list

// print
void e_putchar(char c);
int e_putstr(char const *str);
int e_print_tab(char *const *tab);
void e_puterr(char const *str);

// printf
void put_overflow(void);
void sort_array(int *array, int *i, int *j);
int flag_f(va_list ap, args_t *arg);
int flag_u(va_list ap, args_t *arg);
int flags_i_and_d(va_list ap, args_t *arg);
int my_put_float(double nb, int precision);
int my_put_bl_float(long double nb, int precision);
int flag_c(va_list ap, args_t *arg);
int flag_purcent(va_list ap, args_t *arg);
int flag_x(va_list ap, args_t *arg);
int flag_up_x(va_list ap, args_t *arg);
int flag_s(va_list ap, args_t *arg);
int flag_p(va_list ap, args_t *arg);
int flag_o(va_list ap, args_t *arg);
int flag_n(va_list ap, args_t *arg);
int flag_e(va_list ap, args_t *arg);
int flag_up_e(va_list ap, args_t *arg);
int flag_g(va_list ap, args_t *arg);
int flag_up_g(va_list ap, args_t *arg);
int flag_b(va_list ap, args_t *arg);
int put_science(double nb, int precision);
int put_up_science(double nb, int precision);
int my_put_hexa(va_list ap, args_t *arg);
int my_put_up_hexa(long int nb);
int nb_len(int nb);
int hnb_len(int nb);
int lnb_len(long int nb);
char *my_str_char_cpy(char *str);
args_t *check_args(args_t *arg, char const *str);

// str
char *e_revstr(char *str);
char *e_strcat(char *dest, char const *src);
char *e_strcpy(char *dest, char const *src);
char *e_strdup(char const *src);
char *e_strncat(char *dest, char const *src, int nb);
char *e_strncpy(char *dest, char const *src, int n);
int e_strlen(char const *str);

// tab
int e_len_tab(char **tab);

#endif /* !EYES_H_ */
