/*
** EPITECH PROJECT, 2019
** declare_sprite
** File description:
** main
*/

#include "../include/my.h"

void declare_sprite_10(all_t *all)
{
    all->hud->sprite_map = sfSprite_create();
    all->hud->text_map = sfTexture_createFromFile(
        "sprite/in_game_map_test.png", NULL);
    sfSprite_setTexture(all->hud->sprite_map, all->hud->text_map, sfTrue);
    all->hud->sprite_skill_tree = sfSprite_create();
    all->hud->text_skill_tree = sfTexture_createFromFile(
        "sprite/skill_tree.png", NULL);
    sfSprite_setTexture(all->hud->sprite_skill_tree,
    all->hud->text_skill_tree, sfTrue);
    all->hud->sprite_move_on_item = sfSprite_create();
    all->hud->text_move_on_item = sfTexture_createFromFile(
        "sprite/move_on_item_inventory.png", NULL);
    sfSprite_setTexture(all->hud->sprite_move_on_item,
    all->hud->text_move_on_item, sfTrue);
    all->hud->sprite_glow_skill = sfSprite_create();
    all->hud->text_glow_skill = sfTexture_createFromFile(
        "sprite/glow_skill_tree.png", NULL);
    declare_sprite_10_bis(all);
    declare_sprite_11(all);
}

void declare_sprite_9(all_t *all)
{
    all->hud->text_potion_unlocked = sfTexture_createFromFile(
        "sprite/unlocked_potion.png", NULL);
    sfSprite_setTexture(all->hud->sprite_potion_unlocked,
    all->hud->text_potion_unlocked, sfTrue);
    all->hud->sprite_100_coins_reward = sfSprite_create();
    all->hud->texture_100_coins_reward = sfTexture_createFromFile(
        "sprite/100_coins_reward.png", NULL);
    sfSprite_setTexture(all->hud->sprite_100_coins_reward,
    all->hud->texture_100_coins_reward, sfTrue);
    all->hud->sprite_inventory = sfSprite_create();
    all->hud->text_inventory = sfTexture_createFromFile(
        "sprite/inventory.png", NULL);
    all->hud->text_inventory_1 = sfTexture_createFromFile(
        "sprite/inventory_1.png", NULL);
    sfSprite_setTexture(all->hud->sprite_inventory,
    all->hud->text_inventory, sfTrue);
    all->hud->sprite_quest_log = sfSprite_create();
    declare_sprite_9_bis(all);
    declare_sprite_10(all);
}

void declare_sprite_8(all_t *all)
{
    sfSprite_setTexture(all->hud->sprite_map_logo,
    all->hud->text_map_logo, sfTrue);
    all->hud->sprite_chest_logo = sfSprite_create();
    all->hud->text_chest_logo = sfTexture_createFromFile(
        "sprite/chest.png", NULL);
    sfSprite_setTexture(all->hud->sprite_chest_logo,
    all->hud->text_chest_logo, sfTrue);
    all->hud->sprite_heart = sfSprite_create();
    all->hud->text_heart = sfTexture_createFromFile("sprite/heart.png", NULL);
    sfSprite_setTexture(all->hud->sprite_heart, all->hud->text_heart, sfTrue);
    all->hud->sprite_coins = sfSprite_create();
    all->hud->text_coins = sfTexture_createFromFile("sprite/coins.png", NULL);
    sfSprite_setTexture(all->hud->sprite_coins, all->hud->text_coins, sfTrue);
    all->hud->text_potion = sfTexture_createFromFile(
        "sprite/potion.png", NULL);
    declare_sprite_8_bis(all);
    declare_sprite_9(all);
}

void declare_sprite_7(all_t *all)
{
    sfSprite_setTexture(all->game->sprite_old_man,
    all->game->text_old_man, sfTrue);
    sfSprite_setTexture(all->game->sprite_chief_dialog,
    all->game->text_chief_dialog, sfTrue);
    sfSprite_setTexture(all->game->sprite_priest_after_potion,
    all->game->text_priest_after_potion, sfTrue);
    sfSprite_setTexture(all->game->sprite_mayor,
    all->game->text_mayor, sfTrue);
    sfSprite_setTexture(all->game->sprite_strange_man,
    all->game->text_strange_man, sfTrue);
    all->hud->sprite_quest_book = sfSprite_create();
    all->hud->text_quest_book = sfTexture_createFromFile(
        "sprite/quest_book.png", NULL);
    sfSprite_setTexture(all->hud->sprite_quest_book,
    all->hud->text_quest_book, sfTrue);
    all->hud->sprite_no_xp_cursor = sfSprite_create();
    all->hud->text_no_coins_cursor = sfTexture_createFromFile(
        "sprite/no_xp_cursor.png", NULL);
    declare_sprite_7_bis(all);
    declare_sprite_8(all);
}

void declare_sprite_6(all_t *all)
{
    all->game->text_chief = sfTexture_createFromFile(
        "sprite/chief.png", NULL);
    all->game->text_old_man = sfTexture_createFromFile(
        "sprite/old_man.png", NULL);
    all->game->text_chief_dialog = sfTexture_createFromFile(
        "sprite/chief_dialog.png", NULL);
    all->game->text_priest_after_potion = sfTexture_createFromFile(
        "sprite/priest_after_potion.png", NULL);
    all->game->text_mayor = sfTexture_createFromFile(
        "sprite/mayor.png", NULL);
    sfSprite_setTexture(all->game->sprite_little_girl,
    all->game->text_little_girl, sfTrue);
    sfSprite_setTexture(all->game->sprite_skin_selection,
    all->game->text_skin_selection, sfTrue);
    sfSprite_setTexture(all->game->sprite_png, all->game->text_png, sfTrue);
    sfSprite_setTexture(all->game->sprite_dialog,
    all->game->text_dialog, sfTrue);
    sfSprite_setTexture(all->game->sprite_chief,
    all->game->text_chief, sfTrue);
    declare_sprite_7(all);
}