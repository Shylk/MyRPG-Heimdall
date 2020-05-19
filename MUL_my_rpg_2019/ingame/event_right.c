/*
** EPITECH PROJECT, 2019
** ingame
** File description:
** main
*/

#include <stdbool.h>
#include "../include/my.h"

void event_cave_right_1(all_t *all, int random)
{
    random = rand() % 4;
    random == 0 ? random = 4 : 0;
    random == 3 ? random = 5 : 0;
    all->map->tab = random;
    sfSprite_setTexture(all->map->spr_map, all->map->txt_tab[random], sfTrue);
}

void event_cave_right_2(all_t *all, int random)
{
    random = rand() % 3;
    random == 0 ? random = 4 : 0;
    random == 1 ? random = 5 : 0;
    all->map->tab = random;
    sfSprite_setTexture(all->map->spr_map, all->map->txt_tab[random], sfTrue);
}

void event_cave_right_3(all_t *all, int random)
{
    random = rand() % 4;
    random == 0 ? random = 4 : 0;
    random == 3 ? random = 5 : 0;
    all->map->tab = random;
    sfSprite_setTexture(all->map->spr_map, all->map->txt_tab[random], sfTrue);
}

void event_cave_right_4(all_t *all, int random)
{
    random = rand() % 3;
    random == 0 ? random = 5 : 0;
    all->map->tab = random;
    sfSprite_setTexture(all->map->spr_map, all->map->txt_tab[random], sfTrue);
}

void event_cave_right(all_t *all, int random)
{
    if (all->perso->pos_perso.x >= 1268 && CAVE) {
        X = 100;
        Y = 285;
        all->perso->pos_perso.x = 710;
        all->perso->pos_perso.y = 555;
        switch (all->map->tab) {
            case 0:
                event_cave_right_1(all, random);
                break;
            case 1:
                event_cave_right_2(all, random);
                break;
            case 3:
                event_cave_right_3(all, random);
                break;
            case 4:
                event_cave_right_4(all, random);
                break;
        }
    }
}
