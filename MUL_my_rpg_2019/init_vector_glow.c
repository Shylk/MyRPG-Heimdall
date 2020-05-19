/*
** EPITECH PROJECT, 2020
** init
** File description:
** init
*/

#include "include/my.h"

void init_vector_no_xp(all_t *all, sfVector2f *vector_no_xp)
{
    vector_no_xp->x = all->event->x;
    vector_no_xp->y = all->event->y;
    sfSprite_setPosition(all->hud->sprite_no_xp_cursor, *vector_no_xp);
}

void init_vector_move_on_card(sfVector2f *vector_move_on_card)
{
    vector_move_on_card->x = 0;
    vector_move_on_card->y = 0;
}

void reinit_can_draw_var(all_t *all)
{
    all->game->can_draw_glow_card_skill_tree = 0;
    all->game->can_draw_no_xp_cursor = 0;
}