/*
** EPITECH PROJECT, 2020
** is_tier.c
** File description:
** is_tier
*/

#include "include/my.h"

void is_tier_1(all_t *all, int *tier, int pos_card)
{
    if (all->perso->xp >= 20) {
        if (pos_card == 1) {
            all->perso->pv += 10;
            *tier = 1;
        }
        if (pos_card == 2) {
            all->stat->attack += 5;
            *tier = 1;
        }
    }
}

void is_tier_2(all_t *all, int *tier, int pos_card)
{
    if (all->perso->xp >= 60) {
        if (pos_card == 3) {
            all->perso->pv += 15;
            *tier = 1;
        }
        if (pos_card == 4) {
            all->stat->attack += 10;
            *tier = 1;
        }
    }
}

void is_tier_3(all_t *all, int *tier, int pos_card)
{
    if (all->perso->xp >= 100) {
        if (pos_card == 5) {
            all->perso->pv += 20;
            *tier = 1;
        }
        if (pos_card == 6) {
            all->stat->attack += 15;
            *tier = 1;
        }
    }
}

void check_if_un_or_available_glow(all_t *all, int tier)
{
    if (tier == 0)
        sfSprite_setTexture
        (all->hud->sprite_glow_skill, all->hud->text_glow_skill, sfTrue);
    else
        sfSprite_setTexture
        (all->hud->sprite_glow_skill, all->hud->text_unvailable, sfTrue);
}

void use_card_skill_tree(all_t *all, int *tier, int pos_card)
{
    check_if_un_or_available_glow(all, *tier);
    if (all->event->event.type == sfEvtMouseButtonPressed && *tier == 0) {
        is_tier_1(all, tier, pos_card);
        is_tier_2(all, tier, pos_card);
        is_tier_3(all, tier, pos_card);
    }
}