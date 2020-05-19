/*
** EPITECH PROJECT, 2019
** analyse_events
** File description:
** contains all events
*/

#include "include/my.h"

void check_shop_events_enough_money(all_t *all, int i)
{
    if (all->perso->money >= 10) {
        for (i = 0; all->hud->check_placement_inventory[i] != -1; i += 1) {
            if (all->hud->check_placement_inventory[i] == 0) {
                all->hud->check_placement_inventory[i] = POTION;
                break;
            }
        }
        if (i != 4) {
            stop_and_play_click_sound(all);
            all->perso->money -= 10;
        } else stop_and_play_denied_payment_sound(all);
    }
    else stop_and_play_denied_payment_sound(all);
}

void stop_and_play_denied_payment_sound(all_t *all)
{
    sfMusic_stop(all->music->denied);
    sfMusic_play(all->music->denied);
}

void give_new_position_to_confirm_sprite(all_t *all, int x, int y)
{
    all->shop->vector_confirm.x = x;
    all->shop->vector_confirm.y = y;
    sfSprite_setPosition(all->shop->sprite_confirm, all->shop->vector_confirm);
}
