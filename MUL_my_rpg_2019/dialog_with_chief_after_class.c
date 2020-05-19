/*
** EPITECH PROJECT, 2019
** loop_in_game
** File description:
** contains all loop game functions
*/

#include "include/my.h"

void _init_dialog_after_class(all_t *all, sfSprite **sprite, sfTexture *textu)
{
    sfRenderWindow_setMouseCursorVisible(all->window, sfFalse);
    sfSprite_setTexture(*sprite, textu, sfTrue);
    sfRenderWindow_clear(all->window, sfBlack);
    give_new_position_to_arrow(all, 580, 910);
}

void keys_class(all_t *all, int *diag, sfTexture **texture, sfSprite **sprite)
{
    if (*diag == 1 && KEY_RIGHT && all->menu->vector.x == 580)
        give_new_position_to_arrow(all, 1180, all->menu->vector.y);
    if (*diag == 1 && KEY_LEFT && all->menu->vector.x == 1180)
        give_new_position_to_arrow(all, 580, all->menu->vector.y);
    if (*diag == 1 && KEY_ENTER && all->menu->vector.x == 580) {
        *texture = sfTexture_createFromFile(
            "sprite/after_class_interactive_dialog3.png", NULL);
        sfSprite_setTexture(*sprite, *texture, sfTrue);
        all->menu->vector.x += 260;
        sfSprite_setPosition(all->menu->sprite_arrow, all->menu->vector);
        *diag = 3;
    }
}

int enter_diag_1_class(all_t *all, sfSprite **spr, sfTexture **tex, int *diag)
{
    *tex = sfTexture_createFromFile(
        "sprite/after_class_interactive_dialog2.png", NULL);
    sfSprite_setTexture(*spr, *tex, sfTrue);
    all->menu->vector.x -= 260;
    sfSprite_setPosition(all->menu->sprite_arrow, all->menu->vector);
    *diag = 2;
    return 1;
}

void enter_diag_2_class(all_t *all, sfSprite **spr, sfTexture **tex, int *diag)
{
    *tex = sfTexture_createFromFile(
        "sprite/after_class_interactive_dialog3.png", NULL);
    sfSprite_setTexture(*spr, *tex, sfTrue);
    all->menu->vector.x = 840;
    sfSprite_setPosition(all->menu->sprite_arrow, all->menu->vector);
    *diag = 3;
}

int interactive_dialog_after_class(all_t *all)
{
    sfSprite *sprite = sfSprite_create();
    sfTexture *texture = sfTexture_createFromFile(
        "sprite/after_class_interactive_dialog.png", NULL);
    sfEvent event;
    int diag = 1, check = 0;
    _init_dialog_after_class(all, &sprite, texture);
    while (sfRenderWindow_isOpen(all->window)) {
        while (sfRenderWindow_pollEvent(all->window, &event)) {
            check_basic_events_menu(all, event);
            keys_class(all, &diag, &texture, &sprite);
            if (diag == 1 && KEY_ENTER && all->menu->vector.x == 1180)
                check = enter_diag_1_class(all, &sprite, &texture, &diag);
            if (check == 2 && diag == 2 && KEY_ENTER)
                enter_diag_2_class(all, &sprite, &texture, &diag);
            if (check == 3 && diag == 3 && sfKeyboard_isKeyPressed(sfKeyEnter))
                return (0); }
        check == 1 ? check = 2 : 0;
        (check == 2 && diag == 3) || (check == 0 && diag == 3) ? check = 3 : 0;
        if (print_and_timer(all, sprite) == 84)
            return (84); }
        return (0);
}