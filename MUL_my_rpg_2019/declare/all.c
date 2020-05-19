/*
** EPITECH PROJECT, 2019
** declare_all
** File description:
** main
*/

#include <stdbool.h>
#include "../include/my.h"

int declare_value(all_t *all)
{
    if (declare_struct(all) == 84)
        return (84);
    if (declare_int(all) == 84)
        return (84);
    declare_clock(all);
    declare_texture(all);
    if (declare_sprite(all) == 84)
        return (84);
    if (declare_text(all) == 84)
        return (84);
    declare_pos(all);
    declare_rect(all);
    declare_origin(all);
    declare_music(all);
    return (0);
}

int init_check_placement_inventory_tab(all_t *all)
{
    int i = 0;

    all->hud->check_placement_inventory = malloc(sizeof(int) * (4 + 1));
    if (all->hud->check_placement_inventory == NULL)
        return (84);
    for (; i < 4; i++)
        all->hud->check_placement_inventory[i] = 0;
    all->hud->check_placement_inventory[i] = -1;
    return (0);
}

void declare_clock(all_t *all)
{
    all->clocker->clock = sfClock_create();
    all->clocker->clock_move = sfClock_create();
    all->menu->clock = sfClock_create();
    all->clocker->clock_fight = sfClock_create();
}
