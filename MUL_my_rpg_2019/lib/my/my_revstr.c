/*
** EPITECH PROJECT, 2019
** my_revstr.c
** File description:
** reverses a string
*/

char *my_revstr(char *str)
{
    int i = 0;
    int maxi = 0;
    int wait = 0;

    while (str[maxi] != '\0')
        maxi++;
    maxi--;
    while (i < maxi) {
        wait = str[i];
        str[i] = str[maxi];
        str[maxi] = wait;
        i++;
        maxi--;
    }
    return (str);
}
