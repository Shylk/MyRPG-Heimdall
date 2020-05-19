/*
** EPITECH PROJECT, 2020
** game
** File description:
** small map
*/

#include "include/my.h"

void all_double_direction(all_t *all)
{
    if (LEFT == 1 && RIGHT == 1) {
        LEFT = 0;
        RIGHT = 0;
        sfSprite_setTexture
            (all->perso->spr_perso, all->perso->txt_perso[3], sfTrue);
        sfSprite_setTexture
            (all->perso->spr_girl, all->perso->txt_girl[3], sfTrue);
    }
    if (UP == 1 && DOWN == 1) {
        UP = 0;
        DOWN = 0;
        sfSprite_setTexture
            (all->perso->spr_perso, all->perso->txt_perso[3], sfTrue);
        sfSprite_setTexture
            (all->perso->spr_girl, all->perso->txt_girl[3], sfTrue);
    }
}

void left_and_right(all_t *all)
{
    if (LEFT == 1 && check_left(all) == 0) {
        all->perso->pos_perso.x -= 3 + SPRINT;
        all->perso->pos_girl.x -= 3 + SPRINT;
        X -= 3 + SPRINT;
        sfSprite_setTexture
            (all->perso->spr_perso, all->perso->txt_perso[0], sfTrue);
        sfSprite_setTexture
            (all->perso->spr_girl, all->perso->txt_girl[0], sfTrue);
    }
    if (RIGHT == 1 && check_right(all) == 0) {
        all->perso->pos_perso.x += 3 + SPRINT;
        all->perso->pos_girl.x += 3 + SPRINT;
        X += 3 + SPRINT;
        sfSprite_setTexture
            (all->perso->spr_perso, all->perso->txt_perso[1], sfTrue);
        sfSprite_setTexture
            (all->perso->spr_girl, all->perso->txt_girl[1], sfTrue);
    }
}

void up_and_down(all_t *all)
{
    if (UP == 1 && check_up(all) == 0) {
        all->perso->pos_perso.y -= 3 + SPRINT;
        all->perso->pos_girl.y -= 3 + SPRINT;
        Y -= 3 + SPRINT;
        sfSprite_setTexture
            (all->perso->spr_perso, all->perso->txt_perso[2], sfTrue);
        sfSprite_setTexture
            (all->perso->spr_girl, all->perso->txt_girl[2], sfTrue);
    }
    if (DOWN == 1 && check_down(all) == 0) {
        all->perso->pos_perso.y += 3 + SPRINT;
        all->perso->pos_girl.y += 3 + SPRINT;
        Y += 3 + SPRINT;
        sfSprite_setTexture
            (all->perso->spr_perso, all->perso->txt_perso[3], sfTrue);
        sfSprite_setTexture
            (all->perso->spr_girl, all->perso->txt_girl[3], sfTrue);
    }
}

void set_draw_pos_perso_and_girl(all_t *all)
{
    sfSprite_setTextureRect(all->perso->spr_perso, all->perso->rct_perso);
    sfSprite_setTextureRect(all->perso->spr_girl, all->perso->rct_girl);
    sfSprite_setPosition(all->perso->spr_perso, all->perso->pos_perso);
    sfSprite_setPosition(all->perso->spr_girl, all->perso->pos_girl);
    sfRenderWindow_drawSprite(all->window, all->map->spr_map, NULL);
    sfRenderWindow_drawSprite(all->window, all->perso->spr_perso, NULL);
    if (all->map->tab == 6 && all->perso->mayor_ask_kill_boss == 1) {
        sfRenderWindow_drawSprite(all->window,
        all->game->sprite_minotaur, NULL);
        if (all->perso->pos_perso.x >= all->game->vector_minotaur.x - 500
        && all->perso->pos_perso.x <= all->game->vector_minotaur.x + 400
        && all->perso->pos_perso.y >= all->game->vector_minotaur.y - 300
        && all->perso->pos_perso.y <= all->game->vector_minotaur.y + 200) {
            all->menu->menu = 6;
        }
    }
}

void set_and_draw_sprite_text(all_t *all)
{
    sfSprite_setPosition(all->map->spr_exit, all->map->pos_exit);
    sfRenderWindow_drawSprite(all->window, all->map->spr_exit, NULL);
    sfRenderWindow_drawSprite(all->window, all->hud->sprite_quest_book, NULL);
    sfRenderWindow_drawSprite(all->window, all->hud->sprite_map_logo, NULL);
    sfRenderWindow_drawSprite(all->window, all->hud->sprite_icon_tree, NULL);
    sfRenderWindow_drawSprite(all->window, all->hud->sprite_chest_logo, NULL);
    sfRenderWindow_drawSprite(all->window, all->hud->sprite_heart, NULL);
    sfRenderWindow_drawSprite(all->window, all->hud->sprite_coins, NULL);
    sfRenderWindow_drawSprite(all->window, all->hud->sprite_xp, NULL);
    sfRenderWindow_drawText(all->window, all->hud->txt_money, NULL);
    sfRenderWindow_drawText(all->window, all->hud->txt_pv, NULL);
    sfRenderWindow_drawText(all->window, all->hud->txt_xp, NULL);
    sfRenderWindow_drawText(all->window, all->text->i_key_for_inventory, NULL);
    sfRenderWindow_drawText(all->window, all->text->s_key_for_skill, NULL);
    sfRenderWindow_drawText(all->window, all->text->m_key_for_map, NULL);
    sfRenderWindow_drawText(all->window, all->text->q_key_for_quest, NULL);
    if (MOUNTAIN && all->perso->talk_to_mayor_daughter == 0
    && all->perso->ask_find_daughter_mayor == 1)
        sfRenderWindow_drawSprite
            (all->window, all->game->sprite_little_girl, NULL);
}
