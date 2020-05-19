/*
** EPITECH PROJECT, 2019
** ingame
** File description:
** main
*/

#include <stdbool.h>
#include "../include/my.h"

void event_plain_3(all_t *all)
{
    if (all->map->pos_map.x <= -4076 && all->map->pos_map.y <= 1
        && all->perso->pos_perso.x <= 1420 && all->perso->pos_perso.x >= 1390
        && all->perso->pos_perso.y <= 120 && UP == 1) {
            X = 350;
            Y = 440;
            all->map->pos_map.x = 660;
            all->map->pos_map.y = 320;
            sfSprite_setTexture(all->map->spr_map,
                all->map->txt_tab[4], sfTrue);
            sfSprite_setPosition(all->map->spr_map, all->map->pos_map);
            all->map->scene = 4;
            all->map->tab = 4;
            all->perso->pos_perso.x = 960;
            all->perso->pos_perso.y = 710;
        }
}

void event_plain_2(all_t *all)
{
    if (all->map->pos_map.x <= -1 && all->map->pos_map.x >= -4
        && all->map->pos_map.y <= -2477 && all->map->pos_map.y >= -2480
        && all->perso->pos_perso.x <= 150 && all->perso->pos_perso.y <= 790
        && UP == 1) {
            X = 415;
            Y = 548;
            all->map->pos_map.x = 560;
            all->map->pos_map.y = 241;
            sfSprite_setTexture(all->map->spr_map,
                all->map->txt_map[2], sfTrue);
            sfSprite_setPosition(all->map->spr_map, all->map->pos_map);
            all->map->scene = 2;
            all->perso->pos_perso.x = 975;
            all->perso->pos_perso.y = 789;
        }
}

void event_plain(all_t *all)
{
    if (all->map->pos_map.x >= -2510 && all->map->pos_map.x <= -2495
        && all->map->pos_map.y <= -90 && all->map->pos_map.y >= -170
        && UP == 1) {
            X = 176;
            Y = 410;
            all->map->pos_map.x = 820;
            all->map->pos_map.y = 360;
            sfSprite_setTexture(all->map->spr_map,
                all->map->txt_map[0], sfTrue);
            sfSprite_setPosition(all->map->spr_map, all->map->pos_map);
            all->map->scene = 0;
            all->perso->pos_perso.x = 996;
            all->perso->pos_perso.y = 770;
        }
    event_plain_2(all);
    event_plain_3(all);
}
