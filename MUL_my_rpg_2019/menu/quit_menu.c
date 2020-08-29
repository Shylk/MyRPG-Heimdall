/*
** EPITECH PROJECT, 2019
** menu_managment
** File description:
** main
*/

#include <stdbool.h>
#include "../include/my.h"

int check_side_keys_quit_menu(all_t *all, int check)
{
    if (sfKeyboard_isKeyPressed(sfKeyRight) && all->menu->vector.x == 385) {
        stop_and_play_click_sound(all);
        sfSprite_setTexture(all->menu->sprite_quit_menu,
        all->menu->txt_quit_yes, sfTrue);
        give_new_position_to_arrow(all, 1100, all->menu->vector.y);
    }
    if (sfKeyboard_isKeyPressed(sfKeyLeft) && all->menu->vector.x == 1100) {
        stop_and_play_click_sound(all);
        sfSprite_setTexture(all->menu->sprite_quit_menu,
        all->menu->txt_quit_no, sfTrue);
        give_new_position_to_arrow(all, 385, all->menu->vector.y);
    }
    if (sfKeyboard_isKeyPressed(sfKeyEnter) && all->menu->vector.x == 1100)
        sfRenderWindow_close(all->window);
    if (check == 1 && sfKeyboard_isKeyPressed(sfKeyEnter)
    && all->menu->vector.x == 385) {
        give_new_position_to_arrow(all, 720, 643);
        if (menu(all) == 84)
            return (84);
    }
    return (0);
}

int quit_menu(all_t *all)
{
    sfEvent event;
    int check = 0;
    sfRenderWindow_clear(all->window, sfBlack);
    sfRenderWindow_setKeyRepeatEnabled(all->window, sfFalse);
    sfRenderWindow_setMouseCursorVisible(all->window, sfFalse);
    while (sfRenderWindow_isOpen(all->window)) {
        sfRenderWindow_drawSprite(all->window,
        all->menu->sprite_quit_menu, NULL);
        sfRenderWindow_drawSprite(all->window, all->menu->sprite_arrow, NULL);
        sfRenderWindow_drawSprite(all->window, all->menu->sprite_cursor, NULL);
        timer_menu(all);
        while (sfRenderWindow_pollEvent(all->window, &event)) {
            check_basic_events_menu(all, event);
            if (check_side_keys_quit_menu(all, check) == 84)
                return (84);
        }
        check = 1;
        sfRenderWindow_display(all->window);
    }
    return (0);
}