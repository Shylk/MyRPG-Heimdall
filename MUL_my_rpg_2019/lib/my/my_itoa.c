/*
** EPITECH PROJECT, 2020
** epitech
** File description:
** epitech
*/

#include <stdlib.h>

char *my_revstr(char *);

const char *my_itoa(int n)
{
    char *result = malloc(sizeof(char) * 32);
    if (result == NULL)
        return (NULL);
    int i = 0;
    int neg = 0;

    neg = n;
    if (neg < 0)
        n = -n;
    while (n > 0) {
        result[i] = n % 10 + '0';
        i++;
        n /= 10;
    }
    if (neg < 0) {
        result[i] = '-';
        i++;
    }
    result[i] = '\0';
    return my_revstr(result);
}