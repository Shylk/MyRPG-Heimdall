/*
** EPITECH PROJECT, 2019
** menu_managment
** File description:
** main
*/

#include <stdbool.h>
#include "../include/my.h"

int enter_key_in_menu(all_t *all, int check)
{
    if (sfKeyboard_isKeyPressed(sfKeyEnter) && check == 1) {
        if (all->menu->vector.y == 643) {
            give_new_position_to_arrow(all, 385, 530);
            if (quit_menu(all) == 84)
                return (84);
        }
        if (all->menu->vector.y == 810) {
            give_new_position_to_arrow(all, 760, 230);
            if (settings_menu(all) == 84)
                return (84);
        }
        if (all->menu->vector.y == 335) {
            if (all->event->check != 10) {
                all->menu->menu = -1;
                all->script->name = 1;
            } else
                all->menu->menu = 1;
            if (game_loop(all) == 84)
                return (84); } }
            return (0);
}

void check_events_menu(all_t *all)
{
    check_key_down_menu(all);
    check_key_up_menu(all);
}

void _init_menu(all_t *all)
{
    sfRenderWindow_clear(all->window, sfBlack);
    sfRenderWindow_setMouseCursorVisible(all->window, sfFalse);
    sfMusic_setLoop(all->music->menu_music, sfTrue);
    if (all->menu->music == true)
        sfMusic_play(all->music->menu_music);
}

int menu(all_t *all)
{
    int check = 0;
    _init_menu(all);
    while (sfRenderWindow_isOpen(all->window)) {
        while (sfRenderWindow_pollEvent(all->window, &all->menu->event)) {
            check_basic_events_menu(all, all->menu->event);
            check_events_menu(all);
            if (enter_key_in_menu(all, check) == 84)
                return (84);
        }
        check = 1;
        sfRenderWindow_drawSprite(all->window, all->menu->sprite_cursor, NULL);
        if (print_and_timer(all, all->menu->sprite_wallpaper) == 84)
            return (84);
    }
    return (0);
}