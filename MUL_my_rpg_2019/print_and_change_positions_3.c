/*
** EPITECH PROJECT, 2019
** loop_in_game
** File description:
** contains all loop game functions
*/

#include <stdbool.h>
#include "include/my.h"

int sf_set_pos_bis(all_t *all)
{
    char *temp = my_itoa(all->perso->pv);
    if (temp == NULL)
        return (84);
    sfText_setString(all->text->int_hp_hero, temp);
    temp = my_itoa(all->fight->hp_enemie);
    if (temp == NULL)
        return (84);
    sfText_setString(all->text->int_hp_enemie, temp);
    temp = my_itoa(all->fight->hp_enemie2);
    if (temp == NULL)
        return (84);
    sfText_setString(all->text->int_hp_enemie2, temp);
    temp = my_itoa(all->fight->hp_girl);
    if (temp == NULL)
        return (84);
    sfText_setString(all->text->int_hp_girl, temp);
    return (0);
}

int set_string_change_position(all_t *all)
{
    if (all->perso->money == 0)
        sfText_setString(all->hud->txt_money, "0");
    else {
        char *temp = my_itoa(all->perso->money);
        if (temp == NULL)
            return (84);
        sfText_setString(all->hud->txt_money, temp);
    }
    if (all->perso->xp == 0)
        sfText_setString(all->hud->txt_xp, "0");
    else {
        char *temp = my_itoa(all->perso->xp);
        if (temp == NULL)
            return (84);
        sfText_setString(all->hud->txt_xp, temp);
    }
    return (0);
}

int reset_value_bis(all_t *all)
{
    if (all->fight->ally_turn == 0)
        all->fight->hp_enemie -= all->stat->attack;
    else all->fight->hp_enemie -= 10;
    char *temp = my_itoa(all->fight->hp_enemie);
    if (temp == NULL)
        return (84);
    sfText_setString(all->text->int_hp_enemie, temp);
    sfRenderWindow_drawText(all->window, all->text->int_hp_enemie, NULL);
    return (0);
}

int display_shop_bis(all_t *all)
{
    if (all->perso->money == 0)
        sfText_setString(all->shop->txt_money, "0");
    else {
        char *temp = my_itoa(all->perso->money);
        if (temp == NULL)
            return (84);
        sfText_setString(all->shop->txt_money, temp);
    }
    if (all->perso->xp == 0)
        sfText_setString(all->shop->txt_xp, "0");
    else {
        char *temp = my_itoa(all->perso->xp);
        if (temp == NULL)
            return (84);
        sfText_setString(all->shop->txt_xp, temp);
    }
    return (0);
}

void print_change_position_2_bis(all_t *all, sfVector2f tmp_vector)
{
    tmp_vector = all->game->vector_strange_man;
    tmp_vector.y -= 90;
    tmp_vector.x -= 40;
    sfSprite_setPosition(all->hud->sprite_not_that_way, tmp_vector);
    tmp_vector = all->game->vector_dead_body;
    tmp_vector.y -= 90;
    tmp_vector.x -= 40;
}
