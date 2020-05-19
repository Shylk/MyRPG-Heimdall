/*
** EPITECH PROJECT, 2020
** first fight
** File description:
** hero against gobelin
*/

#include "../include/my.h"

void reset_value_end_fight_tuto(all_t *all)
{
    all->menu->menu = 1;
    all->fight->ally_turn = 0;
    all->fight->select = 0;
    all->fight->turn = 0;
    all->fight->choice = 0;
    all->fight->attack_selected = 0;
    all->fight->hp_enemie = 50;
    all->fight->hp_enemie2 = 50;
    all->fight->text_gobelin = sfTexture_createFromFile
        ("sprite/gobelin_idle.png", NULL);
    all->fight->text_gobelin2 = sfTexture_createFromFile
        ("sprite/gobelin_idle.png", NULL);
    sfSprite_setTexture
        (all->fight->sprite_gobelin, all->fight->text_gobelin, sfTrue);
    sfSprite_setTexture
        (all->fight->sprite_gobelin2, all->fight->text_gobelin2, sfTrue);
    change_texture_hp_enemie(all);
}

void animation_gobelin_die_tuto(all_t *all)
{
    static int count = 70;
    count--;
    all->fight->text_gobelin = sfTexture_createFromFile
        ("sprite/gobelin_die.png", NULL);
    sfSprite_setTexture
        (all->fight->sprite_gobelin, all->fight->text_gobelin, sfTrue);
    sfRenderWindow_drawSprite(all->window, all->fight->sprite_gobelin, NULL);
    if (count <= 0)
        reset_value_end_fight_tuto(all);
}

int player_turn_tuto(all_t *all)
{
    if (all->fight->choice == 1 && all->fight->turn == 0) {
        if (all->fight->select == 1) {
            if (animation_attack_sword(all) == 84)
                return (84);
        }
        if (all->fight->select == 2)
            use_potion(all);
        if (all->fight->select == 3) {
            sfRenderWindow_drawSprite
                (all->window, all->fight->sprite_flee, NULL);
            sfRenderWindow_drawSprite
                (all->window, all->fight->sprite_select_flee, NULL);
        }
        if (all->fight->select == 4)
            all->fight->turn = 1;
    }
    return (0);
}

void enemy_turn_tuto(all_t *all)
{
    if (all->fight->turn == 1) {
        draw_shield(all);
        if (all->fight->hp_enemie > 0)
            gobelin_attack(all);
    }
    all->fight->hp_enemie <= 0 ? animation_gobelin_die_tuto(all) : 0;
}

int fight_tuto(all_t *all)
{
    sfRenderWindow_drawSprite(all->window, all->fight->sprite_fight, NULL);
    select_fight_choice(all);
    all->clocker->time_fight =
        sfClock_getElapsedTime(all->clocker->clock_fight);
    all->clocker->seconds_fight =
        all->clocker->time_fight.microseconds / 1000000.0;
    if (all->clocker->seconds_fight >= 0.1) {
        move_rect_gobelin(all);
        sfClock_restart(all->clocker->clock_fight); }
    if (all->fight->died == 0) {
        sfRenderWindow_drawSprite
            (all->window, all->fight->sprite_gobelin, NULL);
        sfRenderWindow_drawSprite
            (all->window, all->fight->sprite_perso, NULL);
        if (hp_hud(all) == 84)
            return (84);
        if (player_turn_tuto(all) == 84)
            return (84);
        enemy_turn_tuto(all);
    } else end_screen(all);
    return (0);
}
