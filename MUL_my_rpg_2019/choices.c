/*
** EPITECH PROJECT, 2019
** choices
** File description:
** contains all choices
*/

#include "include/my.h"

void left_or_rigth_choice(all_t *all)
{
    if (all->event->event.key.code == sfKeyLeft) {
        sfText_setStyle(all->text->text_choice1, sfTextUnderlined);
        sfText_setStyle(all->text->text_choice2, sfTextRegular);
        all->script->choice = 1;
    }
    if (all->event->event.key.code == sfKeyRight) {
        sfText_setStyle(all->text->text_choice2, sfTextUnderlined);
        sfText_setStyle(all->text->text_choice1, sfTextRegular);
        all->script->choice = 2;
    }
}

void choice_name_3(all_t *all)
{
    all->script->name = 1;
    all->text->len_name = 0;
    all->script->choice = 1;
    all->event->check = 1;
    sfText_setStyle(all->text->text_choice1, sfTextUnderlined);
    sfText_setStyle(all->text->text_choice2, sfTextRegular);
    for (int i = 0; i < 12; i++)
        all->text->name[i] = '_';
}

int choice_name_2(all_t *all)
{
    if (all->script->choice == 1) {
        all->script->name = 3;
        all->script->choice = 3;
        char *temp = my_strcat("Ok  ", all->text->name);
        if (temp == NULL)
            return (84);
        temp = my_strcat(temp, "  we need your help...");
        if (temp == NULL)
            return (84);
        sfText_setString(all->text->text_name, temp);
    }
    if (all->script->choice == 2) {
        choice_name_3(all);
        char *temp = my_strcat("What's your name? ", all->text->name);
        if (temp == NULL)
            return (84);
        sfText_setString(all->text->text_name, temp);
    }
    return (0);
}

int choice_name(all_t *all)
{
    if (all->script->choice == 3) {
        all->script->name = 0;
        all->menu->menu = 1;
    }
    if (all->event->check == 3) {
        if (choice_name_2(all) == 84)
            return (84);
    }
    if (all->event->check != 1)
    all->event->check = 3;
    return (0);
}
