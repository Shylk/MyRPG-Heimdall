/*
** EPITECH PROJECT, 2020
** game
** File description:
** plain
*/

#include "include/my.h"

void left_right_up_down(all_t *all)
{
    if (LEFT == 1 && RIGHT == 1) {
        LEFT = 0;
        RIGHT = 0;
        sfSprite_setTexture
            (all->perso->spr_perso, all->perso->txt_perso[3], sfTrue);
        sfSprite_setTexture
            (all->perso->spr_girl, all->perso->txt_girl[3], sfTrue);
        sfSprite_setTexture(all->hud->sprite_cursor_map,
        all->hud->text_cursor_map_down, sfTrue);
    }
    if (UP == 1 && DOWN == 1) {
        UP = 0;
        DOWN = 0;
        sfSprite_setTexture
            (all->perso->spr_perso, all->perso->txt_perso[3], sfTrue);
        sfSprite_setTexture
            (all->perso->spr_girl, all->perso->txt_girl[3], sfTrue);
        sfSprite_setTexture(all->hud->sprite_cursor_map,
        all->hud->text_cursor_map_down, sfTrue);
    }
}

void set_new_pos(all_t *all)
{
    all->map->pos_map.x += 3 + SPRINT;
    all->game->vector.x += 3 + SPRINT;
    all->game->vector_chief.x += 3 + SPRINT;
    all->game->vector_old_man.x += 3 + SPRINT;
    all->game->vector_mayor.x += 3 + SPRINT;
    all->game->vector_strange_man.x += 3 + SPRINT;
    all->game->vector_dead_body.x += 3 + SPRINT;
    all->game->vector_tree.x += 3 + SPRINT;
    X -= 3 + SPRINT;
}

void left_side_map(all_t *all)
{
    if (all->perso->pos_perso.x > 944) {
        all->perso->pos_perso.x -= 3 + SPRINT;
        all->perso->pos_girl.x -= 3 + SPRINT;
        X -= 3 + SPRINT;
        move_cursor_mini_map(all, LEFT_CURSOR);
        sfSprite_setTexture
            (all->perso->spr_perso, all->perso->txt_perso[0], sfTrue);
        sfSprite_setTexture
            (all->perso->spr_girl, all->perso->txt_girl[0], sfTrue);
    } else {
        set_new_pos(all);
        move_cursor_mini_map(all, LEFT_CURSOR);
        sfSprite_setTexture
            (all->perso->spr_perso, all->perso->txt_perso[0], sfTrue);
        sfSprite_setTexture
            (all->perso->spr_girl, all->perso->txt_girl[0], sfTrue);
    }
}

void set_new_pos_right(all_t *all)
{
    all->map->pos_map.x -= 3 + SPRINT;
    all->game->vector.x -= 3 + SPRINT;
    all->game->vector_chief.x -= 3 + SPRINT;
    all->game->vector_old_man.x -= 3 + SPRINT;
    all->game->vector_mayor.x -= 3 + SPRINT;
    all->game->vector_strange_man.x -= 3 + SPRINT;
    all->game->vector_dead_body.x -= 3 + SPRINT;
    all->game->vector_tree.x -= 3 + SPRINT;
    X += 3 + SPRINT;
}

void right_side_map(all_t *all)
{
    if (all->perso->pos_perso.x < 944) {
        all->perso->pos_perso.x += 3 + SPRINT;
        all->perso->pos_girl.x += 3 + SPRINT;
        X += 3 + SPRINT;
        move_cursor_mini_map(all, RIGHT_CURSOR);
        sfSprite_setTexture
            (all->perso->spr_perso, all->perso->txt_perso[1], sfTrue);
        sfSprite_setTexture
            (all->perso->spr_girl, all->perso->txt_girl[1], sfTrue);
    } else {
        set_new_pos_right(all);
        move_cursor_mini_map(all, RIGHT_CURSOR);
        sfSprite_setTexture
            (all->perso->spr_perso, all->perso->txt_perso[1], sfTrue);
        sfSprite_setTexture
            (all->perso->spr_girl, all->perso->txt_girl[1], sfTrue);
    }
}
