/*
** EPITECH PROJECT, 2019
** loop_in_game
** File description:
** contains all loop game functions
*/

#include <stdbool.h>
#include "include/my.h"

int dead_body_dialog(all_t *all)
{
    sfEvent event;

    sfRenderWindow_clear(all->window, sfBlack);
    give_new_position_to_arrow(all, 770, 988);
    while (sfRenderWindow_isOpen(all->window)) {
        while (sfRenderWindow_pollEvent(all->window, &event)) {
            check_basic_events_menu(all, event);
            if (sfKeyboard_isKeyPressed(sfKeyEnter))
                return (0);
        }
        if (print_and_timer(all, all->game->sprite_dead_body_dialog) == 84)
            return (84);
    }
    return (0);
}

void _init_old_man(all_t *all, sfSprite **sprite, sfTexture *text)
{
    sfRenderWindow_setMouseCursorVisible(all->window, sfFalse);
    sfSprite_setTexture(*sprite, text, sfTrue);
    sfRenderWindow_clear(all->window, sfBlack);
    give_new_position_to_arrow(all, 765, 760);
}

void old_man_bis(all_t *all)
{
    if (all->game->tmp >= 1)
        all->game->tmp += 1;
    if (all->game->tmp2 >= 1)
        all->game->tmp2 += 1;
}

int old_man_dialog(all_t *all)
{
    sfSprite *sprite = sfSprite_create();
    sfTexture *texture = sfTexture_createFromFile(
        "sprite/priest_intro.png", NULL);
    sfEvent event;
    int diag = 1;
    _init_old_man(all, &sprite, texture);
    while (sfRenderWindow_isOpen(all->window)) {
        while (sfRenderWindow_pollEvent(all->window, &event)) {
            old_man_events_manager(all, event, diag);
            diag = old_man_key_right_left(
                all, diag, all->menu->vector.x, all->menu->vector.y);
            diag = old_man_key_enter(all, diag, &sprite, &texture);
            if (sfKeyboard_isKeyPressed(sfKeyEnter))
                old_man_bis(all);
            if (diag == -1)
                return (0); }
        if (print_and_timer(all, sprite) == 84)
            return (84); }
        return (0);
}