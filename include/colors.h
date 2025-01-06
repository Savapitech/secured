/*
** EPITECH PROJECT, 2024
** __
** File description:
** _
*/

#ifndef COLORS_H
    #define COLORS_H

    #define ESC "\033"
    #define CFMT(n) ESC "[" #n "m"

    #define RESET CFMT(0)
    #define BOLD CFMT(1)

    #define RED CFMT(31)
    #define GREEN CFMT(32)
    #define YELLOW CFMT(33)
    #define BLUE CFMT(34)
    #define PURPLE CFMT(35)
    #define CYAN CFMT(36)
#endif
