/*
** EPITECH PROJECT, 2020
** gobelin
** File description:
** management
*/

#include "../include/my.h"

void reset_value_end_fight1(all_t *all)
{
    all->menu->menu = 1;
    all->fight->ally_turn = 0;
    all->fight->select = 0;
    all->fight->turn = 0;
    all->fight->choice = 0;
    all->fight->attack_selected = 0;
    all->fight->hp_enemie = 40;
    all->fight->hp_enemie2 = 40;
    all->fight->pos_perso.y += 30;
    all->fight->text_gobelin = sfTexture_createFromFile
        ("sprite/blue_monster.png", NULL);
    all->fight->text_gobelin2 = sfTexture_createFromFile
        ("sprite/blue_monster.png", NULL);
    sfSprite_setTexture
        (all->fight->sprite_gobelin, all->fight->text_gobelin, sfTrue);
    sfSprite_setTexture
        (all->fight->sprite_gobelin2, all->fight->text_gobelin2, sfTrue);
    sfText_setString(all->text->fight_name_enemie, "Blip the slime");
    sfText_setString(all->text->fight_name_enemie2, "Blop the slime");
}

void move_rect_gobelin(all_t *all)
{
    all->fight->rct_gobelin.left += 111.11;
    if (all->fight->rct_gobelin.left >= 999)
        all->fight->rct_gobelin.left = 0;
    sfSprite_setTextureRect
        (all->fight->sprite_gobelin, all->fight->rct_gobelin);
    all->fight->rct_gobelin2.left += 111.11;
    if (all->fight->rct_gobelin2.left >= 999)
        all->fight->rct_gobelin2.left = 0;
    sfSprite_setTextureRect
        (all->fight->sprite_gobelin2, all->fight->rct_gobelin2);
}
