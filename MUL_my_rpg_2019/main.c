/*
** EPITECH PROJECT, 2019
** main
** File description:
** main
*/

#include "include/my.h"

void destroy_values(all_t *all)
{
    sfMusic_destroy(all->music->menu_music);
    sfMusic_destroy(all->music->menu_click);
    sfMusic_destroy(all->music->achievement);
    sfMusic_destroy(all->music->denied);
    sfMusic_destroy(all->music->gobelin_punch);
    sfMusic_destroy(all->music->sword_hit);
}

int many_argc(int argc, char **argv)
{
    if (argc != 1 && argv[1][0] == '-' && argv[1][1] == 'h') {
        write(1, "RPG created with CSFML.\n", 34);
        write(1, "\nUSAGE\n", 7);
        write(1, "      ./my_rpg\n", 29);
        write(1, "\nOPTIONS\n", 9);
        write(1, "      -h: print the usage and quit.\n", 36);
        write(1, "\nUSER INTERACTIONS\n", 19);
        write(1, "      MOUSE CLICK      Click..\n", 31);
        write(1, "      ESCAPE           Pause..\n", 31);
        write(1, "      Arrows           Mouvement\n", 33);
        write(1, "\nINFORMATIONS\n", 14);
        write(1, "\n      HAVE FUN !!\n\n", 20);
        return (-1);
    } else if (argc == 2)
        return (-1);
    return (0);
}

void timed(all_t *all)
{
    all->clocker->time = sfClock_getElapsedTime(all->clocker->clock);
    all->clocker->seconds = all->clocker->time.microseconds / 1000000.0;
    all->clocker->time_move = sfClock_getElapsedTime(all->clocker->clock_move);
    all->clocker->seconds_move =
    all->clocker->time_move.microseconds / 1000000.0;
}

int main(int argc, char **argv, char **env)
{
    if (!*env)
        return (84);
    all_t *all = malloc(sizeof(all_t));
    if (all == NULL)
        return (84);
    if (test_binary_is_here(all) == 84)
        return (84);
    if (many_argc(argc, argv) == -1)
        return (0);
    if (declare_value(all) == 84)
        return (84);
    sfVideoMode mode = {1920, 1080, 32};
    all->window = sfRenderWindow_create(mode, "RPG", sfDefaultStyle, NULL);
    if (!all->window)
        return EXIT_FAILURE;
    sfRenderWindow_setFramerateLimit(all->window, 60);
    if (game_loop(all) == 84)
        return (84);
    destroy_values(all);
    return (0);
}
