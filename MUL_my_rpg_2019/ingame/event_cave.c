/*
** EPITECH PROJECT, 2019
** ingame
** File description:
** main
*/

#include <stdbool.h>
#include "../include/my.h"

void event_cave(all_t *all)
{
    int random = 0;
    event_cave_left(all, random);
    event_cave_right(all, random);
    event_cave_down(all, random);
    event_cave_up(all, random);
}

void event_end(all_t *all)
{
    if (all->perso->pos_perso.y >= 820 && DOWN == 1) {
        X = 350;
        Y = 100;
        all->perso->pos_perso.x = 960;
        all->perso->pos_perso.y = 370;
        all->map->tab = 2;
        all->map->pos_exit.y = 812;
        all->map->pos_map.x = 660;
        all->map->pos_map.y = 320;
        sfSprite_setPosition(all->map->spr_map, all->map->pos_map);
        sfSprite_setTexture(all->map->spr_map, all->map->txt_tab[2], sfTrue);
    }
}
