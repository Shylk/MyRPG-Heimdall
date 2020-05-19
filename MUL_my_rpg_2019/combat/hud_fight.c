/*
** EPITECH PROJECT, 2020
** hud
** File description:
** everything related to the hud of fight
*/

#include "../include/my.h"

void set_new_position_2(all_t *all)
{
    all->fight->pos_hp_enemie2.x = all->fight->pos_gobelin2.x;
    all->fight->pos_hp_enemie2.y = all->fight->pos_gobelin2.y + 140;
    all->text->pos_int_hp_enemie2.x = all->fight->pos_hp_enemie2.x - 50;
    all->text->pos_int_hp_enemie2.y = all->fight->pos_hp_enemie2.y - 5;
    all->text->pos_name_enemie2.x = all->fight->pos_hp_enemie2.x - 50;
    all->text->pos_name_enemie2.y = all->fight->pos_hp_enemie2.y - 200;
    all->fight->pos_hp_girl.x = all->fight->pos_girl.x;
    all->fight->pos_hp_girl.y = all->fight->pos_girl.y + 153;
    all->text->pos_int_hp_girl.x = all->fight->pos_hp_girl.x - 50;
    all->text->pos_int_hp_girl.y = all->fight->pos_hp_girl.y - 5;
    all->text->pos_name_girl.x = all->fight->pos_hp_girl.x - 50;
    all->text->pos_name_girl.y = all->fight->pos_hp_girl.y - 200;
}

void set_new_position(all_t *all)
{
    all->fight->pos_hp.x = all->fight->pos_perso.x;
    all->fight->pos_hp.y = all->fight->pos_perso.y + 210;
    all->fight->pos_hp_enemie.x = all->fight->pos_gobelin.x;
    all->fight->pos_hp_enemie.y = all->fight->pos_gobelin.y + 140;
    all->text->pos_int_hp_hero.x = all->fight->pos_hp.x - 60;
    all->text->pos_int_hp_hero.y = all->fight->pos_hp.y - 5;
    all->text->pos_int_hp_enemie.x = all->fight->pos_hp_enemie.x - 50;
    all->text->pos_int_hp_enemie.y = all->fight->pos_hp_enemie.y - 5;
    all->text->pos_name.x = all->fight->pos_hp.x - 50;
    all->text->pos_name.y = all->fight->pos_hp.y - 250;
    all->text->pos_name_enemie.x = all->fight->pos_hp_enemie.x - 50;
    all->text->pos_name_enemie.y = all->fight->pos_hp_enemie.y - 200;
    set_new_position_2(all);
}

void draw_sprite_and_text(all_t *all)
{
    sfRenderWindow_drawSprite(all->window, all->fight->sprite_hp, NULL);
    sfRenderWindow_drawSprite(all->window, all->fight->sprite_hp_enemie, NULL);
    sfRenderWindow_drawText(all->window, all->text->int_hp_hero, NULL);
    sfRenderWindow_drawText(all->window, all->text->int_hp_enemie, NULL);
    if (all->menu->menu != 5 && all->menu->menu != 6) {
        sfRenderWindow_drawSprite
            (all->window, all->fight->sprite_hp_enemie2, NULL);
        sfRenderWindow_drawText(all->window, all->text->int_hp_enemie2, NULL);
        sfRenderWindow_drawText
            (all->window, all->text->fight_name_enemie2, NULL);
    }
    if (all->menu->menu == 3) {
        sfRenderWindow_drawSprite
            (all->window, all->fight->sprite_hp_girl, NULL);
        sfRenderWindow_drawText(all->window, all->text->int_hp_girl, NULL);
        sfRenderWindow_drawText(all->window, all->text->fight_name_girl, NULL);
    }
    sfRenderWindow_drawText(all->window, all->text->fight_name, NULL);
    sfRenderWindow_drawText(all->window, all->text->fight_name_enemie, NULL);
}

int sf_set_position(all_t *all)
{
    sfSprite_setPosition
        (all->fight->sprite_hp_girl, all->fight->pos_hp_girl);
    sfText_setPosition(all->text->int_hp_hero, all->text->pos_int_hp_hero);
    sfText_setPosition(all->text->int_hp_enemie, all->text->pos_int_hp_enemie);
    sfText_setPosition
        (all->text->int_hp_enemie2, all->text->pos_int_hp_enemie2);
    sfText_setPosition(all->text->int_hp_girl, all->text->pos_int_hp_girl);
    if (sf_set_pos_bis(all) == 84)
        return (84);
    sfText_setPosition(all->text->fight_name, all->text->pos_name);
    sfText_setPosition
        (all->text->fight_name_enemie, all->text->pos_name_enemie);
    sfText_setPosition
        (all->text->fight_name_enemie2, all->text->pos_name_enemie2);
    sfText_setPosition(all->text->fight_name_girl, all->text->pos_name_girl);
    return (0);
}

int hp_hud(all_t *all)
{
    all->menu->menu == 6 ? set_boss_position(all) : set_new_position(all);
    change_texture_hp_hero(all);
    if (all->menu->menu == 3 || all->menu->menu == 5) {
        change_texture_hp_enemie(all);
        change_texture_hp_enemie2(all);
        change_texture_hp_girl(all);
    } else if (all->menu->menu == 4) {
        change_texture_hp_blue(all);
        change_texture_hp_blue2(all); }
    if (all->menu->menu == 6) {
        change_texture_hp_boss(all);
        set_boss_position(all); }
    sfSprite_setPosition(all->fight->sprite_hp, all->fight->pos_hp);
    sfSprite_setPosition
        (all->fight->sprite_hp_enemie, all->fight->pos_hp_enemie);
    sfSprite_setPosition
        (all->fight->sprite_hp_enemie2, all->fight->pos_hp_enemie2);
    if (sf_set_position(all) == 84)
        return (84);
    draw_sprite_and_text(all);
    return (0);
}
