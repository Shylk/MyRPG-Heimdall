/*
** EPITECH PROJECT, 2020
** damage
** File description:
** to player
*/

#include "../include/my.h"

void damage_shield(all_t *all)
{
    if (all->fight->ally_turn == 0) {
        if (all->menu->menu == 6)
            all->perso->pv -= 20;
        else all->perso->pv -= 5;
    } else if (all->fight->ally_turn == 1)
        all->fight->hp_girl -= 5;
}

void damage_brut(all_t *all)
{
    if (all->fight->ally_turn == 0) {
        if (all->menu->menu == 6)
            all->perso->pv -= 20;
        else all->perso->pv -= 10;
    }
    else if (all->fight->ally_turn == 1)
        all->fight->hp_girl -= 10;
}

void damage_to_player(all_t *all)
{
    if (all->fight->select == 4)
        damage_shield(all);
    if (all->fight->select != 4)
        damage_brut(all);
}

int player_attack(all_t *all)
{
    select_attack_choice(all);
    if (all->fight->attack_selected == 1) {
        if (all->fight->ally_turn == 0) {
            if (animation_attack_sword(all) == 84)
                return (84);
        } else {
            if (animation_girl(all) == 84)
                return (84);
        }
    }
    return (0);
}
