/*
** EPITECH PROJECT, 2019
** declare_texture
** File description:
** main
*/

#include "../include/my.h"

void declare_texture_5(all_t *all)
{
    all->fight->text_hp = sfTexture_createFromFile(
        "sprite/100.png", NULL);
    all->fight->text_hp_enemie = sfTexture_createFromFile(
        "sprite/100.png", NULL);
    all->fight->text_slash = sfTexture_createFromFile(
        "sprite/slash_effect.png", NULL);
    all->fight->text_hp_enemie2 = sfTexture_createFromFile(
        "sprite/100.png", NULL);
    all->fight->text_shield = sfTexture_createFromFile(
        "sprite/shield.png", NULL);
    all->fight->text_girl = sfTexture_createFromFile(
        "sprite/girl_fight.png", NULL);
    all->fight->text_hp_girl = sfTexture_createFromFile(
        "sprite/100.png", NULL);
    all->fight->txt_end = sfTexture_createFromFile(
        "sprite/dead_screen.png", NULL);
    all->game->text_tree = sfTexture_createFromFile(
        "sprite/tree.png", NULL);
}

void declare_texture_4(all_t *all)
{
    all->perso->txt_girl[1] = sfTexture_createFromFile(
        "sprite/little_girl_right.png", NULL);
    all->perso->txt_girl[2] = sfTexture_createFromFile(
        "sprite/little_girl_up.png", NULL);
    all->perso->txt_girl[3] = sfTexture_createFromFile(
        "sprite/little_girl_down.png", NULL);
    all->fight->text_fight = sfTexture_createFromFile(
        "sprite/fight.png", NULL);
    all->fight->text_select = sfTexture_createFromFile(
        "sprite/select.png", NULL);
    all->fight->text_gobelin = sfTexture_createFromFile(
        "sprite/gobelin_idle.png", NULL);
    all->fight->text_gobelin2 = sfTexture_createFromFile(
        "sprite/gobelin_idle.png", NULL);
    all->fight->text_perso = sfTexture_createFromFile(
        "sprite/perso_fight.png", NULL);
    all->fight->text_flee = sfTexture_createFromFile(
        "sprite/flee_popup.png", NULL);
    declare_texture_5(all);
}

void declare_texture_3(all_t *all)
{
    all->map->img_tab_path[2] = sfImage_createFromFile(
        "sprite/path_3.jpg");
    all->map->img_tab_path[3] = sfImage_createFromFile(
        "sprite/path_4.jpg");
    all->map->img_tab_path[4] = sfImage_createFromFile(
        "sprite/path_5.jpg");
    all->map->img_tab_path[5] = sfImage_createFromFile(
        "sprite/path_6.jpg");
    all->perso->txt_perso[0] = sfTexture_createFromFile(
        "sprite/perso_left.png", NULL);
    all->perso->txt_perso[1] = sfTexture_createFromFile(
        "sprite/perso_right.png", NULL);
    all->perso->txt_perso[2] = sfTexture_createFromFile(
        "sprite/perso_up.png", NULL);
    all->perso->txt_perso[3] = sfTexture_createFromFile(
        "sprite/perso_down.png", NULL);
    all->perso->txt_girl[0] = sfTexture_createFromFile(
        "sprite/little_girl_left.png", NULL);
    declare_texture_4(all);
}

void declare_texture_2(all_t *all)
{
    all->map->txt_bord = sfTexture_createFromFile(
        "sprite/tab_bord.png", NULL);
    all->map->txt_tab[0] = sfTexture_createFromFile(
        "sprite/tab_1.jpg", NULL);
    all->map->txt_tab[1] = sfTexture_createFromFile(
        "sprite/tab_2.jpg", NULL);
    all->map->txt_tab[2] = sfTexture_createFromFile(
        "sprite/tab_3.jpg", NULL);
    all->map->txt_tab[3] = sfTexture_createFromFile(
        "sprite/tab_4.jpg", NULL);
    all->map->txt_tab[4] = sfTexture_createFromFile(
        "sprite/tab_5.jpg", NULL);
    all->map->txt_tab[5] = sfTexture_createFromFile(
        "sprite/tab_6.jpg", NULL);
    all->map->img_tab_path[0] = sfImage_createFromFile(
        "sprite/path_1.jpg");
    all->map->img_tab_path[1] = sfImage_createFromFile(
        "sprite/path_2.jpg");
    declare_texture_3(all);
}

void declare_texture(all_t *all)
{
    all->intro->txt_intro = sfTexture_createFromFile("sprite/intro.png", NULL);
    all->map->txt_map[0] = sfTexture_createFromFile(
        "sprite/start.jpg", NULL);
    all->map->txt_map[1] = sfTexture_createFromFile(
        "sprite/map.png", NULL);
    all->map->txt_map[2] = sfTexture_createFromFile(
        "sprite/cave.jpg", NULL);
    all->map->txt_tab[6] = sfTexture_createFromFile(
        "sprite/end.jpg", NULL);
    all->map->img_map_path[0] = sfImage_createFromFile(
        "sprite/start_path.jpg");
    all->map->img_map_path[1] = sfImage_createFromFile(
        "sprite/map_path.jpg");
    all->map->img_map_path[2] = sfImage_createFromFile(
        "sprite/cave_path.jpg");
    all->map->img_tab_path[6] = sfImage_createFromFile(
        "sprite/path_end.jpg");
    all->map->txt_exit = sfTexture_createFromFile(
        "sprite/start_exit.jpg", NULL);
    declare_texture_2(all);
}
