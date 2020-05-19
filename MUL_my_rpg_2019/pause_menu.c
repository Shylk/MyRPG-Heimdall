/*
** EPITECH PROJECT, 2019
** move_rect
** File description:
** contains all rect movements
*/

#include "include/my.h"

int check_clicks_pause_menu(all_t *all, sfEvent event)
{
    int x = 0, y = 0;

    if (event.type == sfEvtMouseButtonReleased) {
        x = event.mouseButton.x;
        y = event.mouseButton.y;
        if (events_section_0(all, x, y) == 1)
            return 1;
        events_section_bestiary(all, x, y);
    }
    if (sfKeyboard_isKeyPressed(sfKeyEscape) && all->pause->section == 1) {
        stop_and_play_click_sound(all);
        all->pause->section = 0;
    }
    return 0;
}

void display_sprites_pause_menu_2(all_t *all, int section)
{
    if (section == 3) {
        if (all->pause->bestiary_scene == 1)
            sfRenderWindow_drawSprite(all->window,
            all->pause->sprite_bestiary_goblin, NULL);
        if (all->pause->bestiary_scene == 2)
            sfRenderWindow_drawSprite(all->window,
            all->pause->sprite_bestiary_bluebob, NULL);
        if (all->pause->bestiary_scene == 3)
            sfRenderWindow_drawSprite(all->window,
            all->pause->sprite_bestiary_minotaur, NULL);
    }
    sfRenderWindow_drawSprite(all->window, all->menu->sprite_cursor, NULL);
}

void display_sprites_pause_menu(all_t *all)
{
    int section = all->pause->section;

    if (section == 0)
        sfRenderWindow_drawSprite(all->window, all->pause->sprite, NULL);
    if (section == 1) {
        sfRenderWindow_drawSprite(all->window, all->pause->sprite_stats, NULL);
        sfRenderWindow_drawText(all->window, all->stat->txt_speed, NULL);
        sfRenderWindow_drawText(all->window, all->stat->txt_attack, NULL);
        sfRenderWindow_drawText(all->window, all->stat->txt_life_max, NULL);
        sfRenderWindow_drawText(all->window, all->stat->txt_defense, NULL);
        sfRenderWindow_drawText(all->window,
        all->stat->txt_intelligence, NULL);
        sfRenderWindow_drawText(all->window, all->stat->txt_luck, NULL);
        sfRenderWindow_drawText(all->window, all->stat->txt_dexterity, NULL);
        sfRenderWindow_drawText(all->window, all->stat->txt_strengh, NULL);
    }
    display_sprites_pause_menu_2(all, section);
}

int pause_menu(all_t *all)
{
    sfEvent event;

    sfRenderWindow_setMouseCursorVisible(all->window, sfFalse);
    while (sfRenderWindow_isOpen(all->window)) {
        sfRenderWindow_clear(all->window, sfBlack);
        if (print_and_change_positions(all) == 84)
            return (84);
        display_sprites_pause_menu(all);
        while (sfRenderWindow_pollEvent(all->window, &event)) {
            check_basic_events_menu(all, event);
            if (check_clicks_pause_menu(all, event) == 1)
                return (0);
        }
        sfRenderWindow_display(all->window);
    }
    return (0);
}