/*
** EPITECH PROJECT, 2019
** move_rect
** File description:
** contains all rect movements
*/

#include "include/my.h"

int get_skin_5(all_t *all)
{
    all->perso->limit_rect_perso = all->perso->rct_perso.width * 3;
    all->perso->txt_perso[0] = sfTexture_createFromFile(
        "sprite/perso5_left.png", NULL);
    all->perso->txt_perso[1] = sfTexture_createFromFile(
        "sprite/perso5_right.png", NULL);
    all->perso->txt_perso[2] = sfTexture_createFromFile(
        "sprite/perso5_up.png", NULL);
    all->perso->txt_perso[3] = sfTexture_createFromFile(
        "sprite/perso5_down.png", NULL);
    sfSprite_setTexture(all->perso->spr_perso,
    all->perso->txt_perso[3], sfTrue);
    all->fight->text_perso = sfTexture_createFromFile(
        "sprite/fight_perso5.png", NULL);
    sfSprite_setTexture(all->fight->sprite_perso,
    all->fight->text_perso, sfTrue);
    return 1;
}

int get_skin_4(all_t *all)
{
    all->perso->limit_rect_perso = all->perso->rct_perso.width * 3;
    all->perso->txt_perso[0] = sfTexture_createFromFile(
        "sprite/perso4_left.png", NULL);
    all->perso->txt_perso[1] = sfTexture_createFromFile(
        "sprite/perso4_right.png", NULL);
    all->perso->txt_perso[2] = sfTexture_createFromFile(
        "sprite/perso4_up.png", NULL);
    all->perso->txt_perso[3] = sfTexture_createFromFile(
        "sprite/perso4_down.png", NULL);
    sfSprite_setTexture(all->perso->spr_perso,
    all->perso->txt_perso[3], sfTrue);
    all->fight->text_perso = sfTexture_createFromFile(
        "sprite/fight_perso4.png", NULL);
    sfSprite_setTexture(all->fight->sprite_perso,
    all->fight->text_perso, sfTrue);
    return 1;
}
