/*
** EPITECH PROJECT, 2019
** error_launch_4
** File description:
** main
*/

#include "include/my.h"

int loop_check_all_font(char **tab, struct dirent *dir)
{
    int line = 0;
    if (dir->d_name[0] != '.') {
        while (tab[line] != NULL) {
            if (my_strcomp(dir->d_name, tab[line]) == 0)
                return (0);
            line++;
        }
        return (84);
    }
    return (0);
}

int check_all_font(struct dirent *dir, all_t *all)
{
    DIR *font = opendir("font");
    if (font == NULL)
        return (84);
    int nb_files = 0;
    while (dir = readdir(font))
        dir->d_name[0] != '.' ? nb_files++ : 0;
    if (nb_files != 2)
        return (84);
    DIR *check = opendir("font");
    char *tab[3] = {"font_regular.ttf", "hvd.otf", NULL};
    if (tab == NULL)
        return (84);
    while (dir = readdir(check)) {
        if (loop_check_all_font(tab, dir) == 84)
            return (84);
    }
    return (0);
}
