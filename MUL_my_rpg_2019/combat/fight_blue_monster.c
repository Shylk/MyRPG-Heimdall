/*
** EPITECH PROJECT, 2020
** fight
** File description:
** second monster
*/

#include "../include/my.h"

int player_turn_2nd_fight(all_t *all)
{
    if (all->fight->choice == 1) {
        if (all->fight->select == 1) {
            select_attack_choice(all);
            if (all->fight->attack_selected == 1) {
                if (animation_attack_sword(all) == 84)
                    return (84);
            }
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

void enemy_turn_2nd_fight(all_t *all)
{
    if (all->fight->turn == 1) {
        draw_shield(all);
        if (all->fight->which_to_attack == 0 && all->fight->hp_enemie > 0)
            gobelin_attack(all);
        if (all->fight->which_to_attack == 1 && all->fight->hp_enemie2 > 0)
            second_gobelin_attack(all);
    }
    all->fight->hp_enemie <= 0 ? animation_blue_die(all) : 0;
    all->fight->hp_enemie2 <= 0 ? animation_blue2_die(all) : 0;
}

int fight_second_monster(all_t *all)
{
    sfRenderWindow_drawSprite(all->window, all->fight->sprite_fight, NULL);
    select_fight_choice(all);
    all->clocker->time_fight =
        sfClock_getElapsedTime(all->clocker->clock_fight);
    all->clocker->seconds_fight =
        all->clocker->time_fight.microseconds / 1000000.0;
    if (all->clocker->seconds_fight >= 0.1) {
        move_rect_blue_monsters(all);
        sfClock_restart(all->clocker->clock_fight);
    }
    sfRenderWindow_drawSprite(all->window, all->fight->sprite_gobelin, NULL);
    sfRenderWindow_drawSprite(all->window, all->fight->sprite_gobelin2, NULL);
    sfRenderWindow_drawSprite(all->window, all->fight->sprite_perso, NULL);
    if (hp_hud(all) == 84)
        return (84);
    if (player_turn_2nd_fight(all) == 84)
        return (84);
    enemy_turn_2nd_fight(all);
    return (0);
}
