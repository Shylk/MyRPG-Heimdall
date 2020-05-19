/*
** EPITECH PROJECT, 2020
** game
** File description:
** plain 2
*/

#include "include/my.h"

void set_new_pos_up(all_t *all)
{
    all->map->pos_map.y += 3 + SPRINT;
    all->game->vector.y += 3 + SPRINT;
    all->game->vector_chief.y += 3 + SPRINT;
    all->game->vector_old_man.y += 3 + SPRINT;
    all->game->vector_mayor.y += 3 + SPRINT;
    all->game->vector_strange_man.y += 3 + SPRINT;
    all->game->vector_dead_body.y += 3 + SPRINT;
    all->game->vector_tree.y += 3 + SPRINT;
    Y -= 3 + SPRINT;
}

void up_side_map(all_t *all)
{
    if (all->perso->pos_perso.y > 516) {
        all->perso->pos_perso.y -= 3 + SPRINT;
        all->perso->pos_girl.y -= 3 + SPRINT;
        Y -= 3 + SPRINT;
        move_cursor_mini_map(all, UP_CURSOR);
        sfSprite_setTexture
            (all->perso->spr_perso, all->perso->txt_perso[2], sfTrue);
        sfSprite_setTexture
            (all->perso->spr_girl, all->perso->txt_girl[2], sfTrue);
    } else {
        set_new_pos_up(all);
        move_cursor_mini_map(all, UP_CURSOR);
        sfSprite_setTexture
            (all->perso->spr_perso, all->perso->txt_perso[2], sfTrue);
        sfSprite_setTexture
            (all->perso->spr_girl, all->perso->txt_girl[2], sfTrue);
    }
}

void set_new_pos_down(all_t *all)
{
    all->map->pos_map.y -= 3 + SPRINT;
    all->game->vector.y -= 3 + SPRINT;
    all->game->vector_chief.y -= 3 + SPRINT;
    all->game->vector_old_man.y -= 3 + SPRINT;
    all->game->vector_mayor.y -= 3 + SPRINT;
    all->game->vector_strange_man.y -= 3 + SPRINT;
    all->game->vector_dead_body.y -= 3 + SPRINT;
    all->game->vector_tree.y -= 3 + SPRINT;
    Y += 3 + SPRINT;
}

void down_side_map(all_t *all)
{
    if (all->perso->pos_perso.y < 516) {
        all->perso->pos_perso.y += 3 + SPRINT;
        all->perso->pos_girl.y += 3 + SPRINT;
        Y += 3 + SPRINT;
        move_cursor_mini_map(all, DOWN_CURSOR);
        sfSprite_setTexture
            (all->perso->spr_perso, all->perso->txt_perso[3], sfTrue);
        sfSprite_setTexture
            (all->perso->spr_girl, all->perso->txt_girl[3], sfTrue);
    } else {
        set_new_pos_down(all);
        move_cursor_mini_map(all, DOWN_CURSOR);
        sfSprite_setTexture
            (all->perso->spr_perso, all->perso->txt_perso[3], sfTrue);
        sfSprite_setTexture
            (all->perso->spr_girl, all->perso->txt_girl[3], sfTrue);
    }
}
