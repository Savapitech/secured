/*
** EPITECH PROJECT, 2024
** my_printf
** File description:
** my_printf
*/

#include "eyes.h"

void print_end(char *str, args_t *arg)
{
    for (int i = arg->nb_args; str[i] != '\0'; i++)
        my_putchar(str[i]);
}

int check_parsing(char format, args_t *arg, va_list ap, char *str)
{
    int ret = 0;
    int check = 0;

    if (format != '%') {
        my_putchar(format);
        ret += 1;
        return 1;
    } else {
        check = parsing(str[my_strlen(str) - 1], arg, ap);
        if (check == -1) {
            print_end(str, arg);
            return -1;
        } else {
            ret += check;
            return ret;
        }
    }
    return ret;
}

int my_printf(char *format, ...)
{
    args_t *arg;
    va_list ap;
    int ret = 0;
    char *str;
    int check = 0;

    va_start(ap, format);
    for (int i = 0; format[i] != '\0'; i++) {
        str = my_str_char_cpy(format + i);
        str++;
        arg = create_struct(str, ret);
        check = check_parsing(format[i], arg, ap, str);
        if (check == -1)
            return 84;
        ret += check;
        if (check != 1)
            i += arg->nb_args;
    }
    va_end(ap);
    return ret;
}
