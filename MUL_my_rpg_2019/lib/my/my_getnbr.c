/*
** EPITECH PROJECT, 2019
** my_getnbr.c
** File description:
** getnbr
*/

#include "../../include/my.h"

int my_getnbr(char const *str)
{
    int i = 0;
    int n = 0;
    int o = 0;

    for (i; str[i] != '\0'; i++) {
        if (str[i] <= '9' && str[i] >= '0') {
            n = (n * 10) + (str[i] - '0');
            if (n > 214748364 || n < -214748364) {
                return (84);
            }
            if (str[i - 1] == '-')
                my_putchar('-');
            if (str[i + 1] > '9' || str[i + 1] < '0')
                break;
        }
    }
    return (n);
}
