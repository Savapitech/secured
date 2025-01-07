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
