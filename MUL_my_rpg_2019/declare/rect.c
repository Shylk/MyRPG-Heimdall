/*
** EPITECH PROJECT, 2019
** declare_rect
** File description:
** main
*/

#include "../include/my.h"

void declare_rect_3(all_t *all)
{
    sfSprite_setTextureRect(all->fight->sprite_gobelin2,
    all->fight->rct_gobelin2);
    all->fight->rct_blue.top = 0;
    all->fight->rct_blue.height = 100;
    all->fight->rct_blue.left = 0;
    all->fight->rct_blue.width = 100;
    all->fight->rct_blue2.top = 0;
    all->fight->rct_blue2.height = 100;
    all->fight->rct_blue2.left = 200;
    all->fight->rct_blue2.width = 100;
    all->fight->rct_boss.top = 0;
    all->fight->rct_boss.height = 200;
    all->fight->rct_boss.left = 0;
    all->fight->rct_boss.width = 327.666667;
}

void declare_rect_2(all_t *all)
{
    all->menu->rect.left = 0;
    all->menu->rect.width = 100;
    sfSprite_setTextureRect(all->menu->sprite_arrow, all->menu->rect);
    all->fight->rct_gobelin.top = 0;
    all->fight->rct_gobelin.height = 113;
    all->fight->rct_gobelin.left = 0;
    all->fight->rct_gobelin.width = 111;
    sfSprite_setTextureRect(all->fight->sprite_gobelin,
    all->fight->rct_gobelin);
    all->fight->rct_slash.top = 0;
    all->fight->rct_slash.height = 200;
    all->fight->rct_slash.left = 0;
    all->fight->rct_slash.width = 192;
    sfSprite_setTextureRect(all->fight->sprite_slash, all->fight->rct_slash);
    all->fight->rct_gobelin2.top = 0;
    all->fight->rct_gobelin2.height = 113;
    all->fight->rct_gobelin2.left = 222.22;
    all->fight->rct_gobelin2.width = 111;
    declare_rect_3(all);
}

void declare_rect(all_t *all)
{
    all->intro->rct_intro.top = 0;
    all->intro->rct_intro.left = 0;
    all->intro->rct_intro.width = 1000;
    all->intro->rct_intro.height = 563;
    sfSprite_setTextureRect(all->intro->spr_intro, all->intro->rct_intro);
    all->perso->rct_perso.top = 0;
    all->perso->rct_perso.left = 0;
    all->perso->rct_perso.width = 60;
    all->perso->rct_perso.height = 90;
    all->perso->limit_rect_perso = all->perso->rct_perso.width * 4;
    sfSprite_setTextureRect(all->perso->spr_perso, all->perso->rct_perso);
    all->perso->rct_girl.top = 0;
    all->perso->rct_girl.left = 0;
    all->perso->rct_girl.width = 50;
    all->perso->rct_girl.height = 70;
    sfSprite_setTextureRect(all->perso->spr_girl, all->perso->rct_girl);
    all->menu->rect.top = 0;
    all->menu->rect.height = 100;
    declare_rect_2(all);
}
