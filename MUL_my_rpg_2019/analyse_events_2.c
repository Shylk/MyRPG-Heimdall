/*
** EPITECH PROJECT, 2019
** analyse_events
** File description:
** contains all events
*/

#include "include/my.h"

int event_all_menu_menu(all_t *all)
{
    if (all->menu->menu == 1)
        mouvement_event(all);
    if (all->script->name != 0)
        if (player_enter_his_name(all) == 84)
            return (84);
    if (sfKeyboard_isKeyPressed(sfKeySpace) && all->menu->menu == 1)
        all->menu->menu = 5;
    if (all->menu->menu >= 3 && all->menu->menu <= 6)
        combat_event(all);
    if (all->event->event.type == sfEvtClosed)
        sfRenderWindow_close(all->window);
    return (0);
}

int event_inventaire_map_pause_2(all_t *all)
{
    if (all->menu->menu == 1 && all->event->event.type == sfEvtKeyReleased
        && all->event->event.key.code == sfKeyI) {
        if (all->perso->press_i_key == 0)
            all->perso->press_i_key = 1;
        else all->perso->press_i_key = 0;
    }
    if (all->menu->menu == 1 && sfKeyboard_isKeyPressed(sfKeyEscape))
        if (pause_menu(all) == 84)
            return (84);
    return (0);
}
