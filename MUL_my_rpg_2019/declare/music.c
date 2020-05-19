/*
** EPITECH PROJECT, 2019
** declare_music
** File description:
** main
*/

#include "../include/my.h"

void declare_music(all_t *all)
{
    all->music->menu_click = sfMusic_createFromFile(
        "sound_effects/click_sound_menu.wav");
    all->music->menu_music = sfMusic_createFromFile(
        "sound_effects/menu_main_theme.ogg");
    all->music->achievement = sfMusic_createFromFile(
        "sound_effects/achievement.ogg");
    all->music->sword_hit = sfMusic_createFromFile(
        "sound_effects/sword_slash.ogg");
    all->music->gobelin_punch = sfMusic_createFromFile(
        "sound_effects/gobelin_punch.ogg");
    all->music->denied = sfMusic_createFromFile("sound_effects/denied.wav");
}
