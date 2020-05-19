/*
** EPITECH PROJECT, 2019
** event
** File description:
** contains all events
*/

#include "include/my.h"

void skipping_intro(all_t *all)
{
    if (all->intro->intro == 0
        && all->event->event.type == sfEvtKeyReleased) {
        all->intro->intro = 1;
        all->menu->menu = 0;
    }
}

int name_entering(all_t *all)
{
    if (all->event->event.type == sfEvtTextEntered && all->script->name == 1) {
        if (script_name_entering(all) == 84)
            return (84);
    } else if (sfKeyboard_isKeyPressed(sfKeyBackspace)
        && all->text->len_name > 0 && all->script->name == 1) {
            all->text->name[all->text->len_name - 1] = '_';
            char *temp = my_strcat("What's your name? ", all->text->name);
            if (temp == NULL)
                return (84);
            sfText_setString(all->text->text_name, temp);
            all->text->len_name--;
        }
    return (0);
}

int player_enter_his_name(all_t *all)
{
    if (name_entering(all) == 84)
        return (84);
    if (script_name_answering(all) == 84)
        return (84);
    if ((all->script->name == 2 || all->script->name == 3)
        && all->event->event.type == sfEvtKeyReleased) {
            if (all->event->event.key.code == sfKeyEnter)
                if (choice_name(all) == 84)
                    return (84);
            left_or_rigth_choice(all);
    }
    return (0);
}
