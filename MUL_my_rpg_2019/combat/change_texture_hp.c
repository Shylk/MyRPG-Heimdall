/*
** EPITECH PROJECT, 2020
** change
** File description:
** texture hp
*/

#include "../include/my.h"

void change_texture_hp_enemie(all_t *all)
{
    all->fight->hp_enemie < 0 ? all->fight->hp_enemie = 0 : 0;
    all->fight->hp_enemie == 50 ? all->fight->text_hp_enemie =
        sfTexture_createFromFile("sprite/100.png", NULL) : 0;
    if (all->fight->hp_enemie >= 40 && all->fight->hp_enemie < 50)
        all->fight->text_hp_enemie = sfTexture_createFromFile
            ("sprite/80.png", NULL);
    if (all->fight->hp_enemie >= 30 && all->fight->hp_enemie < 40)
        all->fight->text_hp_enemie = sfTexture_createFromFile
            ("sprite/60.png", NULL);
    if (all->fight->hp_enemie >= 20 && all->fight->hp_enemie < 30)
        all->fight->text_hp_enemie = sfTexture_createFromFile
            ("sprite/40.png", NULL);
    if (all->fight->hp_enemie >= 10 && all->fight->hp_enemie < 20)
        all->fight->text_hp_enemie = sfTexture_createFromFile
            ("sprite/20.png", NULL);
    if (all->fight->hp_enemie >= -10 && all->fight->hp_enemie < 10)
        all->fight->text_hp_enemie = sfTexture_createFromFile
            ("sprite/0.png", NULL);
    sfSprite_setTexture
        (all->fight->sprite_hp_enemie, all->fight->text_hp_enemie, sfTrue);
}

void change_texture_hp_enemie2(all_t *all)
{
    all->fight->hp_enemie2 < 0 ? all->fight->hp_enemie2 = 0 : 0;
    all->fight->hp_enemie2 == 50 ? all->fight->text_hp_enemie2 =
        sfTexture_createFromFile("sprite/100.png", NULL) : 0;
    if (all->fight->hp_enemie2 >= 40 && all->fight->hp_enemie2 < 50)
        all->fight->text_hp_enemie2 = sfTexture_createFromFile
            ("sprite/80.png", NULL);
    if (all->fight->hp_enemie2 >= 30 && all->fight->hp_enemie2 < 40)
        all->fight->text_hp_enemie2 = sfTexture_createFromFile
            ("sprite/60.png", NULL);
    if (all->fight->hp_enemie2 >= 20 && all->fight->hp_enemie2 < 30)
        all->fight->text_hp_enemie2 = sfTexture_createFromFile
            ("sprite/40.png", NULL);
    if (all->fight->hp_enemie2 >= 10 && all->fight->hp_enemie2 < 20)
        all->fight->text_hp_enemie2 = sfTexture_createFromFile
            ("sprite/20.png", NULL);
    if (all->fight->hp_enemie2 >= -10 && all->fight->hp_enemie2 < 10)
        all->fight->text_hp_enemie2 = sfTexture_createFromFile
            ("sprite/0.png", NULL);
    sfSprite_setTexture
        (all->fight->sprite_hp_enemie2, all->fight->text_hp_enemie2, sfTrue);
}

void change_texture_hp_blue(all_t *all)
{
    all->fight->hp_enemie < 0 ? all->fight->hp_enemie = 0 : 0;
    if (all->fight->hp_enemie >= 40)
        all->fight->text_hp_enemie = sfTexture_createFromFile
            ("sprite/100.png", NULL);
    if (all->fight->hp_enemie >= 30 && all->fight->hp_enemie < 40)
        all->fight->text_hp_enemie = sfTexture_createFromFile
            ("sprite/70.png", NULL);
    if (all->fight->hp_enemie >= 20 && all->fight->hp_enemie < 30)
        all->fight->text_hp_enemie = sfTexture_createFromFile
            ("sprite/50.png", NULL);
    if (all->fight->hp_enemie >= 10 && all->fight->hp_enemie < 20)
        all->fight->text_hp_enemie = sfTexture_createFromFile
            ("sprite/20.png", NULL);
    if (all->fight->hp_enemie >= -10 && all->fight->hp_enemie < 10)
        all->fight->text_hp_enemie = sfTexture_createFromFile
            ("sprite/0.png", NULL);
    sfSprite_setTexture
        (all->fight->sprite_hp_enemie, all->fight->text_hp_enemie, sfTrue);
}

void change_texture_hp_blue2(all_t *all)
{
    all->fight->hp_enemie2 < 0 ? all->fight->hp_enemie2 = 0 : 0;
    if (all->fight->hp_enemie2 >= 40)
        all->fight->text_hp_enemie2 = sfTexture_createFromFile
            ("sprite/100.png", NULL);
    if (all->fight->hp_enemie2 >= 30 && all->fight->hp_enemie2 < 40)
        all->fight->text_hp_enemie2 = sfTexture_createFromFile
            ("sprite/70.png", NULL);
    if (all->fight->hp_enemie2 >= 20 && all->fight->hp_enemie2 < 30)
        all->fight->text_hp_enemie2 = sfTexture_createFromFile
            ("sprite/50.png", NULL);
    if (all->fight->hp_enemie2 >= 10 && all->fight->hp_enemie2 < 20)
        all->fight->text_hp_enemie2 = sfTexture_createFromFile
            ("sprite/20.png", NULL);
    if (all->fight->hp_enemie2 >= -10 && all->fight->hp_enemie2 < 10)
        all->fight->text_hp_enemie2 = sfTexture_createFromFile
            ("sprite/0.png", NULL);
    sfSprite_setTexture
        (all->fight->sprite_hp_enemie2, all->fight->text_hp_enemie2, sfTrue);
}
