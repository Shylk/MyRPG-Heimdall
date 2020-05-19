/*
** EPITECH PROJECT, 2020
** boss
** File description:
** fight
*/

#include "../include/my.h"

int player_turn_boss(all_t *all)
{
    if (all->fight->choice == 1 && all->fight->turn == 0) {
        if (all->fight->select == 1)
            if (animation_attack_sword(all) == 84)
                return (84);
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

void enemy_turn_boss(all_t *all)
{
    if (all->fight->turn == 1) {
        draw_shield(all);
        if (all->fight->hp_enemie > 0)
            gobelin_attack(all);
    }
    all->fight->hp_enemie <= 0 ? animation_boss_die(all) : 0;
}

void reset_value_blue_monster(all_t *all)
{
    all->menu->menu = 1;
    all->fight->ally_turn = 0;
    all->fight->select = 0;
    all->fight->turn = 0;
    all->fight->choice = 0;
    all->fight->attack_selected = 1;
    all->fight->which_to_attack = 0;
    all->fight->hp_enemie = 200;
    all->fight->pos_perso.y += 30;
    sfText_setString(all->text->fight_name_enemie, "MOPHEUS, The King");
    all->fight->text_gobelin = sfTexture_createFromFile
        ("sprite/minotaur.png", NULL);
    sfSprite_setTexture
        (all->fight->sprite_gobelin, all->fight->text_gobelin, sfTrue);
    change_texture_hp_boss(all);
}

void end_screen(all_t *all)
{
    sfRenderWindow_clear(all->window, sfBlack);
    if (all->fight->died == 1)
        sfRenderWindow_drawSprite(all->window, all->fight->spr_end, NULL);
    if (all->fight->died == 2) {
        sfRenderWindow_drawSprite(all->window, all->fight->spr_win, NULL);
        sfSprite_setTexture(all->hud->sprite_quest_log,
        all->hud->text_quest_log_all, sfTrue);
    }
}

int boss_fight(all_t *all)
{
    sfRenderWindow_drawSprite(all->window, all->fight->sprite_fight, NULL);
    select_fight_choice(all);
    all->clocker->time_fight =
        sfClock_getElapsedTime(all->clocker->clock_fight);
    all->clocker->seconds_fight =
        all->clocker->time_fight.microseconds / 1000000.0;
    if (all->clocker->seconds_fight >= 0.1) {
        move_rect_boss(all);
        sfClock_restart(all->clocker->clock_fight); }
    if (all->fight->died == 0) {
        sfRenderWindow_drawSprite
            (all->window, all->fight->sprite_gobelin, NULL);
        sfRenderWindow_drawSprite
            (all->window, all->fight->sprite_perso, NULL);
        if (hp_hud(all) == 84)
            return (84);
        if (player_turn_boss(all) == 84)
            return (84);
        enemy_turn_boss(all);
    } else end_screen(all);
    return (0);
}
