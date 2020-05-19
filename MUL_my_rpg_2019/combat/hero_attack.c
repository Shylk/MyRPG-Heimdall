/*
** EPITECH PROJECT, 2020
** hero attack
** File description:
** everything related to the hero's attack
*/

#include "../include/my.h"

int play_sword_hit_sound_effect(all_t *all, int music)
{
    if (music == 0 && (all->fight->pos_perso.x >= 700 ||
        all->fight->pos_girl.x >= 700)) {
        sfMusic_stop(all->music->sword_hit);
        sfMusic_play(all->music->sword_hit);
        music++;
    }
    return (music);
}

int reset_value_after_attack(all_t *all)
{
    if (all->fight->which_to_attack == 0) {
        if (reset_value_bis(all) == 84)
            return (84);
    } else {
        if (all->fight->ally_turn == 0)
            all->fight->hp_enemie2 -= all->stat->attack;
        else all->fight->hp_enemie2 -= 10;
        char *temp = my_itoa(all->fight->hp_enemie2);
        if (temp == NULL)
            return (84);
        sfText_setString(all->text->int_hp_enemie2, temp);
        sfRenderWindow_drawText(all->window, all->text->int_hp_enemie2, NULL);
    }
    all->fight->rct_slash.left = 0;
    all->fight->attack_selected = 0;
    all->fight->turn = 1;
    return (0);
}

int draw_slash_animation(all_t *all, int clock)
{
    if (clock <= 0) {
        all->fight->rct_slash.left += 192;
        clock = 7;
        sfSprite_setTextureRect
            (all->fight->sprite_slash, all->fight->rct_slash);
    }
    if (all->fight->which_to_attack == 0)
        sfSprite_setPosition
            (all->fight->sprite_slash, all->fight->pos_gobelin);
    else
        sfSprite_setPosition
            (all->fight->sprite_slash, all->fight->pos_gobelin2);
    sfRenderWindow_drawSprite(all->window, all->fight->sprite_slash, NULL);
    return (clock);
}

int animation_attack_sword(all_t *all)
{
    static int distance = 0, clock = 7, music = 0;

    clock--;
    distance == 0 ? all->fight->pos_perso.x += 10 : 0;
    music = play_sword_hit_sound_effect(all, music);
    (all->fight->pos_perso.x >= 1200 && distance == 0) ? distance = 1 : 0;
    if (distance == 1) {
        all->fight->pos_perso.x -= 20;
        clock = draw_slash_animation(all, clock);
        if (all->fight->pos_perso.x <= 610) {
            if (reset_value_after_attack(all) == 84)
                return (0);
            distance = 0;
            music = 0;
        }
    }
    sfSprite_setPosition(all->fight->sprite_perso, all->fight->pos_perso);
    return (0);
}

int animation_girl(all_t *all)
{
    static int distance = 0, clock = 7, music = 0;

    clock--;
    distance == 0 ? all->fight->pos_girl.x += 10 : 0;
    music = play_sword_hit_sound_effect(all, music);
    (all->fight->pos_girl.x >= 1200 && distance == 0) ? distance = 1 : 0;
    if (distance == 1) {
        all->fight->pos_girl.x -= 20;
        clock = draw_slash_animation(all, clock);
        if (all->fight->pos_girl.x <= 610) {
            if (reset_value_after_attack(all) == 84)
                return (84);
            distance = 0;
            music = 0;
        }
    }
    sfSprite_setPosition(all->fight->sprite_girl, all->fight->pos_girl);
    return (0);
}
