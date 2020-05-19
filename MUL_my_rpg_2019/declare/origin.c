/*
** EPITECH PROJECT, 2019
** declare_origin
** File description:
** main
*/

#include "../include/my.h"

void declare_origin_2(all_t *all, sfVector2f origin)
{
    origin.x = 578 / 2;
    origin.y = 152 / 2;
    sfSprite_setOrigin(all->hud->sprite_key_inventory, origin);
    origin.x = 116 / 2;
    origin.y = 171 / 2;
    sfSprite_setOrigin(all->hud->sprite_glow_skill, origin);
    origin.x = 75 / 2;
    origin.y = 71 / 2;
    sfSprite_setOrigin(all->hud->sprite_no_xp_cursor, origin);
}

void declare_origin(all_t *all)
{
    sfVector2f origin;
    origin.x = all->perso->rct_perso.width / 2;
    origin.y = all->perso->rct_perso.height / 2;
    sfSprite_setOrigin(all->perso->spr_perso, origin);
    origin.x = 24;
    origin.y = 24;
    for (int i = 0; i < 4; i += 1) {
        sfSprite_setOrigin(all->hud->potion[i], origin);
    }
    origin.x = 172 / 2;
    origin.y = 170 / 2;
    sfSprite_setOrigin(all->hud->sprite_move_on_item, origin);
    origin.x = 312 / 2;
    origin.y = 315 / 2;
    sfSprite_setOrigin(all->hud->sprite_description_potion, origin);
    declare_origin_2(all, origin);
}
