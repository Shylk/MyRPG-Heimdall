/*
** EPITECH PROJECT, 2019
** mouvement event
** File description:
** contains all mouvement events
*/

#include "include/my.h"

void mouvement_up_down(all_t *all)
{
    if (sfKeyboard_isKeyPressed(sfKeyUp)) {
        UP = 1;
        sfSprite_setTexture(all->perso->spr_perso,
        all->perso->txt_perso[2], sfTrue);
        sfSprite_setTexture(all->hud->sprite_cursor_map,
        all->hud->text_cursor_map_up, sfTrue);
    } else
        UP = 0;
    if (sfKeyboard_isKeyPressed(sfKeyDown)) {
        DOWN = 1;
        sfSprite_setTexture(all->perso->spr_perso,
        all->perso->txt_perso[3], sfTrue);
        sfSprite_setTexture(all->hud->sprite_cursor_map,
        all->hud->text_cursor_map_down, sfTrue);
    } else
        DOWN = 0;
}

void mouvement_left_right(all_t *all)
{
    if (sfKeyboard_isKeyPressed(sfKeyLeft)) {
        LEFT = 1;
        sfSprite_setTexture(all->perso->spr_perso,
        all->perso->txt_perso[0], sfTrue);
        sfSprite_setTexture(all->hud->sprite_cursor_map,
        all->hud->text_cursor_map_left, sfTrue);
    } else
        LEFT = 0;
    if (sfKeyboard_isKeyPressed(sfKeyRight)) {
        RIGHT = 1;
        sfSprite_setTexture(all->perso->spr_perso,
        all->perso->txt_perso[1], sfTrue);
        sfSprite_setTexture(all->hud->sprite_cursor_map,
        all->hud->text_cursor_map_right, sfTrue);
    } else
        RIGHT = 0;
}

void mouvement_event(all_t *all)
{
    mouvement_up_down(all);
    mouvement_left_right(all);
    if (sfKeyboard_isKeyPressed(sfKeyLShift)) {
        SPRINT = 3;
        SPRINT_CURSOR = 0.62;
    } else {
        SPRINT = 0;
        SPRINT_CURSOR = 0;
    }
}
