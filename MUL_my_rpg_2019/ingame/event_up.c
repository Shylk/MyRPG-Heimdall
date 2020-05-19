/*
** EPITECH PROJECT, 2019
** ingame
** File description:
** main
*/

#include <stdbool.h>
#include "../include/my.h"

void event_cave_up_1(all_t *all)
{
    X = 400;
    Y = 550;
    all->perso->pos_perso.x = 960;
    all->perso->pos_perso.y = 790;
    all->map->tab = 6;
    all->map->pos_exit.x = 840;
    all->map->pos_map.x = 560;
    all->map->pos_map.y = 240;
    sfSprite_setPosition(all->map->spr_map, all->map->pos_map);
    sfSprite_setPosition(all->perso->spr_perso, all->perso->pos_perso);
    sfSprite_setTexture(all->map->spr_map, all->map->txt_tab[6], sfTrue);
}

void event_cave_up_2(all_t *all, int random)
{
    random = rand() % 3;
    all->map->tab = random;
    sfSprite_setTexture(all->map->spr_map, all->map->txt_tab[random], sfTrue);
}

void event_cave_up_3(all_t *all, int random)
{
    random = rand() % 3;
    all->map->tab = random;
    sfSprite_setTexture(all->map->spr_map, all->map->txt_tab[random], sfTrue);
}

void event_cave_up_4(all_t *all, int random)
{
    random = rand() % 3;
    all->map->tab = random;
    sfSprite_setTexture(all->map->spr_map, all->map->txt_tab[random], sfTrue);
}

void event_cave_up(all_t *all, int random)
{
    if (all->perso->pos_perso.y <= 312 && CAVE) {
        X = 350;
        Y = 440;
        all->perso->pos_perso.x = 960;
        all->perso->pos_perso.y = 710;
        switch (all->map->tab) {
            case 2:
                event_cave_up_1(all);
                break;
            case 3:
                event_cave_up_2(all, random);
                break;
            case 4:
                event_cave_up_3(all, random);
                break;
            case 5:
                event_cave_up_4(all, random);
                break;
        }
    }
}
