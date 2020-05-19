/*
** EPITECH PROJECT, 2019
** my_strlen.c
** File description:
** counts and return the number of characters
*/

int my_strlen(char const *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i++);
    return (i);
}
