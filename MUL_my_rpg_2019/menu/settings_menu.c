/*
** EPITECH PROJECT, 2019
** menu_managment
** File description:
** main
*/

#include <stdbool.h>
#include "../include/my.h"

void check_events_settings_menu_2(all_t *all)
{
    int section = all->menu->how_to_play_section;

    if (section == 1 && sfKeyboard_isKeyPressed(sfKeyN)) {
            all->menu->txt_how_to_play = sfTexture_createFromFile(
                "sprite/howto_play_2.jpg", NULL);
            sfSprite_setTexture(all->menu->sprite_how_to_play,
            all->menu->txt_how_to_play, sfTrue);
            all->menu->how_to_play_section = 2;
        }
    if (section == 1 && sfKeyboard_isKeyPressed(sfKeyQ))
        all->menu->section = 0;
    if (section == 2 && sfKeyboard_isKeyPressed(sfKeyQ)) {
        all->menu->txt_how_to_play = sfTexture_createFromFile(
            "sprite/howto_play_1.jpg", NULL);
        sfSprite_setTexture(all->menu->sprite_how_to_play,
        all->menu->txt_how_to_play, sfTrue);
        all->menu->how_to_play_section = 1;
        all->menu->section = 0;
    }
}

int check_events_settings_menu(all_t *all, int check, sfEvent event)
{
    if (all->menu->section == 0) {
        if (sfKeyboard_isKeyPressed(sfKeyDown))
            key_down_event_settings_menu(all);
        if (sfKeyboard_isKeyPressed(sfKeyUp))
            key_up_event_settings_menu(all);
        if (event.type == sfEvtKeyReleased
        && event.key.code == sfKeyEnter && check >= 2)
            key_enter_event_settings_menu(all);
        if (sfKeyboard_isKeyPressed(sfKeyEscape)) {
            all->menu->vector.x = 630;
            all->menu->vector.y = 810;
            sfSprite_setPosition(all->menu->sprite_arrow, all->menu->vector);
            if (menu(all) == 84)
                return (84);
        }
    } else if (all->menu->section == 1 && sfKeyboard_isKeyPressed(sfKeyQ))
        all->menu->section = 0;
    else check_events_settings_menu_2(all);
    return (0);
}

void draw_settings_menu_sprites_2(all_t *all)
{
    if (all->menu->section == 1)
        sfRenderWindow_drawSprite(all->window,
        all->menu->sprite_controls, NULL);
    else if (all->menu->section == 2)
        sfRenderWindow_drawSprite(all->window,
        all->menu->sprite_how_to_play, NULL);
}

void draw_settings_menu_sprites(all_t *all)
{
    if (all->menu->section == 0) {
        sfRenderWindow_drawSprite(all->window,
        all->menu->sprite_settings_menu, NULL);
        sfRenderWindow_drawSprite(all->window, all->menu->sprite_arrow, NULL);
        timer_menu(all);
        if (all->menu->music == true)
            sfRenderWindow_drawSprite(all->window,
            all->menu->sprite_sounds[0], NULL);
        if (all->menu->music == false)
            sfRenderWindow_drawSprite(all->window,
            all->menu->sprite_sounds[1], NULL);
        if (all->menu->sound_effects == true)
            sfRenderWindow_drawSprite(all->window,
            all->menu->sprite_sounds[2], NULL);
        else sfRenderWindow_drawSprite(all->window,
        all->menu->sprite_sounds[3], NULL);
    }
    draw_settings_menu_sprites_2(all);
}

int settings_menu(all_t *all)
{
    sfEvent event;
    int check = 0;

    sfRenderWindow_clear(all->window, sfBlack);
    sfRenderWindow_setMouseCursorVisible(all->window, sfFalse);
    while (sfRenderWindow_isOpen(all->window)) {
        draw_settings_menu_sprites(all);
        while (sfRenderWindow_pollEvent(all->window, &event)) {
            if (sfKeyboard_isKeyPressed(sfKeyEnter))
                check += 1;
            check_basic_events_menu(all, event);
            if (check_events_settings_menu(all, check, event) == 84)
                return (84);
        }
        sfRenderWindow_display(all->window);
    }
    return (0);
}