/*
** EPITECH PROJECT, 2019
** loop_in_game
** File description:
** contains all loop game functions
*/

#include <stdbool.h>
#include "include/my.h"

void intro(all_t *all)
{
    if (all->intro->rct_intro.left < 14000) {
        if (all->clocker->seconds > 0.12) {
            all->intro->rct_intro.left += all->intro->rct_intro.width;
            sfClock_restart(all->clocker->clock);
        }
    } else {
        if (all->clocker->seconds > 1) {
            all->intro->intro = 1;
            all->menu->menu = 0;
            sfClock_restart(all->clocker->clock);
        }
    }
    sfSprite_setTextureRect(all->intro->spr_intro, all->intro->rct_intro);
    sfRenderWindow_drawSprite(all->window, all->intro->spr_intro, NULL);
}

void name_function(all_t *all)
{
    if (all->script->name != 0) {
        sfRenderWindow_drawText(all->window, all->text->text_name, NULL);
    }
    if (all->script->name == 2) {
        sfRenderWindow_drawText(all->window, all->text->text_choice1, NULL);
        sfRenderWindow_drawText(all->window, all->text->text_choice2, NULL);
    }
}

int check_if_select_a_class(all_t *all)
{
    if (all->perso->pos_perso.x >= all->game->vector_chief.x - 140 &&
        all->perso->pos_perso.x <= all->game->vector_chief.x + 140
        && all->perso->pos_perso.y >= all->game->vector_chief.y - 180 &&
        all->perso->pos_perso.y <= all->game->vector_chief.y + 180) {
        if (all->perso->choose_class == true && all->perso->pos_perso.x >=
            all->game->vector_chief.x + 20
            && all->perso->pos_perso.x <= all->game->vector_chief.x + 85
            && all->perso->pos_perso.y >= all->game->vector_chief.y &&
            all->perso->pos_perso.y <= all->game->vector_chief.y + 5 ) {
            choose_a_class(all);
            return 1;
        }
    }
    return 0;
}

void move_cursor_mini_map(all_t *all, int direction)
{
    if (direction == UP_CURSOR) {
        all->hud->vector_cursor_map.y -= 0.62 + SPRINT_CURSOR;
        sfSprite_setTexture(all->hud->sprite_cursor_map,
        all->hud->text_cursor_map_up, sfTrue);
    }
    if (direction == DOWN_CURSOR) {
        all->hud->vector_cursor_map.y += 0.62 + SPRINT_CURSOR;
        sfSprite_setTexture(all->hud->sprite_cursor_map,
        all->hud->text_cursor_map_down, sfTrue);
    }
    if (direction == LEFT_CURSOR) {
        all->hud->vector_cursor_map.x -= 0.62 + SPRINT_CURSOR;
        sfSprite_setTexture(all->hud->sprite_cursor_map,
        all->hud->text_cursor_map_left, sfTrue);
    }
    if (direction == RIGHT_CURSOR) {
        all->hud->vector_cursor_map.x += 0.62 + SPRINT_CURSOR;
        sfSprite_setTexture(all->hud->sprite_cursor_map,
        all->hud->text_cursor_map_right, sfTrue);
    }
}

void game_small_map(all_t *all)
{
    if (all->clocker->seconds_move >= 0.2 ||
        (all->clocker->seconds_move >= 0.1 && SPRINT != 0)) {
        move_rect_perso(all);
        move_rect_perso_girl(all);}
    all_double_direction(all);
    left_and_right(all);
    up_and_down(all);
    set_draw_pos_perso_and_girl(all);
    if (SPAWN)
        all->map->pos_exit.y = 812;
    if (MOUNTAIN)
        all->map->pos_exit.y = 839;
    if (CAVE)
        all->map->pos_exit.y = 840;
    if (CAVE && all->map->tab != 6)
        sfRenderWindow_drawSprite(all->window, all->map->spr_bord, NULL);
    set_and_draw_sprite_text(all);
    if (MOUNTAIN && all->perso->talk_to_mayor_daughter == 1)
        sfRenderWindow_drawSprite(all->window, all->perso->spr_girl, NULL);
    sfRenderWindow_setMouseCursorVisible(all->window, sfTrue);
}
