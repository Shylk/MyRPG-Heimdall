/*
** EPITECH PROJECT, 2019
** my_putstr.c
** File description:
** displays one by one the characters
*/

#include "../../include/my.h"

void my_putstr(char *str)
{
    int  i;

    for (i = 0; str[i] != '\0'; i++) {
        my_putchar(str[i]);
    }
}
