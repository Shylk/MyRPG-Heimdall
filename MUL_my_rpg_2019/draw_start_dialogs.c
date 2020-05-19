/*
** EPITECH PROJECT, 2019
** menu_managment
** File description:
** main
*/

#include <stdbool.h>
#include "include/my.h"

int draw_dialogs_5(all_t *all)
{
    if (all->perso->mayor_ask_kill_boss == 1 && all->perso->third_combat == 0
        && all->perso->pos_perso.x >= all->game->vector_strange_man.x + 1300
        && all->perso->pos_perso.x <= all->game->vector_strange_man.x + 3500
        && all->perso->pos_perso.y >= all->game->vector_strange_man.y - 500
        && all->perso->pos_perso.y <= all->game->vector_strange_man.y - 200) {
        all->perso->third_combat = 1;
        all->menu->menu = 4;
    }
    if (all->perso->pos_perso.x >= all->game->vector_strange_man.x - 20
        && all->perso->pos_perso.x <= all->game->vector_strange_man.x + 100
        && all->perso->pos_perso.y >= all->game->vector_strange_man.y - 160
        && all->perso->pos_perso.y <= all->game->vector_strange_man.y + 160)
        sfRenderWindow_drawSprite
            (all->window, all->hud->sprite_not_that_way, NULL);
    if (draw_dialogs_6(all) == 84)
        return (84);
    return (0);
}

int draw_dialogs_4(all_t *all)
{
    if (all->perso->take_potion_from_old_man == 1 &&
        all->perso->first_combat == 0
        && all->perso->pos_perso.x >= all->game->vector_old_man.x + 900
        && all->perso->pos_perso.x <= all->game->vector_old_man.x + 1500
        && all->perso->pos_perso.y >= all->game->vector_old_man.y - 400
        && all->perso->pos_perso.y <= all->game->vector_old_man.y - 100) {
        all->perso->first_combat = 1;
        all->menu->menu = 5;
    }
    if (all->perso->talk_to_mayor_daughter == 1 &&
        all->perso->second_combat == 0
        && all->perso->pos_perso.x >= all->game->vector_old_man.x + 900
        && all->perso->pos_perso.x <= all->game->vector_old_man.x + 1500
        && all->perso->pos_perso.y >= all->game->vector_old_man.y - 400
        && all->perso->pos_perso.y <= all->game->vector_old_man.y - 100) {
        all->perso->second_combat = 1;
        all->menu->menu = 3;
    }
    if (draw_dialogs_5(all) == 84)
        return (84);
    return (0);
}

int draw_dialogs_3(all_t *all)
{
    if (all->perso->talk_to_mayor_daughter == 1
        && all->perso->pos_perso.x >= all->game->vector_mayor.x - 140
        && all->perso->pos_perso.x <= all->game->vector_mayor.x + 140
        && all->perso->pos_perso.y >= all->game->vector_mayor.y - 180
        && all->perso->pos_perso.y <= all->game->vector_mayor.y + 180) {
        if (give_daughter_back_mayor(all) == 84)
            return (84);
    }
    if (all->perso->take_potion_from_old_man == 1
        && all->perso->pos_perso.x >= all->game->vector_old_man.x - 140
        && all->perso->pos_perso.x <= all->game->vector_old_man.x + 140
        && all->perso->pos_perso.y >= all->game->vector_old_man.y - 180
        && all->perso->pos_perso.y <= all->game->vector_old_man.y + 180) {
        sfRenderWindow_drawSprite
            (all->window, all->game->sprite_priest_after_potion, NULL);
    }
    if (draw_dialogs_4(all) == 84)
        return (84);
    return (0);
}

int draw_dialogs_2(all_t *all)
{
    if (all->perso->choose_class == false &&
        all->perso->take_potion_from_old_man == 0
        && all->perso->pos_perso.x >= all->game->vector_old_man.x - 140
        && all->perso->pos_perso.x <= all->game->vector_old_man.x + 140
        && all->perso->pos_perso.y >= all->game->vector_old_man.y - 180
        && all->perso->pos_perso.y <= all->game->vector_old_man.y + 180) {
            if (draw_dialogs_bis(all) == 84)
                return (84);
        }
    if (all->perso->gave_potion_to_chief == 1 &&
        all->perso->ask_find_daughter_mayor == 0
        && all->perso->pos_perso.x >= all->game->vector_mayor.x - 140
        && all->perso->pos_perso.x <= all->game->vector_mayor.x + 140
        && all->perso->pos_perso.y >= all->game->vector_mayor.y - 180
        && all->perso->pos_perso.y <= all->game->vector_mayor.y + 180) {
        if (mayor_asking_to_find_her_daughter(all) == 84)
            return (84); }
    if (draw_dialogs_3(all) == 84)
        return (84);
    return (0);
}

int draw_dialogs(all_t *all)
{
    if (all->perso->pos_perso.x >= all->game->vector.x - 140
        && all->perso->pos_perso.x <= all->game->vector.x + 140
        && all->perso->pos_perso.y >= all->game->vector.y - 180
        && all->perso->pos_perso.y <= all->game->vector.y + 180) {
        sfRenderWindow_drawSprite(all->window, all->game->sprite_dialog, NULL);
    }
    if (all->perso->pos_perso.x >= all->game->vector_chief.x - 140
        && all->perso->pos_perso.x <= all->game->vector_chief.x + 140
        && all->perso->pos_perso.y >= all->game->vector_chief.y - 180
        && all->perso->pos_perso.y <= all->game->vector_chief.y + 180) {
        if (all->perso->choose_class == true)
            sfRenderWindow_drawSprite
                (all->window, all->game->sprite_chief_dialog, NULL);
        if (all->perso->take_potion_from_old_man == 1 &&
            all->perso->gave_potion_to_chief == 0) {
            if (dialog_give_potion_to_chief(all) == 84)
                return (84); }
                }
    if (draw_dialogs_2(all) == 84)
        return (84);
    return (0);
}