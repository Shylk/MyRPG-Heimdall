/*
** EPITECH PROJECT, 2019
** my_put_nbr.c
** File description:
** boucle avec modulo
*/

#include "../../include/my.h"

int my_put_nbr(int n)
{
    if (n < 0) {
        my_putchar('-');
        n = -n;
    }
    if (n / 10 != 0) {
        my_put_nbr(n / 10);
    }
    my_putchar(n % 10 + '0');
}
