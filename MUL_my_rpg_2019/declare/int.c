/*
** EPITECH PROJECT, 2019
** declare_list
** File description:
** main
*/

#include <stdbool.h>
#include "../include/my.h"

void declare_int_4(all_t *all)
{
    all->perso->first_combat = 0;
    all->perso->second_combat = 0;
    all->perso->third_combat = 0;
    all->perso->mayor_ask_kill_boss = 0;
    all->menu->section = 0;
    all->menu->how_to_play_section = 1;
    all->fight->died = 0;
    all->perso->get_benediction = 0;
    all->perso->press_m_key = 0;
    all->perso->press_q_key = 0;
    all->perso->press_s_key = 0;
    all->event->check = 0;
    all->menu->music = true;
    all->menu->sound_effects = true;
    all->perso->choose_class = true;
    SPRINT = 0;
}

void declare_int_3(all_t *all)
{
    all->fight->attack_selected = 0;
    all->fight->ally_turn = 0;
    SPRINT_CURSOR = 0;
    all->game->can_draw_glow_item = 0;
    all->game->can_draw_glow_card_skill_tree = 0;
    all->game->can_draw_no_xp_cursor = 0;
    all->event->x = 0;
    all->event->y = 0;
    all->map->scene = 0;
    all->map->tab = 0;
    all->stat->speed = 0;
    all->stat->attack = 0;
    all->stat->life_max = 0;
    all->stat->defense = 0;
    all->stat->intelligence = 0;
    all->stat->luck = 0;
    all->stat->dexterity = 0;
    all->stat->strengh = 0;
    declare_int_4(all);
}

void declare_int_2(all_t *all)
{
    all->perso->press_i_key = 0;
    all->perso->xp = 0;
    all->perso->talk_to_mayor_daughter = 0;
    all->pause->section = 0;
    all->pause->bestiary_scene = 0;
    LEFT = 0;
    RIGHT = 0;
    UP = 0;
    DOWN = 0;
    X = 140;
    Y = 140;
    all->fight->select = 1;
    all->fight->choice = 0;
    all->fight->select_flee = 0;
    all->fight->hp_enemie = 50;
    all->fight->hp_enemie2 = 50;
    all->fight->hp_girl = 80;
    all->fight->turn = 0;
    all->fight->which_to_attack = 0;
    declare_int_3(all);
}

int declare_int(all_t *all)
{
    all->intro->intro = 0;
    all->script->name = 0;
    all->text->len_name = 0;
    all->script->choice = 0;
    all->menu->menu = -1;
    all->menu->which_menu = 0;
    all->menu->quit_menu = 0;
    all->perso->player_class = 0;
    all->perso->pv = 100;
    all->perso->tmp_pv = 0;
    all->perso->money = 10;
    all->perso->take_potion_from_old_man = 0;
    all->game->tmp = 0;
    all->game->tmp2 = 0;
    all->perso->gave_potion_to_chief = 0;
    all->perso->ask_find_daughter_mayor = 0;
    if (init_check_placement_inventory_tab(all) == 84)
        return (84);
    declare_int_2(all);
    return (0);
}
