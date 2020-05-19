/*
** EPITECH PROJECT, 2019
** ingame
** File description:
** main
*/

#include <stdbool.h>
#include "../include/my.h"

int game_loop_4(all_t *all)
{
    if (all->menu->menu == 5)
        if (fight_tuto(all) == 84)
            return (84);
    if (all->menu->menu == 3)
        if (fight(all) == 84)
            return (84);
    if (all->menu->menu == 4)
        if (fight_second_monster(all) == 84)
            return (84);
    if (all->menu->menu == 6)
        if (boss_fight(all) == 84)
            return (84);
    name_function(all);
    sfRenderWindow_display(all->window);
    return (0);
}

void game_loop_3(all_t *all)
{
    if (SPAWN) {
        game_small_map(all);
        event_start(all);
    }
    if (MOUNTAIN) {
        game_small_map(all);
        event_mountain(all);
    }
    if (CAVE) {
        game_small_map(all);
        if (all->map->tab != 6)
            event_cave(all);
        else
            event_end(all);
    }
}

int game_loop_2(all_t *all)
{
    all->intro->intro == 0 ? intro(all) : 0;
    if (all->menu->menu == 0)
        if (menu_managment(all) == 84)
            return (84);
    return (0);
}

int game_loop_1(all_t *all)
{
    timed(all);
    if (analyse_events(all) == 84)
        return (84);
    sfRenderWindow_clear(all->window, sfBlack);
    return (0);
}

int game_loop(all_t *all)
{
    int dialog_to_do = 0;
    while (sfRenderWindow_isOpen(all->window)) {
        if (game_loop_1(all) == 84)
            return (84);
        if (dialog_to_do == 1) {
            if (interactive_dialog_after_class(all) == 84)
                return (84); }
        if (game_loop_2(all) == 84)
            return (84);
        if (all->menu->menu == 1) {
            if (PLAIN) {
                if (game_plain(all) == 84)
                    return (84);
                if (draw_dialogs(all) == 84)
                    return (84);
                dialog_to_do = check_if_select_a_class(all);
                event_plain(all); }
            game_loop_3(all); }
        if (game_loop_4(all) == 84)
            return (84); }
        return (0);
}
