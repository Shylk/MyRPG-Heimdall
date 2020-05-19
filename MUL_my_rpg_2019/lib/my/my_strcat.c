/*
** EPITECH PROJECT, 2019
** my_strcat.c
** File description:
** concatenates two strings
*/

#include <stdlib.h>
#include "../../include/my.h"

char *my_strcat(char *dest, char *src)
{
    int dest_len = my_strlen(dest);
    int src_len = my_strlen(src);
    char *equal = malloc(sizeof(char) * (dest_len + src_len + 1));
    if (equal == NULL)
        return (NULL);
    int i = 0;
    int len = 0;
    for (; dest[i] != '\0'; i++, len++)
        equal[len] = dest[i];
    for (i = 0; src[i] != '\0'; i++, len++)
        equal[len] = src[i];
    equal[len] = '\0';
    return (equal);
}
