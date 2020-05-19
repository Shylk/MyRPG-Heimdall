/*
** EPITECH PROJECT, 2019
** loop_in_game
** File description:
** contains all loop game functions
*/

#include <stdbool.h>
#include "include/my.h"

void print_and_change_positions_8(all_t *all)
{
    if (all->perso->press_i_key == 1) {
    sfRenderWindow_drawSprite
        (all->window, all->hud->sprite_inventory, NULL);
    for (int i = 0; all->hud->check_placement_inventory[i] != -1; i++) {
        if (all->hud->check_placement_inventory[i] == POTION)
            sfRenderWindow_drawSprite
                (all->window, all->hud->potion[i], NULL); }
    if (all->game->can_draw_glow_item != NO_MOVE) {
        sfRenderWindow_drawSprite
            (all->window, all->hud->sprite_move_on_item, NULL);
        if (all->game->can_draw_glow_item == POTION) {
            sfVector2f vector_box_potion;
            vector_box_potion.x = 1131;
            vector_box_potion.y = 537;
            sfSprite_setPosition
                (all->hud->sprite_description_potion, vector_box_potion);
            sfRenderWindow_drawSprite
                (all->window, all->hud->sprite_description_potion, NULL); }
    }
    sfRenderWindow_setMouseCursorVisible(all->window, sfTrue); }
}

void print_and_change_positions_7(all_t *all)
{
    if (all->perso->press_s_key == 1) {
        sfRenderWindow_drawSprite
            (all->window, all->hud->sprite_skill_tree, NULL);
        all->game->can_draw_glow_card_skill_tree == 1
        ? sfRenderWindow_drawSprite
            (all->window, all->hud->sprite_glow_skill, NULL) : (0);
        if (all->game->can_draw_no_xp_cursor == 1) {
            sfRenderWindow_drawSprite
                (all->window, all->hud->sprite_no_xp_cursor, NULL);
            sfRenderWindow_setMouseCursorVisible(all->window, sfFalse);
        } else
            sfRenderWindow_setMouseCursorVisible(all->window, sfTrue);
    }
    print_and_change_positions_8(all);
}

void print_and_change_positions_6(all_t *all)
{
    if (all->perso->ask_find_daughter_mayor == 1 && all->game->tmp > 0) {
        sfRenderWindow_drawSprite
            (all->window, all->hud->sprite_100_coins_reward, NULL);
        all->hud->check_placement_inventory[0] = 0;
        all->game->tmp -= 1;
        sfSprite_setTexture
            (all->hud->sprite_quest_log, all->hud->text_quest_log_one, sfTrue);
    }
    if (all->perso->press_m_key == 1) {
        sfRenderWindow_drawSprite(all->window, all->hud->sprite_map, NULL);
        sfRenderWindow_drawSprite
            (all->window, all->hud->sprite_cursor_map, NULL);
        sfRenderWindow_setMouseCursorVisible(all->window, sfTrue);
    }
    if (all->perso->press_q_key == 1) {
        sfRenderWindow_drawSprite
            (all->window, all->hud->sprite_quest_log, NULL);
        sfRenderWindow_setMouseCursorVisible(all->window, sfFalse);
    }
    print_and_change_positions_7(all);
}