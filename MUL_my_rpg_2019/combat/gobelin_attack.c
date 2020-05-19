/*
** EPITECH PROJECT, 2020
** gobelin attack
** File description:
** everything related to the gobelin attack
*/

#include "../include/my.h"

void gobelin_attack(all_t *all)
{
    static int distance = 0, music = 0;
    distance == 0 ? all->fight->pos_gobelin.x -= 10 : 0;
    if (music == 0 && all->fight->pos_gobelin.x <= 750) {
        sfMusic_stop(all->music->gobelin_punch);
        sfMusic_play(all->music->gobelin_punch);
        music++;
    }
    if (all->fight->pos_gobelin.x <= 710 && distance == 0)
        distance = 1;
    if (distance == 1) {
        all->fight->pos_gobelin.x += 20;
        if (all->fight->pos_gobelin.x >= 1316) {
            damage_to_player(all);
            all->fight->turn = 0;
            all->fight->choice = 0;
            distance = 0;
            music = 0;
        }
    }
    sfSprite_setPosition(all->fight->sprite_gobelin, all->fight->pos_gobelin);
}

void second_gobelin_attack(all_t *all)
{
    static int distance = 0, music = 0;
    distance == 0 ? all->fight->pos_gobelin2.x -= 10 : 0;
    if (music == 0 && all->fight->pos_gobelin2.x <= 750) {
        sfMusic_stop(all->music->gobelin_punch);
        sfMusic_play(all->music->gobelin_punch);
        music++; }
    if (all->fight->pos_gobelin2.x <= 710 && distance == 0)
        distance = 1;
    if (distance == 1) {
        all->fight->pos_gobelin2.x += 20;
        if (all->fight->pos_gobelin2.x >= 1316) {
            damage_to_player(all);
            all->fight->turn = 0;
            all->fight->choice = 0;
            distance = 0;
            music = 0;
        }
    }
    sfSprite_setPosition(all->fight->sprite_gobelin2,
    all->fight->pos_gobelin2);
}

void animation_gobelin_die(all_t *all)
{
    static int count = 70;
    count--;
    all->fight->text_gobelin = sfTexture_createFromFile
        ("sprite/gobelin_die.png", NULL);
    sfSprite_setTexture
        (all->fight->sprite_gobelin, all->fight->text_gobelin, sfTrue);
    sfRenderWindow_drawSprite(all->window, all->fight->sprite_gobelin, NULL);
    if (count <= 0 && all->fight->hp_enemie2 <= 0)
        reset_value_end_fight1(all);
}

void animation_gobelin2_die(all_t *all)
{
    static int count = 70;
    count--;
    all->fight->text_gobelin2 = sfTexture_createFromFile
        ("sprite/gobelin_die.png", NULL);
    sfSprite_setTexture
        (all->fight->sprite_gobelin2, all->fight->text_gobelin2, sfTrue);
    sfRenderWindow_drawSprite(all->window, all->fight->sprite_gobelin2, NULL);
    if (count <= 0 && all->fight->hp_enemie <= 0)
        reset_value_end_fight1(all);
}
