/*
** EPITECH PROJECT, 2019
** declare_all
** File description:
** main
*/

#include <stdbool.h>
#include "include/my.h"

int events_god_benediction(all_t *all, sfSprite **sprite, sfTexture **texture)
{
    *texture = sfTexture_createFromFile(
        "sprite/life_tree_2.png", NULL);
    sfSprite_setTexture(*sprite, *texture, sfTrue);
    give_new_position_to_arrow(all, 800, 960);
    return 2;
}

int god_benediction_dialog(all_t *all)
{
    sfSprite *sprite = sfSprite_create();
    sfTexture *texture = sfTexture_createFromFile(
        "sprite/life_tree_1.png", NULL);
    sfEvent event;
    int diag = 1, check = 0;
    god_benediction_bis(all, sprite, texture);
    while (sfRenderWindow_isOpen(all->window)) {
        while (sfRenderWindow_pollEvent(all->window, &event)) {
            check_basic_events_menu(all, event);
            if (sfKeyboard_isKeyPressed(sfKeyEnter))
                check += 1;
            if (sfKeyboard_isKeyPressed(sfKeyEnter) && diag == 1)
                diag = events_god_benediction(all, &sprite, &texture);
            if (sfKeyboard_isKeyPressed(sfKeyEnter)
            && diag == 2 && check >= 3) {
                all->stat->attack += 10;
                return (0); } }
        if (print_and_timer(all, sprite) == 84)
            return (84); }
        return (0);
}

int events_give_daughter_back_mayor(all_t *all, sfSprite **sprite,
sfTexture **texture)
{
    all->perso->xp += 40;
    all->perso->money += 70;
    *texture = sfTexture_createFromFile(
        "sprite/give_daughter_mayor_2.png", NULL);
    sfSprite_setTexture(*sprite, *texture, sfTrue);
    return 2;
}

int give_daughter_back_mayor(all_t *all)
{
    sfSprite *sprite = sfSprite_create();
    sfTexture *texture = sfTexture_createFromFile(
        "sprite/give_daughter_mayor.png", NULL);
    sfEvent event;
    int diag = 1, check = 0;
    _init_give_daughter_back_mayor(all, &sprite, texture);
    while (sfRenderWindow_isOpen(all->window)) {
        while (sfRenderWindow_pollEvent(all->window, &event)) {
            if (sfKeyboard_isKeyPressed(sfKeyEnter))
                check += 1;
            if (diag == 1 && sfKeyboard_isKeyPressed(sfKeyEnter))
                diag = give_daughter_bis(all, sprite, texture, diag);
            if (diag == 2 && sfKeyboard_isKeyPressed(sfKeyEnter)
            && check >= 3) {
                all->perso->mayor_ask_kill_boss = 1;
                return (0); } }
        if (print_and_timer(all, sprite) == 84)
            return (84); }
        return (0);
}

int ev_little_daughter_diag(int diag, sfSprite **sprite, sfTexture **texture)
{
    if (diag == 1 && sfKeyboard_isKeyPressed(sfKeyEnter)) {
        *texture = sfTexture_createFromFile(
            "sprite/mayor_daughter_dialog_2.png", NULL);
        sfSprite_setTexture(*sprite, *texture, sfTrue);
        return 2;
    }
    if (diag == 2 && sfKeyboard_isKeyPressed(sfKeyEnter)) {
        return 3;
    }
    return diag;
}
