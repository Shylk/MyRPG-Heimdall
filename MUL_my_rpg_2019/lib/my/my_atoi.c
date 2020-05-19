/*
** EPITECH PROJECT, 2019
** my_atoi.c
** File description:
** convert a string to an int
*/

int my_atoi(char *str)
{
    int i = 0;
    int result = 0;

    for (i = 0; str[i] != '\0'; i++)
        result = (result * 10) + (str[i] - '0');
    return (result);
}
