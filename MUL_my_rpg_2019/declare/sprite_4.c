/*
** EPITECH PROJECT, 2019
** declare_sprite
** File description:
** main
*/

#include "../include/my.h"

void declare_sprite_18(all_t *all)
{
    all->fight->spr_end = sfSprite_create();
    sfSprite_setTexture(all->fight->spr_end, all->fight->txt_end, sfTrue);
    all->game->sprite_tree = sfSprite_create();
    sfSprite_setTexture(all->game->sprite_tree, all->game->text_tree, sfTrue);
    all->game->sprite_minotaur = sfSprite_create();
    all->game->text_minotaur = sfTexture_createFromFile(
        "sprite/the_boss.png", NULL);
    sfSprite_setTexture(all->game->sprite_minotaur,
    all->game->text_minotaur, sfTrue);
}

void declare_sprite_17(all_t *all)
{
    all->menu->sprite_how_to_play = sfSprite_create();
    all->menu->txt_how_to_play = sfTexture_createFromFile(
        "sprite/howto_play_1.jpg", NULL);
    sfSprite_setTexture(all->menu->sprite_how_to_play,
    all->menu->txt_how_to_play, sfTrue);
    all->game->sprite_dead_body = sfSprite_create();
    all->game->text_dead_body = sfTexture_createFromFile(
        "sprite/dead_body.png", NULL);
    sfSprite_setTexture(all->game->sprite_dead_body,
    all->game->text_dead_body, sfTrue);
    all->game->sprite_dead_body_dialog = sfSprite_create();
    all->game->text_dead_body_dialog = sfTexture_createFromFile(
        "sprite/dead_body_dialog.png", NULL);
    sfSprite_setTexture(all->game->sprite_dead_body_dialog,
    all->game->text_dead_body_dialog, sfTrue);
    all->hud->sprite_e_to_interact = sfSprite_create();
    all->hud->text_e_to_interact = sfTexture_createFromFile(
        "sprite/e_to_interact.png", NULL);
    sfSprite_setTexture(all->hud->sprite_e_to_interact,
    all->hud->text_e_to_interact, sfTrue);
    declare_sprite_18(all);
}

void declare_sprite_16(all_t *all)
{
    all->pause->text_bestiary_minotaur = sfTexture_createFromFile(
        "sprite/bestiary_minotaur.jpg", NULL);
    sfSprite_setTexture(all->pause->sprite, all->pause->texture, sfTrue);
    sfSprite_setTexture(all->pause->sprite_stats,
    all->pause->text_stats, sfTrue);
    sfSprite_setTexture(all->pause->sprite_bestiary_goblin,
    all->pause->text_bestiary_goblin, sfTrue);
    sfSprite_setTexture(all->pause->sprite_bestiary_bluebob,
    all->pause->text_bestiary_bluebob, sfTrue);
    sfSprite_setTexture(all->pause->sprite_bestiary_minotaur,
    all->pause->text_bestiary_minotaur, sfTrue);
    all->menu->sprite_controls = sfSprite_create();
    all->menu->txt_controls = sfTexture_createFromFile(
        "sprite/controls.jpg", NULL);
    sfSprite_setTexture(all->menu->sprite_controls,
    all->menu->txt_controls, sfTrue);
    declare_sprite_17(all);
}
