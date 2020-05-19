/*
** EPITECH PROJECT, 2019
** declare_pos
** File description:
** main
*/

#include "../include/my.h"

void declare_pos_9(all_t *all)
{
    sfSprite_setPosition(all->game->sprite_tree, all->game->vector_tree);
    all->game->vector_minotaur.x = 1000;
    all->game->vector_minotaur.y = 400;
    sfSprite_setPosition(all->game->sprite_minotaur,
    all->game->vector_minotaur);
}

void declare_pos_8(all_t *all)
{
    sfSprite_setPosition(all->fight->sprite_gobelin, all->fight->pos_gobelin);
    sfSprite_setPosition(all->fight->sprite_perso, all->fight->pos_perso);
    sfSprite_setPosition(all->fight->sprite_flee, all->fight->pos_flee);
    sfSprite_setPosition(all->fight->sprite_select_flee,
    all->fight->pos_select_flee);
    sfSprite_setPosition(all->fight->sprite_gobelin2,
    all->fight->pos_gobelin2);
    sfSprite_setPosition(all->fight->sprite_select_enemie,
    all->fight->pos_select_enemie);
    sfSprite_setPosition(all->fight->sprite_girl, all->fight->pos_girl);
    all->shop->vector_confirm.x = 0;
    all->shop->vector_confirm.y = 406;
    sfSprite_setPosition(all->shop->sprite_confirm, all->shop->vector_confirm);
    all->game->vector_dead_body.x = all->game->vector_strange_man.x + 2700;
    all->game->vector_dead_body.y = all->game->vector_strange_man.y - 900;
    sfSprite_setPosition(all->game->sprite_dead_body,
    all->game->vector_dead_body);
    all->game->vector_tree.x = -1565;
    all->game->vector_tree.y = 1523;
    declare_pos_9(all);
}

void declare_pos_7(all_t *all)
{
    all->perso->pos_girl.y = 570;
    sfSprite_setPosition(all->game->sprite_little_girl, all->perso->pos_girl);
    sfSprite_setPosition(all->perso->spr_girl, all->perso->pos_girl);
    all->fight->pos_select.x = 727;
    all->fight->pos_select.y = 953;
    all->fight->pos_gobelin.x = 1316;
    all->fight->pos_gobelin.y = 345;
    all->fight->pos_gobelin2.x = 1316;
    all->fight->pos_gobelin2.y = 600;
    all->fight->pos_perso.x = 610;
    all->fight->pos_perso.y = 330;
    all->fight->pos_girl.x = 610;
    all->fight->pos_girl.y = 640;
    all->fight->pos_flee.x = 560;
    all->fight->pos_flee.y = 400;
    all->fight->pos_select_flee.x = 880;
    all->fight->pos_select_flee.y = 520;
    all->fight->pos_select_enemie.x = all->fight->pos_gobelin.x - 30;
    all->fight->pos_select_enemie.y = all->fight->pos_gobelin.y + 10;
    declare_pos_8(all);
}

void declare_pos_6(all_t *all, sfVector2f vec_tmp)
{
    sfVector2f scale_potion;
    sfVector2f vector_potion;
    scale_potion.x = 2;
    scale_potion.y = 2;
    for (int i = 0; i < 4; i += 1) {
        i == 0 ? vector_potion.x = 633, vector_potion.y = 390 : i == 1
        ? vector_potion.x = 807, vector_potion.y = 390 : i == 2
        ? vector_potion.x = 633, vector_potion.y = 559 : i == 3
        ? vector_potion.x = 807, vector_potion.y = 559 : 0;
        sfSprite_setPosition(all->hud->potion[i], vector_potion);
        sfSprite_setScale(all->hud->potion[i], scale_potion);
    }
    vec_tmp.x = 930;
    vec_tmp.y = 300;
    sfSprite_setPosition(all->hud->sprite_skin_dialog, vec_tmp);
    vec_tmp.y = all->game->vector_chief.y;
    vec_tmp.x -= all->game->vector_chief.x - 400;
    sfSprite_setPosition(all->hud->sprite_enter_shop, vec_tmp);
    all->perso->pos_girl.x = 850;
    declare_pos_7(all);
}

void declare_pos_5(all_t *all, sfVector2f vec_tmp)
{
    sfSprite_setPosition(all->hud->sprite_100_coins_reward, vec_tmp);
    vec_tmp = all->game->vector_old_man;
    vec_tmp.y -= 90;
    sfSprite_setPosition(all->game->sprite_priest_after_potion, vec_tmp);
    all->game->vector_mayor.x = -989;
    all->game->vector_mayor.y = 1482;
    sfSprite_setPosition(all->game->sprite_mayor, all->game->vector_mayor);
    all->game->vector_strange_man = all->game->vector_old_man;
    all->game->vector_strange_man.x += 2100;
    all->game->vector_strange_man.y -= 115;
    sfSprite_setPosition(all->game->sprite_strange_man,
    all->game->vector_strange_man);
    all->hud->vector_cursor_map.x = 1028;
    all->hud->vector_cursor_map.y = 294;
    sfSprite_setPosition(all->hud->sprite_cursor_map,
    all->hud->vector_cursor_map);
    declare_pos_6(all, vec_tmp);
}
