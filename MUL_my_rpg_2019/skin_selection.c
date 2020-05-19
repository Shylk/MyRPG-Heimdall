/*
** EPITECH PROJECT, 2019
** move_rect
** File description:
** contains all rect movements
*/

#include "include/my.h"

int get_skin_3(all_t *all)
{
    all->perso->limit_rect_perso = all->perso->rct_perso.width * 3;
    all->perso->txt_perso[0] = sfTexture_createFromFile(
        "sprite/perso3_left.png", NULL);
    all->perso->txt_perso[1] = sfTexture_createFromFile(
        "sprite/perso3_right.png", NULL);
    all->perso->txt_perso[2] = sfTexture_createFromFile(
        "sprite/perso3_up.png", NULL);
    all->perso->txt_perso[3] = sfTexture_createFromFile(
        "sprite/perso3_down.png", NULL);
    all->fight->text_perso = sfTexture_createFromFile(
        "sprite/fight_perso3.png", NULL);
    sfSprite_setTexture(all->perso->spr_perso,
    all->perso->txt_perso[3], sfTrue);
    sfSprite_setTexture(all->fight->sprite_perso,
    all->fight->text_perso, sfTrue);
    return 1;
}

int get_skin_2(all_t *all)
{
    all->perso->limit_rect_perso = all->perso->rct_perso.width * 3;
    all->perso->txt_perso[0] = sfTexture_createFromFile(
        "sprite/perso2_left.png", NULL);
    all->perso->txt_perso[1] = sfTexture_createFromFile(
        "sprite/perso2_right.png", NULL);
    all->perso->txt_perso[2] = sfTexture_createFromFile(
        "sprite/perso2_up.png", NULL);
    all->perso->txt_perso[3] = sfTexture_createFromFile(
        "sprite/perso2_down.png", NULL);
    sfSprite_setTexture(all->perso->spr_perso,
    all->perso->txt_perso[3], sfTrue);
    all->fight->text_perso = sfTexture_createFromFile(
        "sprite/fight_perso2.png", NULL);
    sfSprite_setTexture(all->fight->sprite_perso,
    all->fight->text_perso, sfTrue);
    return 1;
}

int get_skin_1(all_t *all)
{
    all->perso->limit_rect_perso = all->perso->rct_perso.width * 4;
    all->perso->txt_perso[0] = sfTexture_createFromFile(
        "sprite/perso_left.png", NULL);
    all->perso->txt_perso[1] = sfTexture_createFromFile(
        "sprite/perso_right.png", NULL);
    all->perso->txt_perso[2] = sfTexture_createFromFile(
        "sprite/perso_up.png", NULL);
    all->perso->txt_perso[3] = sfTexture_createFromFile(
        "sprite/perso_down.png", NULL);
    sfSprite_setTexture(all->perso->spr_perso,
    all->perso->txt_perso[3], sfTrue);
    all->fight->text_perso = sfTexture_createFromFile(
        "sprite/perso_fight.png", NULL);
    sfSprite_setTexture(all->fight->sprite_perso,
    all->fight->text_perso, sfTrue);
    return 1;
}

int change_the_skin(all_t *all, sfEvent event)
{
    int x = 0, y = 0;

    if (event.type == sfEvtMouseButtonReleased) {
        x = event.mouseButton.x;
        y = event.mouseButton.y;
        if (x >= 259 && x <= 371 && y >= 518 && y <= 555)
            return (get_skin_1(all));
        if (x >= 898 && x <= 1016 && y >= 518 && y <= 555)
            return (get_skin_2(all));
        if (x >= 1543 && x <= 1655 && y >= 518 && y <= 555)
            return (get_skin_3(all));
        if (x >= 576 && x <= 691 && y >= 920 && y <= 961)
            return (get_skin_4(all));
        if (x >= 1279 && x <= 1394 && y >= 920 && y <= 961)
            return (get_skin_5(all));
    }
    return 0;
}

void skin_selection(all_t *all)
{
    sfEvent event;

    sfRenderWindow_clear(all->window, sfBlack);
    while (sfRenderWindow_isOpen(all->window)) {
        sfRenderWindow_drawSprite(all->window,
        all->game->sprite_skin_selection, NULL);
        sfRenderWindow_drawSprite(all->window, all->menu->sprite_cursor, NULL);
        while (sfRenderWindow_pollEvent(all->window, &event)) {
            check_basic_events_menu(all, event);
            if (change_the_skin(all, event) == 1) {
                return;
            }
        }
        sfRenderWindow_display(all->window);
    }
}
