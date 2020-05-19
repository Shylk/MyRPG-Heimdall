/*
** EPITECH PROJECT, 2019
** move_rect
** File description:
** contains all rect movements
*/

#include "include/my.h"

void events_section_bestiary(all_t *all, int x, int y)
{
    if (all->pause->section == 3 && x >= 1639
    && x <= 1841 && y >= 59 && y <= 158) {
        if (all->pause->bestiary_scene == 1)
            all->pause->bestiary_scene = 2;
        else if (all->pause->bestiary_scene == 2)
            all->pause->bestiary_scene = 3;

    }
    if (all->pause->section == 3 && x >= 60 && x <= 261
    && y >= 59 && y <= 158) {
        if (all->pause->bestiary_scene == 1)
            all->pause->section = 0;
        else if (all->pause->bestiary_scene == 2)
            all->pause->bestiary_scene = 1;
        else all->pause->bestiary_scene = 2;
    }
}

void sound_and_click(all_t *all, int x, int y)
{
    if (x >= 1374 && x <= 1624 && y >= 670 && y <= 719) {
        stop_and_play_click_sound(all);
        all->pause->bestiary_scene = 1;
        all->pause->section = 3;
    }
}

int events_section_0(all_t *all, int x, int y)
{
    if (all->pause->section == 0) {
        if (x >= 218 && x <= 628 && y >= 346 && y <= 381) {
            stop_and_play_click_sound(all);
            return 1; }
        if (x >= 1402 && x <= 1588 && y >= 316 && y <= 354) {
            stop_and_play_click_sound(all);
            if (set_all_stat_texts(all) == 84)
                return (84);
            all->pause->section = 1; }
        if (x >= 271 && x <= 556 && y >= 670 && y <= 719) {
            stop_and_play_click_sound(all);
            sfRenderWindow_close(all->window); }
        sound_and_click(all, x, y);
        if (x >= 175 && x <= 666 && y >= 504 && y <= 549) {
            all->menu->menu = 0;
            all->event->check = 10;
            give_new_position_to_arrow(all, 700, 335);
            return 1; } }
            return 0;
}
