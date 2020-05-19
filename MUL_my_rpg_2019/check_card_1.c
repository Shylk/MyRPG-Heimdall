/*
** EPITECH PROJECT, 2020
** check
** File description:
** check
*/

#include "include/my.h"

int check_fifth_card_tree
(all_t *all, int *tier_3, sfVector2f vector_move_on_card)
{
    if (all->event->y >= 259 && all->event->y <= 418 &&
    all->event->x >= 755 && all->event->x <= 853) {
        all->perso->xp < 100
        ? all->game->can_draw_no_xp_cursor = 1 : (0);
        use_card_skill_tree(all, tier_3, 5);
        vector_move_on_card.x = 803;
        vector_move_on_card.y = 336;
        sfSprite_setPosition(all->hud->sprite_glow_skill,
        vector_move_on_card);
        all->game->can_draw_glow_card_skill_tree = 1;
        return 1;
    }
    return 0;
}

int check_fourth_card_tree
(all_t *all, int *tier_2, sfVector2f vector_move_on_card)
{
    if (all->event->y >= 503 && all->event->y <= 662 &&
    all->event->x >= 1069 && all->event->x <= 1167) {
        all->perso->xp < 60
        ? all->game->can_draw_no_xp_cursor = 1 : (0);
        use_card_skill_tree(all, tier_2, 4);
        vector_move_on_card.x = 1117;
        vector_move_on_card.y = 579;
        sfSprite_setPosition(all->hud->sprite_glow_skill,
        vector_move_on_card);
        all->game->can_draw_glow_card_skill_tree = 1;
        return 1;
    }
    return 0;
}

int check_third_card_tree
(all_t *all, int *tier_2, sfVector2f vector_move_on_card)
{
    if (all->event->y >= 503 && all->event->y <= 662 &&
    all->event->x >= 755 && all->event->x <= 853) {
        all->perso->xp < 60 ? all->game->can_draw_no_xp_cursor = 1 : (0);
        use_card_skill_tree(all, tier_2, 3);
        vector_move_on_card.x = 803;
        vector_move_on_card.y = 574;
        sfSprite_setPosition(all->hud->sprite_glow_skill,
        vector_move_on_card);
        all->game->can_draw_glow_card_skill_tree = 1;
        return 1;
    }
    return 0;
}

int check_second_card_tree
(all_t *all, int *tier_1, sfVector2f vector_move_on_card)
{
    if (all->event->y >= 739 && all->event->y <= 895 &&
    all->event->x >= 1069 && all->event->x <= 1167) {
        all->perso->xp < 20 ? all->game->can_draw_no_xp_cursor = 1 : (0);
        use_card_skill_tree(all, tier_1, 2);
        vector_move_on_card.x = 1117;
        vector_move_on_card.y = 816;
        sfSprite_setPosition(all->hud->sprite_glow_skill,
        vector_move_on_card);
        all->game->can_draw_glow_card_skill_tree = 1;
        return 1;
    }
    return 0;
}

int check_first_card_tree
(all_t *all, int *tier_1, sfVector2f vector_move_on_card)
{
    if (all->event->y >= 739 && all->event->y <= 895 &&
    all->event->x >= 755 && all->event->x <= 853) {
        all->perso->xp < 20 ? all->game->can_draw_no_xp_cursor = 1 : (0);
        use_card_skill_tree(all, tier_1, 1);
        vector_move_on_card.x = 803;
        vector_move_on_card.y = 816;
        sfSprite_setPosition(all->hud->sprite_glow_skill,
        vector_move_on_card);
        all->game->can_draw_glow_card_skill_tree = 1;
        return 1;
    }
    return 0;
}