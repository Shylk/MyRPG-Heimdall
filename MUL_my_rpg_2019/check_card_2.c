/*
** EPITECH PROJECT, 2020
** check
** File description:
** check
*/

#include "include/my.h"

int check_sixth_card_tree
(all_t *all, int *tier_3, sfVector2f vector_move_on_card)
{
    if (all->event->y >= 259 && all->event->y <= 418 &&
    all->event->x >= 1069 && all->event->x <= 1167) {
        all->perso->xp < 100
        ? all->game->can_draw_no_xp_cursor = 1 : (0);
        use_card_skill_tree(all, tier_3, 6);
        vector_move_on_card.x = 1117;
        vector_move_on_card.y = 338;
        sfSprite_setPosition(all->hud->sprite_glow_skill,
        vector_move_on_card);
        all->game->can_draw_glow_card_skill_tree = 1;
        return 1;
    }
    return 0;
}