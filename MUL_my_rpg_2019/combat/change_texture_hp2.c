/*
** EPITECH PROJECT, 2020
** change
** File description:
** texture
*/

#include "../include/my.h"

void change_texture_hp_hero_2(all_t *all)
{
    if (all->perso->pv >= 60 && all->perso->pv < 70)
    all->fight->text_hp = sfTexture_createFromFile("sprite/60.png", NULL);
    if (all->perso->pv >= 50 && all->perso->pv < 60)
    all->fight->text_hp = sfTexture_createFromFile("sprite/50.png", NULL);
    if (all->perso->pv >= 40 && all->perso->pv < 50)
    all->fight->text_hp = sfTexture_createFromFile("sprite/40.png", NULL);
    if (all->perso->pv >= 30 && all->perso->pv < 40)
    all->fight->text_hp = sfTexture_createFromFile("sprite/30.png", NULL);
    if (all->perso->pv >= 20 && all->perso->pv < 30)
    all->fight->text_hp = sfTexture_createFromFile("sprite/20.png", NULL);
    if (all->perso->pv >= 10 && all->perso->pv < 20)
    all->fight->text_hp = sfTexture_createFromFile("sprite/10.png", NULL);
    if (all->perso->pv >= 0 && all->perso->pv < 10)
    all->fight->text_hp = sfTexture_createFromFile("sprite/0.png", NULL);
}

void change_texture_hp_hero(all_t *all)
{
    all->perso->pv < 0 ? all->perso->pv = 0 : 0;
    if (all->perso->pv == 0)
        all->fight->died = 1;
    if (all->perso->pv >= 100)
    all->fight->text_hp = sfTexture_createFromFile("sprite/100.png", NULL);
    if (all->perso->pv >= 90 && all->perso->pv < 100)
    all->fight->text_hp = sfTexture_createFromFile("sprite/90.png", NULL);
    if (all->perso->pv >= 80 && all->perso->pv < 90)
    all->fight->text_hp = sfTexture_createFromFile("sprite/80.png", NULL);
    if (all->perso->pv >= 70 && all->perso->pv < 80)
    all->fight->text_hp = sfTexture_createFromFile("sprite/70.png", NULL);
    change_texture_hp_hero_2(all);
    sfSprite_setTexture(all->fight->sprite_hp, all->fight->text_hp, sfTrue);
}

void change_texture_hp_girl_2(all_t *all)
{
    if (all->fight->hp_girl >= 50 && all->fight->hp_girl < 60)
        all->fight->text_hp_girl = sfTexture_createFromFile
            ("sprite/60.png", NULL);
    if (all->fight->hp_girl >= 40 && all->fight->hp_girl < 50)
        all->fight->text_hp_girl = sfTexture_createFromFile
            ("sprite/50.png", NULL);
    if (all->fight->hp_girl >= 30 && all->fight->hp_girl < 40)
        all->fight->text_hp_girl = sfTexture_createFromFile
            ("sprite/40.png", NULL);
    if (all->fight->hp_girl >= 20 && all->fight->hp_girl < 30)
        all->fight->text_hp_girl = sfTexture_createFromFile
            ("sprite/30.png", NULL);
    if (all->fight->hp_girl >= 10 && all->fight->hp_girl < 20)
        all->fight->text_hp_girl = sfTexture_createFromFile
            ("sprite/20.png", NULL);
    if (all->fight->hp_girl >= -10 && all->fight->hp_girl < 10)
        all->fight->text_hp_girl = sfTexture_createFromFile
            ("sprite/0.png", NULL);
}

void change_texture_hp_girl(all_t *all)
{
    all->fight->hp_girl < 0 ? all->fight->hp_girl = 0 : 0;
    if (all->fight->hp_girl >= 80)
        all->fight->text_hp_girl = sfTexture_createFromFile
            ("sprite/100.png", NULL);
    if (all->fight->hp_girl >= 70 && all->fight->hp_girl < 80)
        all->fight->text_hp_girl = sfTexture_createFromFile
            ("sprite/80.png", NULL);
    if (all->fight->hp_girl >= 60 && all->fight->hp_girl < 70)
        all->fight->text_hp_girl = sfTexture_createFromFile
            ("sprite/70.png", NULL);
    change_texture_hp_girl_2(all);
    sfSprite_setTexture
        (all->fight->sprite_hp_girl, all->fight->text_hp_girl, sfTrue);
}
