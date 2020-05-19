/*
** EPITECH PROJECT, 2020
** declare
** File description:
** structure
*/

#include "../include/my.h"

int declare_struct_3(all_t *all)
{
    all->menu = malloc(sizeof(menu_t));
    if (all->menu == NULL)
        return (84);
    all->map = malloc(sizeof(map_t));
    if (all->map == NULL)
        return (84);
    all->perso = malloc(sizeof(perso_t));
    if (all->perso == NULL)
        return (84);
    all->shop = malloc(sizeof(shop_t));
    if (all->shop == NULL)
        return (84);
    all->pause = malloc(sizeof(pause_t));
    if (all->pause == NULL)
        return (84);
    all->stat = malloc(sizeof(player_stat_t));
    if (all->stat == NULL)
        return (84);
    return (0);
}

int declare_struct_2(all_t *all)
{
    all->list = malloc(sizeof(list_t));
    if (all->list == NULL)
        return (84);
    all->music = malloc(sizeof(music_t));
    if (all->music == NULL)
        return (84);
    all->fight = malloc(sizeof(fight_t));
    if (all->fight == NULL)
        return (84);
    all->text = malloc(sizeof(text_t));
    if (all->text == NULL)
        return (84);
    all->script = malloc(sizeof(script_t));
    if (all->script == NULL)
        return (84);
    if (declare_struct_3(all) == 84)
        return (84);
    return (0);
}

int declare_struct(all_t *all)
{
    all->intro = malloc(sizeof(intro_t));
    if (all->intro == NULL)
        return (84);
    all->cursor = malloc(sizeof(cursor_t));
    if (all->cursor == NULL)
        return (84);
    all->event = malloc(sizeof(event_t));
    if (all->event == NULL)
        return (84);
    all->clocker = malloc(sizeof(clocker_t));
    if (all->clocker == NULL)
        return (84);
    all->game = malloc(sizeof(game_t));
    if (all->game == NULL)
        return (84);
    all->hud = malloc(sizeof(hud_t));
    if (all->hud == NULL)
        return (84);
    if (declare_struct_2(all) == 84)
        return (84);
    return (0);
}
