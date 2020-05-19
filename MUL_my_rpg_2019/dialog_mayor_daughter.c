/*
** EPITECH PROJECT, 2019
** declare_all
** File description:
** main
*/

#include <stdbool.h>
#include "include/my.h"

void _init_give_daughter_back_mayor(all_t *all, sfSprite **spr, sfTexture *tex)
{
    give_new_position_to_arrow(all, 800, 960);
    all->perso->talk_to_mayor_daughter = 2;
    sfSprite_setTexture(*spr, tex, sfTrue);
    sfRenderWindow_clear(all->window, sfBlack);
}

void display_little_daughter_dialog(all_t *all, sfSprite *sprite)
{
    sfRenderWindow_drawSprite(all->window, all->map->spr_map, NULL);
    sfRenderWindow_drawSprite(all->window, all->map->spr_exit, NULL);
    sfRenderWindow_drawSprite(all->window, all->hud->sprite_quest_book, NULL);
    sfRenderWindow_drawSprite(all->window, all->hud->sprite_icon_tree, NULL);
    sfRenderWindow_drawSprite(all->window, all->hud->sprite_map_logo, NULL);
    sfRenderWindow_drawSprite(all->window, all->hud->sprite_chest_logo, NULL);
    sfRenderWindow_drawSprite(all->window, all->hud->sprite_heart, NULL);
    sfRenderWindow_drawSprite(all->window, all->hud->sprite_coins, NULL);
    sfRenderWindow_drawSprite(all->window, all->hud->sprite_xp, NULL);
    sfRenderWindow_drawSprite(all->window, sprite, NULL);
    sfRenderWindow_drawSprite(all->window, all->menu->sprite_arrow, NULL);
    sfRenderWindow_drawSprite(all->window,
    all->game->sprite_little_girl, NULL);
    sfRenderWindow_drawSprite(all->window, all->perso->spr_perso, NULL);
}

void _init_dialog_mayor_little_daughter(all_t *all, sfSprite **sprite,
sfTexture *texture)
{
    all->perso->talk_to_mayor_daughter = 1;
    sfSprite_setTexture(*sprite, texture, sfTrue);
    give_new_position_to_arrow(all, 650, 930);
    all->perso->pos_girl.x = 850;
    all->perso->pos_girl.y = 570;
    sfSprite_setPosition(all->perso->spr_girl, all->perso->pos_girl);
    sfSprite_setTexture(all->perso->spr_girl, all->perso->txt_girl[3], sfTrue);
}

void display_manager(all_t *all, sfSprite *sprite)
{
    display_little_daughter_dialog(all, sprite);
    timer_menu(all);
    sfRenderWindow_display(all->window);
}

void dialog_mayor_little_daughter(all_t *all)
{
    sfSprite *sprite = sfSprite_create();
    sfTexture *texture = sfTexture_createFromFile(
        "sprite/mayor_daughter_dialog_1.png", NULL);
    sfEvent event;
    int diag = 1, check = 0;
    _init_dialog_mayor_little_daughter(all, &sprite, texture);
    while (sfRenderWindow_isOpen(all->window)) {
        sfRenderWindow_clear(all->window, sfBlack);
        while (sfRenderWindow_pollEvent(all->window, &event)) {
            if (sfKeyboard_isKeyPressed(sfKeyEnter))
                check += 1;
            check_basic_events_menu(all, event);
            if (diag == 1)
                diag = ev_little_daughter_diag(diag, &sprite, &texture);
            if (diag == 2 && check >= 3)
                diag = ev_little_daughter_diag(diag, &sprite, &texture);
            if (diag == 2)
                give_new_position_to_arrow(all, 610, 960);
            if (diag == 3)
                return; }
        display_manager(all, sprite); }
}