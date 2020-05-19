/*
** EPITECH PROJECT, 2019
** declare_sprite
** File description:
** main
*/

#include "../include/my.h"

void declare_sprite_10_bis(all_t *all)
{
    all->hud->text_unvailable = sfTexture_createFromFile(
    "sprite/unvailable.png", NULL);
    sfSprite_setTexture(all->hud->sprite_glow_skill,
    all->hud->text_glow_skill, sfTrue);
    all->hud->sprite_cursor_map = sfSprite_create();
    all->hud->text_cursor_map_up = sfTexture_createFromFile(
        "sprite/cursor_up.png", NULL);
    all->hud->text_cursor_map_down = sfTexture_createFromFile(
        "sprite/cursor_down.png", NULL);
    all->hud->text_cursor_map_left = sfTexture_createFromFile(
        "sprite/cursor_left.png", NULL);
    all->hud->text_cursor_map_right = sfTexture_createFromFile(
        "sprite/cursor_right.png", NULL);
    all->fight->txt_win = sfTexture_createFromFile(
        "sprite/victory_screen.png", NULL);
    all->fight->spr_win = sfSprite_create();
    sfSprite_setTexture(all->fight->spr_win, all->fight->txt_win, sfTrue);
}

void declare_sprite_9_bis(all_t *all)
{
    all->hud->text_quest_log_any = sfTexture_createFromFile(
        "sprite/any_quest_validate.png", NULL);
    all->hud->text_quest_log_one = sfTexture_createFromFile(
        "sprite/first_quest_validate.png", NULL);
    all->hud->text_quest_log_two = sfTexture_createFromFile(
        "sprite/second_quest_validate.png", NULL);
    all->hud->text_quest_log_all = sfTexture_createFromFile(
        "sprite/all_quest_validate.png", NULL);
    sfSprite_setTexture(all->hud->sprite_quest_log,
    all->hud->text_quest_log_any, sfTrue);
    all->hud->sprite_description_potion = sfSprite_create();
    all->hud->text_description_potion = sfTexture_createFromFile(
        "sprite/box_potion.png", NULL);
    sfSprite_setTexture(all->hud->sprite_description_potion,
    all->hud->text_description_potion, sfTrue);
}

void declare_sprite_8_bis(all_t *all)
{
    for (int i = 0; i < 4; i += 1) {
        all->hud->potion[i] = sfSprite_create();
        sfSprite_setTexture(all->hud->potion[i],
        all->hud->text_potion, sfTrue);
    }
    all->hud->sprite_potion_unlocked = sfSprite_create();
}

void declare_sprite_7_bis(all_t *all)
{
    sfSprite_setTexture(all->hud->sprite_no_xp_cursor,
    all->hud->text_no_coins_cursor, sfTrue);
    all->hud->sprite_key_inventory = sfSprite_create();
    all->hud->text_key_inventory = sfTexture_createFromFile(
        "sprite/box_key_inventory.png", NULL);
    sfSprite_setTexture(all->hud->sprite_key_inventory,
    all->hud->text_key_inventory, sfTrue);
    all->hud->sprite_icon_tree = sfSprite_create();
    all->hud->text_icon_tree = sfTexture_createFromFile(
        "sprite/icon_skill_tree.png", NULL);
    sfSprite_setTexture(all->hud->sprite_icon_tree,
    all->hud->text_icon_tree, sfTrue);
    all->hud->sprite_class_logo = sfSprite_create();
    all->hud->sprite_map_logo = sfSprite_create();
    all->hud->text_map_logo = sfTexture_createFromFile(
        "sprite/map_logo.png", NULL);
}
