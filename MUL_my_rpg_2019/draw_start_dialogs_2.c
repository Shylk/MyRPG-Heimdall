/*
** EPITECH PROJECT, 2019
** menu_managment
** File description:
** main
*/

#include <stdbool.h>
#include "include/my.h"

int draw_dialogs_7(all_t *all)
{
    if (all->perso->gave_potion_to_chief == 1 &&
        all->perso->pos_perso.x >= all->game->vector_chief.x - 400
        && all->perso->pos_perso.x <= all->game->vector_chief.x - 100
        && all->perso->pos_perso.y >= all->game->vector_chief.y + 50
        && all->perso->pos_perso.y <= all->game->vector_chief.y + 350) {
        sfRenderWindow_drawSprite(all->window,
        all->hud->sprite_enter_shop, NULL);
        if (sfKeyboard_isKeyPressed(sfKeyE))
            if (shop(all) == 84)
                return (84);
    }
    return (0);
}

int draw_dialogs_6(all_t *all)
{
    if (all->perso->get_benediction == 0
        && all->perso->pos_perso.x >= all->game->vector_strange_man.x + 2700
        && all->perso->pos_perso.x <= all->game->vector_strange_man.x + 3500
        && all->perso->pos_perso.y >= all->game->vector_strange_man.y + 400
        && all->perso->pos_perso.y <= all->game->vector_strange_man.y + 600)
        if (god_benediction_dialog(all) == 84)
            return (84);
    if (all->perso->pos_perso.x >= all->game->vector_dead_body.x - 200
        && all->perso->pos_perso.x <= all->game->vector_dead_body.x + 200
        && all->perso->pos_perso.y >= all->game->vector_dead_body.y - 160
        && all->perso->pos_perso.y <= all->game->vector_dead_body.y + 160) {
        sfRenderWindow_drawSprite(all->window,
        all->hud->sprite_e_to_interact, NULL);
        if (sfKeyboard_isKeyPressed(sfKeyE))
            if (dead_body_dialog(all) == 84)
                return (84);
    }
    if (draw_dialogs_7(all) == 84)
        return (84);
    return (0);
}

int draw_dialogs_bis(all_t *all)
{
    sfRenderWindow_drawSprite
            (all->window, all->hud->sprite_speak_priest_e, NULL);
    if (sfKeyboard_isKeyPressed(sfKeyE))
        if (old_man_dialog(all) == 84)
            return (84);
    if (all->perso->take_potion_from_old_man == 1)
        sfMusic_play(all->music->achievement);
    return (0);
}
