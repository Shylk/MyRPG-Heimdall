/*
** EPITECH PROJECT, 2020
** check
** File description:
** check
*/

#include "include/my.h"

void delete_or_use_item(all_t *all, int i)
{
    if (all->event->event.type == sfEvtKeyReleased
    && all->event->event.key.code == sfKeyEnter
    && all->hud->check_placement_inventory[i] == POTION) {
        all->hud->check_placement_inventory[i] = 0;
        all->perso->pv += 70;
        all->perso->pv > all->perso->tmp_pv
        ? all->perso->pv = all->perso->tmp_pv : (0);
    }
    if (all->event->event.type == sfEvtKeyReleased
    && all->event->event.key.code == sfKeyD) {
        all->hud->check_placement_inventory[i] = 0;
    }
}

int check_case_1_inventory
(all_t *all, sfVector2f vector_move_on_item_inventory)
{
    if (all->event->y >= 311 && all->event->y <= 471 &&
        all->event->x >= 559 && all->event->x <= 714) {
            delete_or_use_item(all, 0);
            vector_move_on_item_inventory.x = 637;
            vector_move_on_item_inventory.y = 392;
            sfSprite_setPosition(all->hud->sprite_move_on_item,
            vector_move_on_item_inventory);
            all->game->can_draw_glow_item =
            all->hud->check_placement_inventory[0];
            return 1;
    }
    return 0;
}

int check_case_2_inventory
(all_t *all, sfVector2f vector_move_on_item_inventory)
{
    if (all->event->y >= 311 && all->event->y <= 471 &&
        all->event->x >= 732 && all->event->x <= 887) {
            delete_or_use_item(all, 1);
            vector_move_on_item_inventory.x = 810;
            vector_move_on_item_inventory.y = 391;
            sfSprite_setPosition(all->hud->sprite_move_on_item,
            vector_move_on_item_inventory);
            all->game->can_draw_glow_item =
            all->hud->check_placement_inventory[1];
            return 1;
    }
    return 0;
}

int check_case_3_inventory
(all_t *all, sfVector2f vector_move_on_item_inventory)
{
    if (all->event->y >= 483 && all->event->y <= 641 &&
        all->event->x >= 559 && all->event->x <= 714) {
            delete_or_use_item(all, 2);
            vector_move_on_item_inventory.x = 637;
            vector_move_on_item_inventory.y = 561;
            sfSprite_setPosition(all->hud->sprite_move_on_item,
            vector_move_on_item_inventory);
            all->game->can_draw_glow_item =
            all->hud->check_placement_inventory[2];
            return 1;
    }
    return 0;
}

int check_case_4_inventory
(all_t *all, sfVector2f vector_move_on_item_inventory)
{
    if (all->event->y >= 483 && all->event->y <= 641 &&
        all->event->x >= 732 && all->event->x <= 887) {
            delete_or_use_item(all, 3);
            vector_move_on_item_inventory.x = 810;
            vector_move_on_item_inventory.y = 561;
            sfSprite_setPosition(all->hud->sprite_move_on_item,
            vector_move_on_item_inventory);
            all->game->can_draw_glow_item =
            all->hud->check_placement_inventory[3];
            return 1;
    }
    return 0;
}