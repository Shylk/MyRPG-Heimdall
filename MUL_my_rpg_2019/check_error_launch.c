/*
** EPITECH PROJECT, 2019
** error_launch
** File description:
** main
*/

#include "include/my.h"

int loop_check_all_textures(char **tab, struct dirent *dir)
{
    int line = 0;
    while (tab[line] != NULL) {
        if (my_strcomp(dir->d_name, tab[line]) == 0)
            return (0);
        line++;
    }
    return (84);
}

int check_all_textures(struct dirent *dir, DIR *check, all_t *all)
{
    char **tab = make_tab_texture(all);
    if (tab == NULL)
        return (84);
    while (dir = readdir(check)) {
        if (dir->d_name[0] != '.') {
            if (loop_check_all_textures(tab, dir) == 84)
                return (84);
        }
    }
    return (0);
}

int loop_check_all_sound(char **tab, struct dirent *dir)
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

int check_all_sound(struct dirent *dir, all_t *all)
{
    DIR *sound = opendir("sound_effects");
    if (sound == NULL)
        return (84);
    int nb_files = 0;
    while (dir = readdir(sound))
        dir->d_name[0] != '.' ? nb_files++ : 0;
    if (nb_files != 6)
        return (84);
    DIR *check = opendir("sound_effects");
    char *tab[7] = {"achievement.ogg", "click_sound_menu.wav", "denied.wav",
    "gobelin_punch.ogg", "menu_main_theme.ogg", "sword_slash.ogg", NULL};
    if (tab == NULL)
        return (84);
    while (dir = readdir(check)) {
        if (loop_check_all_sound(tab, dir) == 84)
            return (84);
    }
    return (0);
}

int test_binary_is_here(all_t *all)
{
    struct dirent *dir;
    DIR *count = opendir("sprite");
    if (count == NULL)
        return (84);
    int nb_files = 0;
    while (dir = readdir(count)) {
        if (dir->d_name[0] != '.')
            nb_files++;
    }
    if (nb_files != 175)
        return (84);
    DIR *check = opendir("sprite");
    if (check == NULL)
        return (84);
    if (check_all_textures(dir, check, all) == 84)
        return (84);
    if (check_all_sound(dir, all) == 84)
        return (84);
    if (check_all_font(dir, all) == 84)
        return (84);
    return (0);
}
