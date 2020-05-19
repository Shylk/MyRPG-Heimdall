/*
** EPITECH PROJECT, 2020
** boss
** File description:
** fight management
*/

#include "../include/my.h"

void move_rect_boss(all_t *all)
{
    all->fight->rct_boss.left += 327.666667;
    if (all->fight->rct_boss.left >= 1900)
        all->fight->rct_boss.left = 0;
    sfSprite_setTextureRect(all->fight->sprite_gobelin, all->fight->rct_boss);
}

void animation_boss_die(all_t *all)
{
    static int count = 70;
    count--;
    all->fight->text_gobelin = sfTexture_createFromFile
        ("sprite/minotaur_dead.png", NULL);
    sfSprite_setTexture
        (all->fight->sprite_gobelin, all->fight->text_gobelin, sfTrue);
    sfRenderWindow_drawSprite(all->window, all->fight->sprite_gobelin, NULL);
    if (count <= 0) {
        reset_value_end_fight_tuto(all);
        all->fight->died = 2;
    }
}

void change_texture_hp_boss_2(all_t *all)
{
    if (all->fight->hp_enemie >= 120 && all->fight->hp_enemie < 140)
        all->fight->text_hp_enemie = sfTexture_createFromFile
            ("sprite/60.png", NULL);
    if (all->fight->hp_enemie >= 100 && all->fight->hp_enemie < 120)
        all->fight->text_hp_enemie = sfTexture_createFromFile
            ("sprite/50.png", NULL);
    if (all->fight->hp_enemie >= 80 && all->fight->hp_enemie < 100)
        all->fight->text_hp_enemie = sfTexture_createFromFile
            ("sprite/40.png", NULL);
    if (all->fight->hp_enemie >= 60 && all->fight->hp_enemie < 80)
        all->fight->text_hp_enemie = sfTexture_createFromFile
            ("sprite/30.png", NULL);
    if (all->fight->hp_enemie >= 40 && all->fight->hp_enemie < 60)
        all->fight->text_hp_enemie = sfTexture_createFromFile
            ("sprite/20.png", NULL);
    if (all->fight->hp_enemie >= 20 && all->fight->hp_enemie < 40)
        all->fight->text_hp_enemie = sfTexture_createFromFile
            ("sprite/10.png", NULL);
    if (all->fight->hp_enemie >= -10 && all->fight->hp_enemie < 20)
        all->fight->text_hp_enemie = sfTexture_createFromFile
            ("sprite/0.png", NULL);
}

void change_texture_hp_boss(all_t *all)
{
    all->fight->hp_enemie < 0 ? all->fight->hp_enemie = 0 : 0;
    if (all->fight->hp_enemie == 200)
        all->fight->text_hp =
            sfTexture_createFromFile("sprite/100.png", NULL);
    if (all->fight->hp_enemie >= 180 && all->fight->hp_enemie < 200)
        all->fight->text_hp_enemie = sfTexture_createFromFile
            ("sprite/90.png", NULL);
    if (all->fight->hp_enemie >= 160 && all->fight->hp_enemie < 180)
        all->fight->text_hp_enemie = sfTexture_createFromFile
            ("sprite/80.png", NULL);
    if (all->fight->hp_enemie >= 140 && all->fight->hp_enemie < 160)
        all->fight->text_hp_enemie = sfTexture_createFromFile
            ("sprite/70.png", NULL);
    change_texture_hp_boss_2(all);
    sfSprite_setTexture
        (all->fight->sprite_hp_enemie, all->fight->text_hp_enemie, sfTrue);
}

void set_boss_position(all_t *all)
{
    all->fight->pos_hp.x = all->fight->pos_perso.x;
    all->fight->pos_hp.y = all->fight->pos_perso.y + 210;
    all->text->pos_int_hp_hero.x = all->fight->pos_hp.x - 60;
    all->text->pos_int_hp_hero.y = all->fight->pos_hp.y - 5;
    all->text->pos_name.x = all->fight->pos_hp.x - 50;
    all->text->pos_name.y = all->fight->pos_hp.y - 250;
    all->fight->pos_hp_enemie.x = all->fight->pos_gobelin.x + 130;
    all->fight->pos_hp_enemie.y = all->fight->pos_gobelin.y + 230;
    all->text->pos_int_hp_enemie.x = all->fight->pos_hp_enemie.x - 60;
    all->text->pos_int_hp_enemie.y = all->fight->pos_hp_enemie.y - 5;
    all->text->pos_name_enemie.x = all->fight->pos_hp_enemie.x - 50;
    all->text->pos_name_enemie.y = all->fight->pos_hp_enemie.y - 260;
}
