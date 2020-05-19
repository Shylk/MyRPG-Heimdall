/*
** EPITECH PROJECT, 2019
** loop_in_game
** File description:
** contains all loop game functions
*/

#include <stdbool.h>
#include "include/my.h"

int select_archer(all_t *all)
{
    all->perso->player_class = 3;
    sfText_setString(all->text->text_player_class, "Archer");
    all->hud->text_class_logo = sfTexture_createFromFile(
        "sprite/archer.png", NULL);
    sfSprite_setTexture(all->hud->sprite_class_logo,
    all->hud->text_class_logo, sfTrue);
    set_stat_for_archer(all);
    return 1;
}

int select_tank(all_t *all)
{
    all->perso->player_class = 2;
    sfText_setString(all->text->text_player_class, "Tank");
    all->hud->text_class_logo = sfTexture_createFromFile(
        "sprite/tank.png", NULL);
    sfSprite_setTexture(all->hud->sprite_class_logo,
    all->hud->text_class_logo, sfTrue);
    set_stat_for_tank(all);
    return 1;
}

int select_warrior(all_t *all)
{
    all->perso->player_class = 1;
    sfText_setString(all->text->text_player_class, "Warrior");
    all->hud->text_class_logo = sfTexture_createFromFile(
        "sprite/warrior.png", NULL);
    sfSprite_setTexture(all->hud->sprite_class_logo,
    all->hud->text_class_logo, sfTrue);
    set_stat_for_warrior(all);
    return 1;
}

int check_events_class_selection(all_t *all, sfEvent event, int x, int y)
{
    if (event.type == sfEvtMouseButtonReleased) {
        x = event.mouseButton.x;
        y = event.mouseButton.y;
        if (x >= 354 && x <= 458 && y >= 770 && y <= 857)
            return select_warrior(all);
        if (x >= 868 && x <= 971 && y >= 770 && y <= 857)
            return select_tank(all);
        if (x >= 1403 && x <= 1507 && y >= 770 && y <= 857)
            return select_archer(all);
    }
    return 0;
}

void choose_a_class(all_t *all)
{
    sfSprite *sprite = sfSprite_create();
    sfTexture *texture = sfTexture_createFromFile(
        "sprite/choose_a_class.png", NULL);
    sfEvent event;
    int x = 0, y = 0;

    all->perso->choose_class = false;
    sfRenderWindow_setMouseCursorVisible(all->window, sfTrue);
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfRenderWindow_clear(all->window, sfBlack);
    while (sfRenderWindow_isOpen(all->window)) {
        sfRenderWindow_drawSprite(all->window, sprite, NULL);
        while (sfRenderWindow_pollEvent(all->window, &event)) {
            if (check_events_class_selection(all, event, x, y) == 1)
                return;
            if (event.type == sfEvtClosed)
                sfRenderWindow_close(all->window);
        }
        sfRenderWindow_display(all->window);
    }
}