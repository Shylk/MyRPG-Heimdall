/*
** EPITECH PROJECT, 2019
** my_putchar.c
** File description:
** displays a char
*/

#include <unistd.h>

int my_putchar(char c)
{
    write(1, &c, 1);
}
