/*
** EPITECH PROJECT, 2019
** declare_sprite
** File description:
** main
*/

#include "../include/my.h"

void declare_sprite_15(all_t *all)
{
    all->shop->text_wallpaper = sfTexture_createFromFile(
        "sprite/shop.png", NULL);
    sfSprite_setTexture(all->shop->sprite_wallapaper,
    all->shop->text_wallpaper, sfTrue);
    sfSprite_setTexture(all->shop->sprite_confirm,
    all->shop->text_confirm, sfTrue);
    all->pause->sprite = sfSprite_create();
    all->pause->sprite_stats = sfSprite_create();
    all->pause->sprite_bestiary_goblin = sfSprite_create();
    all->pause->sprite_bestiary_bluebob = sfSprite_create();
    all->pause->sprite_bestiary_minotaur = sfSprite_create();
    all->pause->texture = sfTexture_createFromFile(
        "sprite/pause_wallpaper.png", NULL);
    all->pause->text_stats = sfTexture_createFromFile(
        "sprite/stats.png", NULL);
    all->pause->text_bestiary_goblin = sfTexture_createFromFile(
        "sprite/bestiary_goblin.jpg", NULL);
    all->pause->text_bestiary_bluebob = sfTexture_createFromFile(
        "sprite/bestiary_bluebob.jpg", NULL);
    declare_sprite_16(all);
}

void declare_sprite_14(all_t *all)
{
    all->fight->sprite_select_enemie = sfSprite_create();
    sfSprite_setTexture(all->fight->sprite_select_enemie,
    all->fight->text_select, sfTrue);
    all->fight->sprite_hp_enemie2 = sfSprite_create();
    sfSprite_setTexture(all->fight->sprite_hp_enemie2,
    all->fight->text_hp_enemie2, sfTrue);
    all->fight->sprite_shield = sfSprite_create();
    sfSprite_setTexture(all->fight->sprite_shield,
    all->fight->text_shield, sfTrue);
    all->fight->sprite_girl = sfSprite_create();
    sfSprite_setTexture(all->fight->sprite_girl,
    all->fight->text_girl, sfTrue);
    all->fight->sprite_hp_girl = sfSprite_create();
    sfSprite_setTexture(all->fight->sprite_hp_girl,
    all->fight->text_hp_girl, sfTrue);
    all->shop->sprite_confirm = sfSprite_create();
    all->shop->sprite_wallapaper = sfSprite_create();
    all->shop->text_confirm = sfTexture_createFromFile(
        "sprite/shop_confirm.png", NULL);
    declare_sprite_15(all);
}

void declare_sprite_13(all_t *all)
{
    sfSprite_setTexture(all->fight->sprite_perso,
    all->fight->text_perso, sfTrue);
    all->fight->sprite_flee = sfSprite_create();
    sfSprite_setTexture(all->fight->sprite_flee,
    all->fight->text_flee, sfTrue);
    all->fight->sprite_select_flee = sfSprite_create();
    sfSprite_setTexture(all->fight->sprite_select_flee,
    all->fight->text_select, sfTrue);
    all->fight->sprite_hp = sfSprite_create();
    sfSprite_setTexture(all->fight->sprite_hp, all->fight->text_hp, sfTrue);
    all->fight->sprite_hp_enemie = sfSprite_create();
    sfSprite_setTexture(all->fight->sprite_hp_enemie,
    all->fight->text_hp_enemie, sfTrue);
    all->fight->sprite_slash = sfSprite_create();
    sfSprite_setTexture(all->fight->sprite_slash,
    all->fight->text_slash, sfTrue);
    all->fight->sprite_gobelin2 = sfSprite_create();
    sfSprite_setTexture(all->fight->sprite_gobelin2,
    all->fight->text_gobelin, sfTrue);
    declare_sprite_14(all);
}

void declare_sprite_12(all_t *all)
{
    sfSprite_setTexture(all->hud->sprite_speak_priest_e,
    all->hud->text_speak_priest_e, sfTrue);
    all->hud->sprite_not_that_way = sfSprite_create();
    all->hud->text_not_that_way = sfTexture_createFromFile(
        "sprite/dont_go_that_way.png", NULL);
    sfSprite_setTexture(all->hud->sprite_not_that_way,
    all->hud->text_not_that_way, sfTrue);
    all->fight->sprite_fight = sfSprite_create();
    sfSprite_setTexture(all->fight->sprite_fight,
    all->fight->text_fight, sfTrue);
    all->fight->sprite_select = sfSprite_create();
    sfSprite_setTexture(all->fight->sprite_select,
    all->fight->text_select, sfTrue);
    all->fight->sprite_gobelin = sfSprite_create();
    sfSprite_setTexture(all->fight->sprite_gobelin,
    all->fight->text_gobelin, sfTrue);
    all->fight->sprite_perso = sfSprite_create();
    declare_sprite_13(all);
}

void declare_sprite_11(all_t *all)
{
    sfSprite_setTexture(all->hud->sprite_cursor_map,
    all->hud->text_cursor_map_down, sfTrue);
    all->hud->sprite_xp = sfSprite_create();
    all->hud->text_xp = sfTexture_createFromFile("sprite/xp.png", NULL);
    sfSprite_setTexture(all->hud->sprite_xp, all->hud->text_xp, sfTrue);
    all->hud->sprite_skin_dialog = sfSprite_create();
    all->hud->text_skin_dialog = sfTexture_createFromFile(
        "sprite/change_skin_dialog.png", NULL);
    sfSprite_setTexture(all->hud->sprite_skin_dialog,
    all->hud->text_skin_dialog, sfTrue);
    all->hud->sprite_enter_shop = sfSprite_create();
    all->hud->text_enter_shop = sfTexture_createFromFile(
        "sprite/enter_shop_dialog.png", NULL);
    sfSprite_setTexture(all->hud->sprite_enter_shop,
    all->hud->text_enter_shop, sfTrue);
    all->hud->sprite_speak_priest_e = sfSprite_create();
    all->hud->text_speak_priest_e = sfTexture_createFromFile(
        "sprite/e_to_speak_priest.png", NULL);
    declare_sprite_12(all);
}