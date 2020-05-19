/*
** EPITECH PROJECT, 2019
** declare_sprite
** File description:
** main
*/

#include "../include/my.h"

void declare_sprite_5(all_t *all)
{
    all->game->sprite_chief = sfSprite_create();
    all->game->sprite_mayor = sfSprite_create();
    all->game->sprite_old_man = sfSprite_create();
    all->game->sprite_chief_dialog = sfSprite_create();
    all->game->sprite_strange_man = sfSprite_create();
    all->game->sprite_dialog = sfSprite_create();
    all->game->sprite_priest_after_potion = sfSprite_create();
    all->game->sprite_skin_selection = sfSprite_create();
    all->game->sprite_little_girl = sfSprite_create();
    all->game->text_little_girl = sfTexture_createFromFile(
        "sprite/little_girl.png", NULL);
    all->game->text_skin_selection = sfTexture_createFromFile(
        "sprite/skin_selection.jpg", NULL);
    all->game->text_png = sfTexture_createFromFile(
        "sprite/start_mob.png", NULL);
    all->game->text_dialog = sfTexture_createFromFile(
        "sprite/intro_scenario.png", NULL);
    all->game->text_strange_man = sfTexture_createFromFile(
        "sprite/forest_gard.png", NULL);
    declare_sprite_6(all);
}

void declare_sprite_4(all_t *all)
{
    sfSprite_setTexture(all->menu->sprite_settings_menu,
    all->menu->glows_settings[0], sfTrue);
    all->menu->sounds[0] = sfTexture_createFromFile(
        "sprite/music_on.png", NULL);
    all->menu->sounds[1] = sfTexture_createFromFile(
        "sprite/music_off.png", NULL);
    all->menu->sounds[2] = sfTexture_createFromFile(
        "sprite/sound_on.png", NULL);
    all->menu->sounds[3] = sfTexture_createFromFile(
        "sprite/sound_off.png", NULL);
    sfSprite_setTexture(all->menu->sprite_sounds[0],
    all->menu->sounds[0], sfTrue);
    sfSprite_setTexture(all->menu->sprite_sounds[1],
    all->menu->sounds[1], sfTrue);
    sfSprite_setTexture(all->menu->sprite_sounds[2],
    all->menu->sounds[2], sfTrue);
    sfSprite_setTexture(all->menu->sprite_sounds[3],
    all->menu->sounds[3], sfTrue);
    all->game->sprite_png = sfSprite_create();
    declare_sprite_5(all);
}

void declare_sprite_3(all_t *all)
{
    all->menu->txt_quit_no = sfTexture_createFromFile(
        "sprite/quit_glow_no.png", NULL);
    all->menu->txt_quit_yes = sfTexture_createFromFile(
        "sprite/quit_glow_yes.png", NULL);
    sfSprite_setTexture(all->menu->sprite_wallpaper,
    all->menu->glows_menu[0], sfTrue);
    sfSprite_setTexture(all->menu->sprite_cursor,
    all->menu->txt_cursor, sfTrue);
    sfSprite_setTexture(all->menu->sprite_arrow, all->menu->txt_arrow, sfTrue);
    sfSprite_setTexture(all->menu->sprite_quit_menu,
    all->menu->txt_quit_no, sfTrue);
    all->menu->glows_settings[0] = sfTexture_createFromFile(
        "sprite/settings_glow_music.png", NULL);
    all->menu->glows_settings[1] = sfTexture_createFromFile(
        "sprite/settings_glow_sound.png", NULL);
    all->menu->glows_settings[2] = sfTexture_createFromFile(
        "sprite/settings_glow_controls.png", NULL);
    all->menu->glows_settings[3] = sfTexture_createFromFile(
        "sprite/settings_glow_howto.png", NULL);
    declare_sprite_4(all);
}

void declare_sprite_2(all_t *all)
{
    all->menu->sprite_quit_menu = sfSprite_create();
    all->menu->sprite_settings_menu = sfSprite_create();
    all->menu->sprite_sounds[0] = sfSprite_create();
    all->menu->sprite_sounds[1] = sfSprite_create();
    all->menu->sprite_sounds[2] = sfSprite_create();
    all->menu->sprite_sounds[3] = sfSprite_create();
    all->menu->txt_wallpaper = sfTexture_createFromFile(
        "sprite/menu.png", NULL);
    all->menu->txt_arrow = sfTexture_createFromFile(
        "sprite/menu_arrow.png", NULL);
    all->menu->txt_cursor = sfTexture_createFromFile(
        "sprite/menu_cursor.png", NULL);
    all->menu->glows_menu[0] = sfTexture_createFromFile(
        "sprite/menu_play_glow.png", NULL);
    all->menu->glows_menu[1] = sfTexture_createFromFile(
        "sprite/menu_load_glow.png", NULL);
    all->menu->glows_menu[2] = sfTexture_createFromFile(
        "sprite/menu_quit_glow.png", NULL);
    all->menu->glows_menu[3] = sfTexture_createFromFile(
        "sprite/menu_options_glow.png", NULL);
    declare_sprite_3(all);
}

int declare_sprite(all_t *all)
{
    all->intro->spr_intro = sfSprite_create();
    sfSprite_setTexture(all->intro->spr_intro, all->intro->txt_intro, sfTrue);
    all->map->spr_map = sfSprite_create();
    sfSprite_setTexture(all->map->spr_map, all->map->txt_map[0], sfTrue);
    all->map->spr_exit = sfSprite_create();
    sfSprite_setTexture(all->map->spr_exit, all->map->txt_exit, sfTrue);
    all->map->spr_bord = sfSprite_create();
    sfSprite_setTexture(all->map->spr_bord, all->map->txt_bord, sfTrue);
    all->perso->spr_perso = sfSprite_create();
    sfSprite_setTexture(all->perso->spr_perso,
    all->perso->txt_perso[3], sfTrue);
    all->perso->spr_girl = sfSprite_create();
    sfSprite_setTexture(all->perso->spr_girl, all->perso->txt_girl[3], sfTrue);
    all->menu->sprite_wallpaper = sfSprite_create();
    all->menu->sprite_cursor = sfSprite_create();
    all->menu->sprite_arrow = sfSprite_create();
    all->hud->potion = malloc(sizeof(sfSprite *) * 4);
    if (all->hud->potion == NULL)
        return (84);
    declare_sprite_2(all);
    return (0);
}
