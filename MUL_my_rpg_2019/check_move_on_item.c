/*
** EPITECH PROJECT, 2020
** check
** File description:
** move on item
*/

#include "include/my.h"

void check_move_on_item(all_t *all)
{
    if (all->perso->press_i_key == 1) {
        sfVector2f vector_move_on_item_inventory;
        vector_move_on_item_inventory.x = 0;
        vector_move_on_item_inventory.y = 0;
        if ((check_case_1_inventory(all, vector_move_on_item_inventory) == 1)
        || (check_case_2_inventory(all, vector_move_on_item_inventory) == 1)
        || (check_case_3_inventory(all, vector_move_on_item_inventory) == 1)
        || (check_case_4_inventory(all, vector_move_on_item_inventory) == 1))
            return;
        all->game->can_draw_glow_item = NO_MOVE;
    }
}

int check_move_on_card_tree(all_t *all)
{
    sfVector2f vector_move_on_card;
    sfVector2f vector_no_xp;
    static int tier_3 = 0;
    static int tier_2 = 0;
    static int tier_1 = 0;

    init_vector_no_xp(all, &vector_no_xp);
    if (all->perso->press_s_key == 1) {
        init_vector_move_on_card(&vector_move_on_card);
        if ((check_sixth_card_tree(all, &tier_3, vector_move_on_card) == 1)
        || (check_fifth_card_tree(all, &tier_3, vector_move_on_card) == 1)
        || (check_fourth_card_tree(all, &tier_2, vector_move_on_card) == 1)
        || (check_third_card_tree(all, &tier_2, vector_move_on_card) == 1)
        || (check_second_card_tree(all, &tier_1, vector_move_on_card) == 1)
        || (check_first_card_tree(all, &tier_1, vector_move_on_card) == 1))
            return 1;
        reinit_can_draw_var(all);
    }
    return 0;
}

int end_screen_event(all_t *all)
{
    if (all->event->x >= 793 && all->event->x <= 1133 &&
        all->event->y >= 836 && all->event->y <= 970) {
        sfRenderWindow_close(all->window);
    }
    if (all->event->x >= 280 && all->event->x <= 772 &&
        all->event->y >= 457 && all->event->y <= 639)
        if (all->perso->money >= 70) {
            all->fight->died = 0;
            all->perso->pv = 100;
        }
    return (0);
}

int win_screen_event(all_t *all)
{
    if (all->event->x >= 793 && all->event->x <= 1133 &&
        all->event->y >= 836 && all->event->y <= 970) {
        sfRenderWindow_close(all->window);
    }
    if (all->event->x >= 280 && all->event->x <= 772 &&
        all->event->y >= 457 && all->event->y <= 639) {
        all->menu->menu = 1;
        all->fight->died = 0;
        all->perso->mayor_ask_kill_boss = 2;
    }
    return (0);
}
