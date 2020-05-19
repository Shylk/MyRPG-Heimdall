/*
** EPITECH PROJECT, 2019
** loop_in_game
** File description:
** contains all loop game functions
*/

#include <stdbool.h>
#include "include/my.h"

int old_man_key_enter(all_t *all, int diag, sfSprite **sprite,
sfTexture **texture)
{
    if (diag == 1 && KEY_ENTER)
        return (enter_diag_1(all, &*sprite, &*texture));
    if (diag == 2 && KEY_ENTER && all->game->tmp >= 3)
        return (enter_diag_2(all, &*sprite, &*texture));
    if (diag == 3 && KEY_ENTER && all->game->tmp >= 6)
        return (enter_diag_3(all, &*sprite, &*texture));
    if (diag == 3 && KEY_ENTER && all->game->tmp2 >= 4)
        return (enter_diag_3(all, &*sprite, &*texture));
    if (diag == 4 && KEY_ENTER && all->game->tmp >= 8)
        return (enter_diag_4(all, &*sprite, &*texture));
    if (diag == 4 && KEY_ENTER && all->game->tmp2 >= 6)
        return (enter_diag_4(all, &*sprite, &*texture));
    if ((diag == 5 || diag == 6) && KEY_ENTER && all->game->tmp >= 10)
        return (enter_diag_5_or_6(all, diag));
    if ((diag == 5 || diag == 6) && KEY_ENTER && all->game->tmp2 >= 8)
        return (enter_diag_5_or_6(all, diag));
    return diag;
}

void old_man_key_up(all_t *all, int diag)
{
    int y = 0;

    if (diag == 1 && sfKeyboard_isKeyPressed(sfKeyUp)) {
        y = all->menu->vector.y;
        switch(y) {
            case 875:
                all->menu->vector.y = 760;
                break;
            case 980:
                all->menu->vector.y = 875;
                break;
        }
        sfSprite_setPosition(all->menu->sprite_arrow, all->menu->vector);
    }
}

void old_man_key_down(all_t *all, int diag)
{
    int y = 0;

    if (diag == 1 && sfKeyboard_isKeyPressed(sfKeyDown)) {
        y = all->menu->vector.y;
        switch(y) {
            case 760:
                all->menu->vector.y = 875;
                break;
            case 875:
                all->menu->vector.y = 980;
                break;
        }
        sfSprite_setPosition(all->menu->sprite_arrow, all->menu->vector);
    }
}

int old_man_key_right_left(all_t *all, int diag, int x, int y)
{
    if (diag == 2 && KEY_RIGHT && x == 470 && y == 970)
        give_new_position_to_arrow(all, 1240, all->menu->vector.y);
    if (diag == 2 && KEY_LEFT && x == 1240 && y == 970)
        give_new_position_to_arrow(all, 470, all->menu->vector.y);
    if (diag == 3 && KEY_RIGHT && x == 485 && y == 970)
        give_new_position_to_arrow(all, 1110, all->menu->vector.y);
    if (diag == 3 && KEY_LEFT && x == 1110 && y == 970)
        give_new_position_to_arrow(all, 485, all->menu->vector.y);
    if (diag == 4 && KEY_RIGHT && x == 670 && y == 840) {
        give_new_position_to_arrow(all, 1100, all->menu->vector.y);
        return diag; }
    if (diag == 4 && KEY_RIGHT && x == 1100 && y == 840)
        give_new_position_to_arrow(all, 890, 950);
    if (diag == 4 && KEY_LEFT && x == 890 && y == 950) {
        give_new_position_to_arrow(all, 1100, 840);
        return diag; }
    if (diag == 4 && KEY_LEFT && x == 1100 && y == 840)
        give_new_position_to_arrow(all, 670, all->menu->vector.y);
    return diag;
}

void old_man_events_manager(all_t *all, sfEvent event, int diag)
{
    check_basic_events_menu(all, event);
    old_man_key_down(all, diag);
    old_man_key_up(all, diag);
}
