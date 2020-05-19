/*
** EPITECH PROJECT, 2019
** ingame
** File description:
** main
*/

#include <stdbool.h>
#include "../include/my.h"

void event_cave_left_4(all_t *all, int random)
{
    random = rand() % 4;
    random == 2 ? random = 4 : 0;
    all->map->tab = random;
    sfSprite_setTexture(all->map->spr_map, all->map->txt_tab[random], sfTrue);
}

void event_cave_left_3(all_t *all, int random)
{
    random = rand() % 3;
    random == 2 ? random = 3 : 0;
    all->map->tab = random;
    sfSprite_setTexture(all->map->spr_map, all->map->txt_tab[random], sfTrue);
}

void event_cave_left_2(all_t *all, int random)
{
    random = rand() % 4;
    random == 2 ? random = 4 : 0;
    all->map->tab = random;
    sfSprite_setTexture(all->map->spr_map, all->map->txt_tab[random], sfTrue);
}

void event_cave_left_1(all_t *all, int random)
{
    random = rand() % 3;
    random == 1 ? random = 3 : 0;
    random == 2 ? random = 4 : 0;
    all->map->tab = random;
    sfSprite_setTexture(all->map->spr_map, all->map->txt_tab[random], sfTrue);
}

void event_cave_left(all_t *all, int random)
{
    if (all->perso->pos_perso.x <= 642 && CAVE) {
        X = 600;
        Y = 285;
        all->perso->pos_perso.x = 1210;
        all->perso->pos_perso.y = 555;
        switch (all->map->tab) {
            case 1:
                event_cave_left_1(all, random);
                break;
            case 2:
                event_cave_left_2(all, random);
                break;
            case 4:
                event_cave_left_3(all, random);
                break;
            case 5:
                event_cave_left_4(all, random);
                break;
        }
    }
}
