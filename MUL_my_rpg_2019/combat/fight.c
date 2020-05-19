/*
** EPITECH PROJECT, 2020
** fight
** File description:
** everything related to the fight management
*/

#include "../include/my.h"

void select_fight_choice(all_t *all)
{
    if (all->fight->select == 1) {
        all->fight->pos_select.x = 554;
        all->fight->pos_select.y = 910;
    } if (all->fight->select == 2) {
        all->fight->pos_select.x = 835;
        all->fight->pos_select.y = 910;
    } if (all->fight->select == 3) {
        all->fight->pos_select.x = 1082;
        all->fight->pos_select.y = 910;
    } if (all->fight->select == 4) {
        all->fight->pos_select.x = 794;
        all->fight->pos_select.y = 965;
    }
    sfSprite_setPosition(all->fight->sprite_select, all->fight->pos_select);
    sfRenderWindow_drawSprite(all->window, all->fight->sprite_select, NULL);
}

void select_attack_choice(all_t *all)
{
    if (all->fight->hp_enemie <= 0)
        all->fight->which_to_attack = 1;
    if (all->fight->hp_enemie2 <= 0)
        all->fight->which_to_attack = 0;
    if (all->fight->which_to_attack == 0) {
        all->fight->pos_select_enemie.x = all->fight->pos_gobelin.x - 30;
        all->fight->pos_select_enemie.y = all->fight->pos_gobelin.y + 10;
    } else if (all->fight->which_to_attack == 1) {
        all->fight->pos_select_enemie.x = all->fight->pos_gobelin2.x - 30;
        all->fight->pos_select_enemie.y = all->fight->pos_gobelin2.y + 10;
    }
    sfSprite_setPosition
        (all->fight->sprite_select_enemie, all->fight->pos_select_enemie);
    if (all->fight->turn == 0)
        sfRenderWindow_drawSprite
            (all->window, all->fight->sprite_select_enemie, NULL);
}

int player_turn(all_t *all)
{
    if (all->fight->choice == 1) {
        if (all->fight->select == 1) {
            if (player_attack(all) == 84)
                return (84);
        }
        all->fight->select == 2 ? use_potion(all) : 0;
        if (all->fight->select == 3) {
            sfRenderWindow_drawSprite
                (all->window, all->fight->sprite_flee, NULL);
            sfRenderWindow_drawSprite
                (all->window, all->fight->sprite_select_flee, NULL);
        }
        all->fight->select == 4 ? all->fight->turn = 1 : 0;
    }
    return (0);
}

int fight_bis(all_t *all)
{
    sfRenderWindow_drawSprite(all->window, all->fight->sprite_gobelin, NULL);
    sfRenderWindow_drawSprite(all->window, all->fight->sprite_gobelin2, NULL);
    sfRenderWindow_drawSprite(all->window, all->fight->sprite_perso, NULL);
    sfRenderWindow_drawSprite(all->window, all->fight->sprite_girl, NULL);
    if (hp_hud(all) == 84)
        return (84);
    return (0);
}

int fight(all_t *all)
{
    sfRenderWindow_drawSprite(all->window, all->fight->sprite_fight, NULL);
    move_cursor(all);
    select_fight_choice(all);
    all->clocker->time_fight =
        sfClock_getElapsedTime(all->clocker->clock_fight);
    all->clocker->seconds_fight =
        all->clocker->time_fight.microseconds / 1000000.0;
    if (all->clocker->seconds_fight >= 0.1) {
        move_rect_gobelin(all);
        sfClock_restart(all->clocker->clock_fight);
    } if (all->fight->died == 0) {
        if (fight_bis(all) == 84)
            return (84);
        if (player_turn(all) == 84)
            return (84);
        enemy_turn(all);
    } else end_screen(all);
    return (0);
}
