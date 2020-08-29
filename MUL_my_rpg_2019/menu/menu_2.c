/*
** EPITECH PROJECT, 2019
** menu_managment
** File description:
** main
*/

#include <stdbool.h>
#include "../include/my.h"

void check_key_down_menu(all_t *all)
{
    int y = all->menu->vector.y;
    if (sfKeyboard_isKeyPressed(sfKeyDown)) {
        stop_and_play_click_sound(all);
        switch(y) {
            case 335:
                give_new_position_to_arrow(all, 580, 480);
                sfSprite_setTexture(all->menu->sprite_wallpaper,
                all->menu->glows_menu[1], sfTrue);
                break;
            case 480:
                give_new_position_to_arrow(all, 720, 643);
                sfSprite_setTexture(all->menu->sprite_wallpaper,
                all->menu->glows_menu[2], sfTrue);
                break;
            case 643:
                give_new_position_to_arrow(all, 630, 810);
                sfSprite_setTexture(all->menu->sprite_wallpaper,
                all->menu->glows_menu[3], sfTrue);
                break; }
    }
}

void check_key_up_menu(all_t *all)
{
    int y = all->menu->vector.y;
    if (sfKeyboard_isKeyPressed(sfKeyUp)) {
        stop_and_play_click_sound(all);
        switch(y) {
            case 480:
                give_new_position_to_arrow(all, 700, 335);
                sfSprite_setTexture(all->menu->sprite_wallpaper,
                all->menu->glows_menu[0], sfTrue);
                break;
            case 643:
                give_new_position_to_arrow(all, 580, 480);
                sfSprite_setTexture(all->menu->sprite_wallpaper,
                all->menu->glows_menu[1], sfTrue);
                break;
            case 810:
                give_new_position_to_arrow(all, 720, 643);
                sfSprite_setTexture(all->menu->sprite_wallpaper,
                all->menu->glows_menu[2], sfTrue);
                break; }
    }
}