/*
** EPITECH PROJECT, 2020
** game
** File description:
** plain call all the function form direction
*/

#include "include/my.h"

void left(all_t *all)
{
    if (LEFT == 1 && all->map->pos_map.x <= -5 && check_left(all) == 0) {
        left_side_map(all);
    } else if (LEFT == 1 && all->map->pos_map.x > -5 && check_left(all) == 0) {
        all->perso->pos_perso.x -= 3 + SPRINT;
        all->perso->pos_girl.x -= 3 + SPRINT;
        X -= 3 + SPRINT;
        move_cursor_mini_map(all, LEFT_CURSOR);
        sfSprite_setTexture
            (all->perso->spr_perso, all->perso->txt_perso[0], sfTrue);
        sfSprite_setTexture
            (all->perso->spr_girl, all->perso->txt_girl[0], sfTrue);
    }
}

void right(all_t *all)
{
    if (RIGHT == 1 && all->map->pos_map.x >= -4075 && check_right(all) == 0) {
        right_side_map(all);
    } else if (RIGHT == 1 && all->map->pos_map.x < -4075 &&
        check_right(all) == 0) {
        all->perso->pos_perso.x += 3 + SPRINT;
        all->perso->pos_girl.x += 3 + SPRINT;
        X += 3 + SPRINT;
        move_cursor_mini_map(all, RIGHT_CURSOR);
        sfSprite_setTexture
            (all->perso->spr_perso, all->perso->txt_perso[1], sfTrue);
        sfSprite_setTexture
            (all->perso->spr_girl, all->perso->txt_girl[1], sfTrue);
    }
}

void up(all_t *all)
{
    if (UP == 1 && all->map->pos_map.y <= -5 && check_up(all) == 0) {
        up_side_map(all);
    } else if (UP == 1 && all->map->pos_map.y > -5 && check_up(all) == 0) {
        all->perso->pos_perso.y -= 3 + SPRINT;
        all->perso->pos_girl.y -= 3 + SPRINT;
        Y -= 3 + SPRINT;
        move_cursor_mini_map(all, UP_CURSOR);
        sfSprite_setTexture
            (all->perso->spr_perso, all->perso->txt_perso[2], sfTrue);
        sfSprite_setTexture
            (all->perso->spr_girl, all->perso->txt_girl[2], sfTrue);
    }
}

void down(all_t *all)
{
    if (DOWN == 1 && all->map->pos_map.y >= -2475 && check_down(all) == 0) {
        down_side_map(all);
    } else if (DOWN == 1 && all->map->pos_map.y < -2475 &&
        check_down(all) == 0) {
        all->perso->pos_perso.y += 3 + SPRINT;
        all->perso->pos_girl.y += 3 + SPRINT;
        Y += 3 + SPRINT;
        move_cursor_mini_map(all, DOWN_CURSOR);
        sfSprite_setTexture
            (all->perso->spr_perso, all->perso->txt_perso[3], sfTrue);
        sfSprite_setTexture
            (all->perso->spr_girl, all->perso->txt_girl[3], sfTrue);
    }
}

int game_plain(all_t *all)
{
    if (all->clocker->seconds_move >= 0.2 ||
        (all->clocker->seconds_move >= 0.1 && SPRINT != 0)) {
        move_rect_perso(all);
        move_rect_perso_girl(all);
    }
    left_right_up_down(all);
    left(all);
    right(all);
    up(all);
    down(all);
    if (print_and_change_positions(all) == 84)
        return (84);
    return (0);
}
