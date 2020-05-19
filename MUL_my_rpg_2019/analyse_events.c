/*
** EPITECH PROJECT, 2019
** analyse_events
** File description:
** contains all events
*/

#include "include/my.h"

int event_inventaire_map_pause(all_t *all)
{
    if (all->menu->menu == 1 && all->event->event.type == sfEvtKeyReleased
        && all->event->event.key.code == sfKeyM) {
        if (all->perso->press_m_key == 0)
            all->perso->press_m_key = 1;
        else all->perso->press_m_key = 0;
    }
    if (all->menu->menu == 1 && all->event->event.type == sfEvtKeyReleased
        && all->event->event.key.code == sfKeyQ) {
        if (all->perso->press_q_key == 0)
            all->perso->press_q_key = 1;
        else all->perso->press_q_key = 0;
    }
    if (all->menu->menu == 1 && all->event->event.type == sfEvtKeyReleased
        && all->event->event.key.code == sfKeyS) {
        if (all->perso->press_s_key == 0)
            all->perso->press_s_key = 1;
        else all->perso->press_s_key = 0;
    }
    if (event_inventaire_map_pause_2(all) == 84)
        return (84);
    return (0);
}

int analyse_events(all_t *all)
{
    int x = all->perso->pos_perso.x;
    int y = all->perso->pos_perso.y;
    while (sfRenderWindow_pollEvent(all->window, &all->event->event)) {
        skipping_intro(all);
        mouse_clicked(all);
        mouse_moved(all);
        if (event_all_menu_menu(all) == 84)
            return (84);
        if (event_inventaire_map_pause(all) == 84)
            return (84);
        if (SPAWN) {
            if (x >= 1018 && x <= 1071 && y >= 461 && y <= 580
            && sfKeyboard_isKeyPressed(sfKeyE))
                skin_selection(all);
        }
        check_move_on_item(all);
        check_move_on_card_tree(all);
    }
    return (0);
}

void mouse_clicked(all_t *all)
{
    if (all->event->event.type == sfEvtMouseButtonReleased) {
        all->event->x = all->event->event.mouseButton.x;
        all->event->y = all->event->event.mouseButton.y;
        if (all->menu->menu >= 3 && all->menu->menu <= 6
        && all->fight->died == 1)
            end_screen_event(all);
        if (all->menu->menu == 6 && all->fight->died == 2)
            win_screen_event(all);
    }
}

void mouse_moved(all_t *all)
{
    if (all->event->event.type == sfEvtMouseMoved) {
        all->event->x = all->event->event.mouseMove.x;
        all->event->y = all->event->event.mouseMove.y;
    }
}
