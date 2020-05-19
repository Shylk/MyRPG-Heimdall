/*
** EPITECH PROJECT, 2019
** ingame
** File description:
** main
*/

#include <stdbool.h>
#include "../include/my.h"

void event_cave_down_1(all_t *all, int random)
{
    random = rand() % 3;
    random == 0 ? random = 3 : 0;
    random == 1 ? random = 4 : 0;
    random == 2 ? random = 5 : 0;
    all->map->tab = random;
    sfSprite_setTexture(all->map->spr_map, all->map->txt_tab[random], sfTrue);
}

void event_cave_down_2(all_t *all, int random)
{
    random = rand() % 3;
    random == 0 ? random = 3 : 0;
    random == 1 ? random = 4 : 0;
    random == 2 ? random = 5 : 0;
    all->map->tab = random;
    sfSprite_setTexture(all->map->spr_map, all->map->txt_tab[random], sfTrue);
}

void event_cave_down_3(all_t *all, int random)
{
    random = rand() % 3;
    random == 0 ? random = 3 : 0;
    random == 1 ? random = 4 : 0;
    random == 2 ? random = 5 : 0;
    all->map->tab = random;
    sfSprite_setTexture(all->map->spr_map, all->map->txt_tab[random], sfTrue);
}

void event_cave_down_4(all_t *all)
{
    X = 5491;
    Y = 176;
    all->perso->pos_perso.x = 1410;
    all->perso->pos_perso.y = 174;
    all->map->scene = 1;
    all->map->pos_map.x = -4081;
    all->map->pos_map.y = -2;
    sfSprite_setPosition(all->map->spr_map, all->map->pos_map);
    sfSprite_setTexture(all->map->spr_map, all->map->txt_map[1], sfTrue);
}

void event_cave_down(all_t *all, int random)
{
    if (all->perso->pos_perso.y >= 752 && CAVE) {
        X = 350;
        Y = 100;
        all->perso->pos_perso.x = 960;
        all->perso->pos_perso.y = 370;
        switch (all->map->tab) {
            case 0:
                event_cave_down_1(all, random);
                break;
            case 1:
                event_cave_down_2(all, random);
                break;
            case 2:
                event_cave_down_3(all, random);
                break;
            case 4:
                event_cave_down_4(all);
                break;
        }
    }
}
