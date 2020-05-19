/*
** EPITECH PROJECT, 2019
** cursor
** File description:
** main
*/

#include "include/my.h"

void move_cursor(all_t *all)
{
    if (all->event->event.type == sfEvtMouseMoved) {
        all->event->x = all->event->event.mouseMove.x;
        all->event->y = all->event->event.mouseMove.y;
    }
}
