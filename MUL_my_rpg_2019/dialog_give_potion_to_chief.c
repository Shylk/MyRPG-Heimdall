/*
** EPITECH PROJECT, 2019
** loop_in_game
** File description:
** contains all loop game functions
*/

#include "include/my.h"

int print_and_timer(all_t *all, sfSprite *sprite)
{
    if (print_and_change_positions(all) == 84)
        return (84);
    sfRenderWindow_drawSprite(all->window, sprite, NULL);
    sfRenderWindow_drawSprite(all->window, all->menu->sprite_arrow, NULL);
    timer_menu(all);
    sfRenderWindow_display(all->window);
    return (0);
}

void give_new_position_to_arrow(all_t *all, int x, int y)
{
    all->menu->vector.x = x;
    all->menu->vector.y = y;
    sfSprite_setPosition(all->menu->sprite_arrow, all->menu->vector);
}

int events_forest_gard(all_t *all)
{
    if (sfKeyboard_isKeyPressed(sfKeyRight) && all->menu->vector.x == 680)
        give_new_position_to_arrow(all, 1125, all->menu->vector.y);
    if (sfKeyboard_isKeyPressed(sfKeyLeft) && all->menu->vector.x == 1125)
        give_new_position_to_arrow(all, 680, all->menu->vector.y);
    if (sfKeyboard_isKeyPressed(sfKeyEnter) && all->menu->vector.x == 1125) {
        sfSprite_setTexture(
            all->perso->spr_perso, all->perso->txt_perso[0], sfTrue);
        all->perso->pos_perso = all->game->vector_strange_man;
        all->perso->pos_perso.x -= 21;
        all->perso->pos_perso.y += 30;
        return 1;
    }
    if (sfKeyboard_isKeyPressed(sfKeyEnter) && all->menu->vector.x == 680) {
        sfSprite_setTexture(
            all->perso->spr_perso, all->perso->txt_perso[1], sfTrue);
        all->perso->pos_perso = all->game->vector_strange_man;
        all->perso->pos_perso.x += 80;
        all->perso->pos_perso.y += 80;
        return 1; }
    return 0;
}

int dialog_give_potion_to_chief(all_t *all)
{
    sfSprite *sprite = sfSprite_create();
    sfTexture *texture = sfTexture_createFromFile(
        "sprite/player_giving_potion_to_chief.png", NULL);
    sfEvent event;
    all->perso->gave_potion_to_chief = 1;
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfRenderWindow_clear(all->window, sfBlack);
    give_new_position_to_arrow(all, 800, 945);
    while (sfRenderWindow_isOpen(all->window)) {
        while (sfRenderWindow_pollEvent(all->window, &event)) {
            check_basic_events_menu(all, event);
            if (sfKeyboard_isKeyPressed(sfKeyEnter)) {
                all->perso->xp += 10;
                return (0);
            }
        }
        if (print_and_timer(all, sprite) == 84)
            return (84);
    }
    return (0);
}