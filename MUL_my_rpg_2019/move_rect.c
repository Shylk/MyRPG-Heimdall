/*
** EPITECH PROJECT, 2019
** move_rect
** File description:
** contains all rect movements
*/

#include "include/my.h"

void move_rect_perso_girl(all_t *all)
{
    if (LEFT != 0 || RIGHT != 0 || UP != 0 || DOWN != 0) {
        all->perso->rct_girl.left += all->perso->rct_girl.width;
        if (all->perso->rct_girl.left >= 149)
            all->perso->rct_girl.left = 0;
    } else
        all->perso->rct_girl.left = 0;
    sfSprite_setTextureRect(all->perso->spr_girl, all->perso->rct_girl);
    sfClock_restart(all->clocker->clock_move);
}

void move_rect_perso(all_t *all)
{
    if (LEFT != 0 || RIGHT != 0 || UP != 0 || DOWN != 0) {
        all->perso->rct_perso.left += all->perso->rct_perso.width;
        if (all->perso->rct_perso.left == all->perso->limit_rect_perso)
            all->perso->rct_perso.left = 0;
    } else
        all->perso->rct_perso.left = 0;
    sfSprite_setTextureRect(all->perso->spr_perso, all->perso->rct_perso);
    sfClock_restart(all->clocker->clock_move);
}
