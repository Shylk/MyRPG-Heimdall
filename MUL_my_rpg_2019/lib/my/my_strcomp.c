/*
** EPITECH PROJECT, 2019
** my_atoi.c
** File description:
** convert a string to an int
*/

#include "../../include/my.h"

int my_strcomp(char *temp, char *test)
{
    if (my_strlen(temp) != my_strlen(test))
        return (84);
    for (int i = 0; i < my_strlen(temp); i++)
        if (temp[i] != test[i])
            return (84);
    return (0);
}