/*
** EPITECH PROJECT, 2019
** declare_pos
** File description:
** main
*/

#include "../include/my.h"

void declare_pos_4(all_t *all, sfVector2f vec_tmp)
{
    sfSprite_setPosition(all->hud->sprite_heart, vec_tmp);
    vec_tmp.x += 100;
    sfText_setPosition(all->hud->txt_pv, vec_tmp);
    vec_tmp.x -= 100;
    vec_tmp.y += 100;
    sfSprite_setPosition(all->hud->sprite_coins, vec_tmp);
    vec_tmp.x += 100;
    sfText_setPosition(all->hud->txt_money, vec_tmp);
    vec_tmp.x -= 100;
    vec_tmp.y += 100;
    sfSprite_setPosition(all->hud->sprite_xp, vec_tmp);
    vec_tmp.x += 100;
    sfText_setPosition(all->hud->txt_xp, vec_tmp);
    all->game->vector_old_man.x = -2109;
    all->game->vector_old_man.y = 2332;
    sfSprite_setPosition(all->game->sprite_old_man, all->game->vector_old_man);
    vec_tmp.y = 300;
    vec_tmp.x = 900;
    sfSprite_setPosition(all->hud->sprite_potion_unlocked, vec_tmp);
    declare_pos_5(all, vec_tmp);
}

void declare_key_inventory(all_t *all, sfVector2f *vec_tmp,
sfVector2f vector_icon_tree)
{
    sfVector2f vector;
    sfVector2f scale;

    vector_icon_tree.y = vec_tmp->y;
    vec_tmp->y += 120;
    sfSprite_setPosition(all->hud->sprite_class_logo, *vec_tmp);
    vec_tmp->x = vector_icon_tree.x;
    vec_tmp->y = vector_icon_tree.y;
    sfSprite_setPosition(all->hud->sprite_icon_tree, vector_icon_tree);
    *vec_tmp = all->hud->vector;
    vec_tmp->x += 1650;
    vector.x = 730;
    vector.y = 715;
    scale.x = 0.60;
    scale.y = 0.60;
    sfSprite_setPosition(all->hud->sprite_key_inventory, vector);
    sfSprite_setScale(all->hud->sprite_key_inventory, scale);
}

void declare_pos_3(all_t *all, sfVector2f vec_tmp)
{
    sfVector2f vector_icon_tree;
    vec_tmp.y -= 90;
    sfSprite_setPosition(all->game->sprite_dialog, vec_tmp);
    all->game->vector_chief.x = -819;
    all->game->vector_chief.y = 942;
    sfSprite_setPosition(all->game->sprite_chief, all->game->vector_chief);
    all->hud->vector.x = 50;
    all->hud->vector.y = 50;
    sfSprite_setPosition(all->hud->sprite_quest_book, all->hud->vector);
    vec_tmp = all->hud->vector;
    vec_tmp.y += 100;
    sfSprite_setPosition(all->hud->sprite_map_logo, vec_tmp);
    vec_tmp.y += 100;
    vec_tmp.x -= 10;
    sfSprite_setPosition(all->hud->sprite_chest_logo, vec_tmp);
    vec_tmp.y += 140;
    vec_tmp.x += 10;
    vector_icon_tree.x = vec_tmp.x;
    declare_key_inventory(all, &vec_tmp, vector_icon_tree);
    declare_pos_4(all, vec_tmp);
}

void declare_pos_2(all_t *all)
{
    sfVector2f vec_tmp;
    all->menu->vec_cursor.y = 0;
    all->menu->vec_music.x = 1400;
    all->menu->vec_music.y = 230;
    vec_tmp = all->menu->vec_music;
    vec_tmp.y -= 26;
    sfSprite_setPosition(all->menu->sprite_sounds[0], all->menu->vec_music);
    sfSprite_setPosition(all->menu->sprite_sounds[1], vec_tmp);
    all->menu->vec_sound_effects.x = 1400;
    all->menu->vec_sound_effects.y = 418;
    sfSprite_setPosition(all->menu->sprite_sounds[2],
    all->menu->vec_sound_effects);
    vec_tmp = all->menu->vec_sound_effects;
    vec_tmp.y -= 8;
    sfSprite_setPosition(all->menu->sprite_sounds[3], vec_tmp);
    all->game->vector.x = 491;
    all->game->vector.y = 732;
    sfSprite_setPosition(all->game->sprite_png, all->game->vector);
    vec_tmp = all->game->vector;
    declare_pos_3(all, vec_tmp);
}

void declare_pos(all_t *all)
{
    all->intro->pos_intro.x = 460;
    all->intro->pos_intro.y = 259;
    sfSprite_setPosition(all->intro->spr_intro, all->intro->pos_intro);
    all->map->pos_map.x = 820;
    all->map->pos_map.y = 360;
    sfSprite_setPosition(all->map->spr_map, all->map->pos_map);
    all->map->pos_exit.x = 820;
    all->map->pos_exit.y = 812;
    sfSprite_setPosition(all->map->spr_exit, all->map->pos_exit);
    all->map->pos_bord.x = 610;
    all->map->pos_bord.y = 270;
    sfSprite_setPosition(all->map->spr_bord, all->map->pos_bord);
    all->perso->pos_perso.x = 960;
    all->perso->pos_perso.y = 500;
    sfSprite_setPosition(all->perso->spr_perso, all->perso->pos_perso);
    all->menu->vector.x = 700;
    all->menu->vector.y = 335;
    sfSprite_setPosition(all->menu->sprite_arrow, all->menu->vector);
    all->menu->vec_cursor.x = 0;
    declare_pos_2(all);
}
