/*
** EPITECH PROJECT, 2019
** loop_in_game
** File description:
** contains all loop game functions
*/

#include <stdbool.h>
#include "include/my.h"

int enter_diag_5_or_6(all_t *all, int diag)
{
    if (diag == 5) {
        all->perso->take_potion_from_old_man = 1;
        all->perso->money -= 10;
        all->game->tmp = 150;
        all->perso->xp += 10;
    }
    return -1;
}

int enter_diag_4(all_t *all, sfSprite **sprite, sfTexture **texture)
{
    int y = all->menu->vector.x;
    switch(y) {
        case 1100:
            *texture = sfTexture_createFromFile(
                "sprite/priest_correct_answer.png", NULL);
            sfSprite_setTexture(*sprite, *texture, sfTrue);
            give_new_position_to_arrow(all, 750, 955);
            return 5;
        case 670:
            *texture = sfTexture_createFromFile(
                "sprite/priest_false_answer.png", NULL);
            sfSprite_setTexture(*sprite, *texture, sfTrue);
            give_new_position_to_arrow(all, 685, 930);
            return 6;
        case 890:
            *texture = sfTexture_createFromFile(
                "sprite/priest_false_answer.png", NULL);
            sfSprite_setTexture(*sprite, *texture, sfTrue);
            give_new_position_to_arrow(all, 685, 930);
            return 6; }
    return 0;
}

int enter_diag_3(all_t *all, sfSprite **sprite, sfTexture **texture)
{
    int y = all->menu->vector.x;
    switch(y) {
        case 485:
            *texture = sfTexture_createFromFile(
                "sprite/priest_enigma.png", NULL);
            sfSprite_setTexture(*sprite, *texture, sfTrue);
            give_new_position_to_arrow(all, 670, 840);
            return 4;
        case 1110:
            return -1;
    }
    return 0;
}

int enter_diag_2(all_t *all, sfSprite **sprite, sfTexture **texture)
{
    int y = all->menu->vector.x;
    switch(y) {
        case 470:
            *texture = sfTexture_createFromFile(
                "sprite/priest_potion.png", NULL);
            sfSprite_setTexture(*sprite, *texture, sfTrue);
            give_new_position_to_arrow(all, 485, 970);
            return 3;
        case 1240:
            return -1;
    }
    return 0;
}

int enter_diag_1(all_t *all, sfSprite **sprite, sfTexture **texture)
{
    int y = all->menu->vector.y;
    switch(y) {
        case 760:
            *texture = sfTexture_createFromFile(
                "sprite/priest_who_is_he.png", NULL);
            sfSprite_setTexture(*sprite, *texture, sfTrue);
            give_new_position_to_arrow(all, 470, 970);
            all->game->tmp = 1;
            return 2;
        case 875:
            *texture = sfTexture_createFromFile(
                "sprite/priest_potion.png", NULL);
            sfSprite_setTexture(*sprite, *texture, sfTrue);
            give_new_position_to_arrow(all, 485, 970);
            all->game->tmp2 = 1;
            return 3;
        case 980:
            return -1;
    }
    sfSprite_setPosition(all->menu->sprite_arrow, all->menu->vector);
    return 0;
}