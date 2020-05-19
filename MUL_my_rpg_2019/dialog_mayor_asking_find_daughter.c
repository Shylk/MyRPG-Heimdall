/*
** EPITECH PROJECT, 2019
** loop_in_game
** File description:
** contains all loop game functions
*/

#include <stdbool.h>
#include "include/my.h"

void events_mayor(all_t *all, sfTexture **texture, sfSprite **sprite,
int *diag)
{
    if (*diag == 1) {
        if (sfKeyboard_isKeyPressed(sfKeyRight) && all->menu->vector.x == 650)
            give_new_position_to_arrow(all, 1050, all->menu->vector.y);
        if (sfKeyboard_isKeyPressed(sfKeyLeft) && all->menu->vector.x == 1050)
            give_new_position_to_arrow(all, 650, all->menu->vector.y);
        if (sfKeyboard_isKeyPressed(sfKeyEnter)) {
            if (all->menu->vector.x == 650) {
                sfMusic_stop(all->music->achievement);
                sfMusic_play(all->music->achievement);
                all->perso->money += 100;
                all->game->tmp = 150;
            }
            *texture = sfTexture_createFromFile(
                "sprite/mayor_find_daughter.png", NULL);
            *diag = 2;
            sfSprite_setTexture(*sprite, *texture, sfTrue);
            give_new_position_to_arrow(all, 800, 945);
        }
    }
}

int give_daughter_bis(all_t *all, sfSprite *sprite, sfTexture *texture,
int diag)
{
    diag = events_give_daughter_back_mayor(all, &sprite, &texture);
    sfSprite_setTexture(all->hud->sprite_quest_log,
    all->hud->text_quest_log_two, sfTrue);
    return (diag);
}

void god_benediction_bis(all_t *all, sfSprite *sprite, sfTexture *texture)
{
    all->perso->get_benediction = 1;
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfRenderWindow_clear(all->window, sfBlack);
    give_new_position_to_arrow(all, 650, 960);
}

void mayor_asking_bis(all_t *all, sfSprite *sprite, sfTexture *texture)
{
    all->perso->ask_find_daughter_mayor = 1;
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfRenderWindow_clear(all->window, sfBlack);
    give_new_position_to_arrow(all, 650, 935);
}

int mayor_asking_to_find_her_daughter(all_t *all)
{
    sfSprite *sprite = sfSprite_create();
    sfTexture *texture = sfTexture_createFromFile(
        "sprite/mayor_reward.png", NULL);
    sfEvent event;
    int diag = 1, check = 0;
    mayor_asking_bis(all, sprite, texture);
    while (sfRenderWindow_isOpen(all->window)) {
        while (sfRenderWindow_pollEvent(all->window, &event)) {
            if (sfKeyboard_isKeyPressed(sfKeyEnter))
                check += 1;
            if (sfKeyboard_isKeyPressed(sfKeyEnter)
            && diag == 2 && check >= 3) {
                all->perso->xp += 10;
                return (0); }
            check_basic_events_menu(all, event);
            events_mayor(all, &texture, &sprite, &diag); }
        if (print_and_timer(all, sprite) == 84)
            return (84); }
    return (0);
}