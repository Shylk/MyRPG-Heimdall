/*
** EPITECH PROJECT, 2020
** enemy turn
** File description:
** management
*/

#include "../include/my.h"

void draw_shield(all_t *all)
{
    if (all->fight->select == 4 && all->fight->ally_turn == 0) {
        all->fight->pos_perso.x -= 35;
        all->fight->pos_perso.y -= 5;
        sfSprite_setPosition(all->fight->sprite_shield, all->fight->pos_perso);
        sfRenderWindow_drawSprite(all->window,
        all->fight->sprite_shield, NULL);
        all->fight->pos_perso.x += 35;
        all->fight->pos_perso.y += 5;
    }
    if (all->fight->select == 4 && all->fight->ally_turn == 1) {
        all->fight->pos_girl.x -= 35;
        all->fight->pos_girl.y -= 5;
        sfSprite_setPosition(all->fight->sprite_shield, all->fight->pos_girl);
        sfRenderWindow_drawSprite(all->window,
        all->fight->sprite_shield, NULL);
        all->fight->pos_girl.x += 35;
        all->fight->pos_girl.y += 5;
    }
}

void change_turn(all_t *all)
{
    if (all->fight->turn == 0) {
        if (all->fight->ally_turn == 0 && all->fight->hp_girl > 0)
            all->fight->ally_turn = 1;
        else if (all->fight->ally_turn == 1 && all->perso->pv > 0)
            all->fight->ally_turn = 0;
    }
}

void enemy_turn(all_t *all)
{
    if (all->fight->turn == 1) {
        draw_shield(all);
        if (all->fight->which_to_attack == 0 && all->fight->hp_enemie <= 0) {
            all->fight->turn = 0;
            all->fight->choice = 0;
            all->fight->which_to_attack = 1;
        }
        if (all->fight->which_to_attack == 1 && all->fight->hp_enemie2 <= 0) {
            all->fight->turn = 0;
            all->fight->choice = 0;
            all->fight->which_to_attack = 0;
        }
        if (all->fight->which_to_attack == 0 && all->fight->hp_enemie > 0)
            gobelin_attack(all);
        if (all->fight->which_to_attack == 1 && all->fight->hp_enemie2 > 0)
            second_gobelin_attack(all);
        change_turn(all);
    }
    all->fight->hp_enemie <= 0 ? animation_gobelin_die(all) : 0;
    all->fight->hp_enemie2 <= 0 ? animation_gobelin2_die(all) : 0;
}
