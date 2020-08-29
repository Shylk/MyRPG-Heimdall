/*
** EPITECH PROJECT, 2019
** menu_managment
** File description:
** main
*/

#include <stdbool.h>
#include "../include/my.h"

void key_enter_event_settings_menu(all_t *all)
{
    if (all->menu->vector.y == 230) {
        if (all->menu->music == false) {
            sfMusic_play(all->music->menu_music);
            all->menu->music = true;
        } else {
            sfMusic_stop(all->music->menu_music);
            all->menu->music = false;
        }
    }
    if (all->menu->vector.y == 418) {
        if (all->menu->sound_effects == false)
            all->menu->sound_effects = true;
        else all->menu->sound_effects = false;
    }
    if (all->menu->vector.y == 611)
        all->menu->section = 1;
    if (all->menu->vector.y == 800)
        all->menu->section = 2;
}

void key_down_event_settings_menu(all_t *all)
{
    int y = all->menu->vector.y;

    stop_and_play_click_sound(all);
    switch(y) {
        case 230:
            give_new_position_to_arrow(all, 640, 418);
            sfSprite_setTexture(all->menu->sprite_settings_menu,
            all->menu->glows_settings[1], sfTrue);
            break;
        case 418:
            give_new_position_to_arrow(all, 710, 611);
            sfSprite_setTexture(all->menu->sprite_settings_menu,
            all->menu->glows_settings[2], sfTrue);
            break;
        case 611:
            give_new_position_to_arrow(all, 670, 800);
            sfSprite_setTexture(all->menu->sprite_settings_menu,
            all->menu->glows_settings[3], sfTrue);
            break;
    }
}

void key_up_event_settings_menu(all_t *all)
{
    int y = all->menu->vector.y;

    stop_and_play_click_sound(all);
    switch(y) {
        case 418:
            give_new_position_to_arrow(all, 760, 230);
            sfSprite_setTexture(all->menu->sprite_settings_menu,
            all->menu->glows_settings[0], sfTrue);
            break;
        case 611:
            give_new_position_to_arrow(all, 640, 418);
            sfSprite_setTexture(all->menu->sprite_settings_menu,
            all->menu->glows_settings[1], sfTrue);
            break;
        case 800:
            give_new_position_to_arrow(all, 710, 611);
            sfSprite_setTexture(all->menu->sprite_settings_menu,
            all->menu->glows_settings[2], sfTrue);
            break;
    }
}