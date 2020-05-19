/*
** EPITECH PROJECT, 2019
** ingame
** File description:
** main
*/

#include <stdbool.h>
#include "../include/my.h"

void event_start(all_t *all)
{
    int x = all->perso->pos_perso.x;
    int y = all->perso->pos_perso.y;

    if (all->perso->pos_perso.y > 800) {
        X = 3451;
        Y = 698;
        all->map->pos_map.x = -2509;
        all->map->pos_map.y = -158;
        sfSprite_setTexture(all->map->spr_map, all->map->txt_map[1], sfTrue);
        sfSprite_setPosition(all->map->spr_map, all->map->pos_map);
        all->map->scene = 1;
        all->perso->pos_perso.x = 942;
        all->perso->pos_perso.y = 540;
    }
    if (x >= 1018 && x <= 1071 && y >= 461 && y <= 580)
        sfRenderWindow_drawSprite(all->window,
            all->hud->sprite_skin_dialog, NULL);
}

void event_mountain_2(all_t *all)
{
    X = 148;
    Y = 3290;
    all->map->pos_map.x = -4;
    all->map->pos_map.y = -2477;
    sfSprite_setTexture(all->map->spr_map, all->map->txt_map[1], sfTrue);
    sfSprite_setPosition(all->map->spr_map, all->map->pos_map);
    all->map->scene = 1;
    all->perso->pos_perso.x = 144;
    all->perso->pos_perso.y = 813;
    all->perso->pos_girl.x = 120;
    all->perso->pos_girl.y = 700;
}

void event_mountain(all_t *all)
{
    if (all->perso->pos_perso.y > 815)
        event_mountain_2(all);
    if (MOUNTAIN && all->perso->talk_to_mayor_daughter == 0
        && all->perso->ask_find_daughter_mayor == 1
        && all->perso->pos_perso.x >= 710
        && all->perso->pos_perso.x <= 990
        && all->perso->pos_perso.y >= 570
        && all->perso->pos_perso.y <= 660)
            dialog_mayor_little_daughter(all);
}
