/*
** EPITECH PROJECT, 2019
** menu_managment
** File description:
** main
*/

#include <stdbool.h>
#include "include/my.h"

void move_rect(sfIntRect *rect, int reset, int limit)
{
    rect->left += rect->width;
    if (rect->left >= limit)
        rect->left = reset;
}

int menu_managment(all_t *all)
{
    if (MENU)
        if (menu(all) == 84)
            return (84);
    return (0);
}

void timer_menu(all_t *all)
{
    all->menu->time = sfClock_getElapsedTime(all->menu->clock);
    all->menu->seconds = all->menu->time.microseconds / 1000000.0;
    if (all->menu->seconds >= 0.2) {
        move_rect(&all->menu->rect, 0, 200);
        sfSprite_setTextureRect(all->menu->sprite_arrow, all->menu->rect);
        sfClock_restart(all->menu->clock);
    }
}

void stop_and_play_click_sound(all_t *all)
{
    if (all->menu->sound_effects == true) {
        sfMusic_stop(all->music->menu_click);
        sfMusic_play(all->music->menu_click);
    }
}

void check_basic_events_menu(all_t *all, sfEvent event)
{
    if (event.type == sfEvtClosed)
        sfRenderWindow_close(all->window);
    if (event.type == sfEvtMouseMoved) {
        all->menu->vec_cursor.x = event.mouseMove.x;
        all->menu->vec_cursor.y = event.mouseMove.y;
        sfSprite_setPosition(all->menu->sprite_cursor, all->menu->vec_cursor);
    }
}
