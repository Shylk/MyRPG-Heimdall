/*
** EPITECH PROJECT, 2020
** fight event
** File description:
** function called in analyze_event
*/

#include "../../include/my.h"

void select_enemie_to_attack(all_t *all)
{
    if (all->event->event.type == sfEvtKeyReleased &&
        all->event->event.key.code == sfKeyRight && all->fight->choice == 1
        && all->fight->select == 1 && all->fight->attack_selected == 0 &&
        all->fight->hp_enemie > 0 && all->fight->turn == 0)
        all->fight->which_to_attack = 1;
    else if (all->event->event.type == sfEvtKeyReleased &&
        all->event->event.key.code == sfKeyLeft && all->fight->choice == 1
        && all->fight->select == 1 && all->fight->attack_selected == 0 &&
        all->fight->hp_enemie2 > 0 && all->fight->turn == 0)
        all->fight->which_to_attack = 0;
    if (all->menu->menu == 5)
        all->fight->which_to_attack = 0;
}

void change_combat_choice(all_t *all)
{
    if (sfKeyboard_isKeyPressed(sfKeyRight) && all->fight->choice == 0) {
        sfMusic_stop(all->music->menu_click);
        sfMusic_play(all->music->menu_click);
        all->fight->select++;
    } else if (sfKeyboard_isKeyPressed(sfKeyLeft) && all->fight->choice == 0) {
        sfMusic_stop(all->music->menu_click);
        sfMusic_play(all->music->menu_click);
        all->fight->select--;
    }
    all->fight->select <= 0 ? all->fight->select = 4 : 0;
    all->fight->select >= 5 ? all->fight->select = 1 : 0;
    select_enemie_to_attack(all);
}

void flee_event(all_t *all)
{
    if (sfKeyboard_isKeyPressed(sfKeyRight) && all->fight->choice == 1) {
        sfMusic_stop(all->music->menu_click);
        sfMusic_play(all->music->menu_click);
        all->fight->select_flee = 1;
    } else if (sfKeyboard_isKeyPressed(sfKeyLeft) && all->fight->choice == 1) {
        sfMusic_stop(all->music->menu_click);
        sfMusic_play(all->music->menu_click);
        all->fight->select_flee = 0;
    }
    if (all->fight->select_flee == 0) {
        all->fight->pos_select_flee.x = 760;
        all->fight->pos_select_flee.y = 520;
    }
    if (all->fight->select_flee == 1) {
        all->fight->pos_select_flee.x = 980;
        all->fight->pos_select_flee.y = 520;
    }
    sfSprite_setPosition
        (all->fight->sprite_select_flee, all->fight->pos_select_flee);
}

int flee_yes_or_no(all_t *all)
{
    if (all->event->event.type == sfEvtKeyReleased &&
        all->event->event.key.code == sfKeyEnter && all->fight->choice == 1
        && all->fight->select == 3) {
        if (all->perso->money < 5) {
            all->fight->choice = 0;
            return 1;
        }
        all->fight->choice = 0;
        if (all->fight->select_flee == 0 && all->menu->menu != 6) {
            all->perso->money -= 5;
            all->menu->menu == 5 ? reset_value_end_fight_tuto(all) : 0;
            all->menu->menu == 3 ? reset_value_end_fight1(all) : 0;
            all->menu->menu == 4 ? reset_value_blue_monster(all) : 0;
            all->menu->menu == 6 ? reset_value_end_fight_tuto(all) : 0;
            all->menu->menu = 1;
        }
        return 1;
    }
    return (0);
}

void combat_event(all_t *all)
{
    change_combat_choice(all);
    flee_event(all);
    if (flee_yes_or_no(all) == 1)
        return;
    if (all->event->event.type == sfEvtKeyReleased &&
        all->event->event.key.code == sfKeyEnter && all->fight->choice == 1
        && all->fight->turn == 0) {
        all->fight->attack_selected = 1;
    }
    if (all->event->event.type == sfEvtKeyReleased &&
        all->event->event.key.code == sfKeyEnter && all->fight->choice == 0
        && all->fight->turn == 0)
        all->fight->choice = 1;
}
