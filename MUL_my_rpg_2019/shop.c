/*
** EPITECH PROJECT, 2019
** analyse_events
** File description:
** contains all events
*/

#include "include/my.h"

void check_shop_events_2(all_t *all, int x, int y)
{
    if (x >= 857 && x <= 1074 && y >= 424 && y <= 650) {
        if (all->perso->xp >= 10) {
            stop_and_play_click_sound(all);
            all->perso->xp -= 10;
            all->perso->money += 20;
        }
        else stop_and_play_denied_payment_sound(all);
    }
    if (x >= 1224 && x <= 1443 && y >= 424 && y <= 650) {
        if (all->perso->money >= 20) {
            stop_and_play_click_sound(all);
            all->perso->money -= 20;
            all->perso->xp += 20;
        }
        else stop_and_play_denied_payment_sound(all);
    }
}

int check_shop_events(all_t *all, sfEvent event)
{
    int x = 0, y = 0, i = 0;

    if (event.type == sfEvtMouseButtonReleased) {
        x = event.mouseButton.x;
        y = event.mouseButton.y;
        if (x >= 820 && x <= 1096 && y >= 799 && y <= 985)
            return 1;
        if (x >= 486 && x <= 704 && y >= 424 && y <= 650) {
            check_shop_events_enough_money(all, i);
        }
        check_shop_events_2(all, x, y);
    }
    return 0;
}

int check_event_mouse_moved(all_t *all, sfEvent event)
{
    if (event.type == sfEvtMouseMoved) {
        int x = event.mouseMove.x;
        int y = event.mouseMove.y;
        if (x >= 486 && x <= 704 && y >= 424 && y <= 650) {
            give_new_position_to_confirm_sprite(all, 475, 406);
            return 1;
        }
        if (x >= 857 && x <= 1074 && y >= 424 && y <= 650) {
            give_new_position_to_confirm_sprite(all, 844, 406);
            return 1;
        }
        if (x >= 1224 && x <= 1443 && y >= 424 && y <= 650) {
            give_new_position_to_confirm_sprite(all, 1213, 406);
            return 1;
        }
    }
    return 0;
}

int display_sprites_shop(all_t *all, int check)
{
    sfRenderWindow_drawSprite(all->window, all->shop->sprite_wallapaper, NULL);
    if (display_shop_bis(all) == 84)
        return (84);
    sfRenderWindow_drawText(all->window, all->shop->txt_money, NULL);
    sfRenderWindow_drawText(all->window, all->shop->txt_xp, NULL);
    if (check == 1)
        sfRenderWindow_drawSprite(all->window,
        all->shop->sprite_confirm, NULL);
    sfRenderWindow_drawSprite(all->window, all->menu->sprite_cursor, NULL);
    sfRenderWindow_display(all->window);
    return (0);
}

int shop(all_t *all)
{
    sfEvent event;
    int check_confirm = 0;

    sfRenderWindow_clear(all->window, sfBlack);
    while (sfRenderWindow_isOpen(all->window)) {
        while (sfRenderWindow_pollEvent(all->window, &event)) {
            check_basic_events_menu(all, event);
            check_confirm = check_event_mouse_moved(all, event);
            if (check_shop_events(all, event) == 1) {
                return (0);
            }
        }
        if (print_and_change_positions(all) == 84)
            return (84);
        if (display_sprites_shop(all, check_confirm) == 84)
            return (84);
    }
    return (0);
}
