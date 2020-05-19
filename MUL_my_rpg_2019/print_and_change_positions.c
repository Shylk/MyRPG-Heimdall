/*
** EPITECH PROJECT, 2019
** loop_in_game
** File description:
** contains all loop game functions
*/

#include <stdbool.h>
#include "include/my.h"

void print_and_change_positions_5(all_t *all)
{
    sfRenderWindow_drawText(all->window, all->text->q_key_for_quest, NULL);
    if (all->perso->choose_class == false) {
        sfRenderWindow_drawSprite(all->window,
        all->hud->sprite_class_logo, NULL);
        sfRenderWindow_drawText(all->window,
        all->text->text_player_class, NULL);
    }
    if (all->perso->take_potion_from_old_man == 1 && all->game->tmp > 0) {
        sfRenderWindow_drawSprite
            (all->window, all->hud->sprite_potion_unlocked, NULL);
        sfSprite_setTexture
            (all->hud->sprite_inventory, all->hud->text_inventory_1, sfTrue);
        all->game->tmp -= 1;
        all->hud->check_placement_inventory[0] = POTION;
    }
    print_and_change_positions_6(all);
}

int print_and_change_positions_4(all_t *all)
{
    sfRenderWindow_drawSprite(all->window, all->hud->sprite_icon_tree, NULL);
    sfRenderWindow_drawSprite(all->window, all->hud->sprite_map_logo, NULL);
    sfRenderWindow_drawSprite(all->window, all->hud->sprite_chest_logo, NULL);
    sfRenderWindow_drawSprite(all->window, all->hud->sprite_heart, NULL);
    sfRenderWindow_drawSprite(all->window, all->hud->sprite_coins, NULL);
    sfRenderWindow_drawSprite(all->window, all->hud->sprite_xp, NULL);
    if (set_string_change_position(all) == 84)
        return (84);
    char *temp = my_itoa(all->perso->pv);
    if (temp == NULL)
        return (84);
    sfText_setString(all->hud->txt_pv, temp);
    sfRenderWindow_drawText(all->window, all->hud->txt_money, NULL);
    sfRenderWindow_drawText(all->window, all->hud->txt_pv, NULL);
    sfRenderWindow_drawText(all->window, all->hud->txt_xp, NULL);
    sfRenderWindow_drawText(all->window, all->text->m_key_for_map, NULL);
    sfRenderWindow_drawText(all->window, all->text->i_key_for_inventory, NULL);
    sfRenderWindow_drawText(all->window, all->text->s_key_for_skill, NULL);
    print_and_change_positions_5(all);
    return (0);
}

int print_and_change_positions_3(all_t *all, sfVector2f tmp_vector)
{
    sfSprite_setPosition(all->hud->sprite_e_to_interact, tmp_vector);
    sfSprite_setPosition(all->map->spr_map, all->map->pos_map);
    sfSprite_setPosition(all->perso->spr_perso, all->perso->pos_perso);
    sfSprite_setPosition(all->perso->spr_girl, all->perso->pos_girl);
    sfRenderWindow_drawSprite(all->window, all->map->spr_map, NULL);
    sfRenderWindow_drawSprite(all->window, all->game->sprite_png, NULL);
    sfRenderWindow_drawSprite(all->window, all->game->sprite_chief, NULL);
    sfRenderWindow_drawSprite(all->window, all->game->sprite_old_man, NULL);
    sfRenderWindow_drawSprite
        (all->window, all->game->sprite_strange_man, NULL);
    sfRenderWindow_drawSprite(all->window, all->game->sprite_dead_body, NULL);
    sfRenderWindow_drawSprite(all->window, all->perso->spr_perso, NULL);
    if (all->perso->talk_to_mayor_daughter == 1)
        sfRenderWindow_drawSprite(all->window, all->perso->spr_girl, NULL);
    if (all->perso->gave_potion_to_chief == 1)
        sfRenderWindow_drawSprite(all->window, all->game->sprite_mayor, NULL);
    sfRenderWindow_drawSprite(all->window, all->game->sprite_tree, NULL);
    sfRenderWindow_drawSprite(all->window, all->hud->sprite_quest_book, NULL);
    if (print_and_change_positions_4(all) == 84)
        return (84);
    return (0);
}

int print_and_change_positions_2(all_t *all, sfVector2f tmp_vector)
{
    tmp_vector = all->game->vector_chief;
    tmp_vector.y -= 90;
    tmp_vector.x -= 40;
    sfSprite_setPosition(all->game->sprite_chief_dialog, tmp_vector);
    tmp_vector.y = all->game->vector_chief.y;
    tmp_vector.x = all->game->vector_chief.x - 400;
    sfSprite_setPosition(all->hud->sprite_enter_shop, tmp_vector);
    tmp_vector = all->game->vector_old_man;
    tmp_vector.y -= 90;
    tmp_vector.x -= 40;
    sfSprite_setPosition(all->game->sprite_priest_after_potion, tmp_vector);
    sfSprite_setPosition(all->hud->sprite_speak_priest_e, tmp_vector);
    tmp_vector = all->game->vector_dead_body;
    tmp_vector.y -= 40;
    print_change_position_2_bis(all, tmp_vector);
    if (print_and_change_positions_3(all, tmp_vector) == 84)
        return (84);
    return (0);
}

int print_and_change_positions(all_t *all)
{
    sfVector2f tmp_vector;
    sfSprite_setTextureRect(all->perso->spr_perso, all->perso->rct_perso);
    sfSprite_setTextureRect(all->perso->spr_girl, all->perso->rct_girl);
    sfSprite_setPosition(all->game->sprite_png, all->game->vector);
    sfSprite_setPosition(all->game->sprite_chief, all->game->vector_chief);
    sfSprite_setPosition(all->game->sprite_old_man, all->game->vector_old_man);
    sfSprite_setPosition(all->game->sprite_mayor, all->game->vector_mayor);
    sfSprite_setPosition
        (all->game->sprite_strange_man, all->game->vector_strange_man);
    sfSprite_setPosition
        (all->hud->sprite_cursor_map, all->hud->vector_cursor_map);
    sfSprite_setPosition
        (all->game->sprite_dead_body, all->game->vector_dead_body);
    sfSprite_setPosition(all->game->sprite_tree, all->game->vector_tree);
    tmp_vector = all->game->vector;
    tmp_vector.y -= 90;
    tmp_vector.x -= 40;
    sfSprite_setPosition(all->game->sprite_dialog, tmp_vector);
    if (print_and_change_positions_2(all, tmp_vector) == 84)
        return (84);
    return (0);
}