/*
** EPITECH PROJECT, 2020
** second monster
** File description:
** management
*/

#include "../include/my.h"

void animation_blue_die(all_t *all)
{
    static int count = 70;
    count--;
    if (count <= 0 && all->fight->hp_enemie2 <= 0)
        reset_value_blue_monster(all);
}

void animation_blue2_die(all_t *all)
{
    static int count = 70;
    count--;
    if (count <= 0 && all->fight->hp_enemie <= 0)
        reset_value_blue_monster(all);
}

void move_rect_blue_monsters(all_t *all)
{
    all->fight->rct_blue.left += 100;
    if (all->fight->rct_blue.left >= 399)
        all->fight->rct_blue.left = 0;
    sfSprite_setTextureRect
        (all->fight->sprite_gobelin, all->fight->rct_blue);
    all->fight->rct_blue2.left += 100;
    if (all->fight->rct_blue2.left >= 399)
        all->fight->rct_blue2.left = 0;
    sfSprite_setTextureRect
        (all->fight->sprite_gobelin2, all->fight->rct_blue2);
}

void check_max_hp(all_t *all)
{
    if (all->perso->player_class == 1 && all->perso->pv > 100)
        all->perso->pv = 100;
    if (all->perso->player_class == 2 && all->perso->pv > 115)
        all->perso->pv = 115;
    if (all->perso->player_class == 3 && all->perso->pv > 80)
        all->perso->pv = 80;
}

void use_potion(all_t *all)
{
    for (int i = 0; i <= 3; i++)
        if (all->hud->check_placement_inventory[i] == POTION) {
            all->perso->pv += 50;
            check_max_hp(all);
            all->hud->check_placement_inventory[i] = 0;
            all->fight->turn = 1;
            all->fight->choice = 0;
            break;
        }
    all->fight->choice = 0;
}
