/*
** EPITECH PROJECT, 2019
** script
** File description:
** contains all scripts
*/

#include "include/my.h"

int name_answering_2(all_t *all)
{
    if (all->text->len_name >= 1) {
        all->text->name[all->text->len_name] = '\0';
        all->script->name = 2;
        all->script->choice = 1;
        all->event->check = 2;
        char *temp = my_strcat("Your name is  ", all->text->name);
        if (temp == NULL)
            return (84);
        temp = my_strcat(temp, "  right?");
        if (temp == NULL)
            return (84);
        sfText_setString(all->text->text_name, temp);
    } else if (all->text->len_name == 0 && all->event->check == 1) {
        all->script->name = 404;
        sfText_setStyle(all->text->text_choice1, sfTextUnderlined);
        sfText_setStyle(all->text->text_choice2, sfTextRegular);
        all->script->choice = 1;
        sfText_setString(all->text->text_name,
            "Don't you have a name? come on, tell me the truth.");
    }
    return (0);
}

int script_name_answering(all_t *all)
{
    if ((all->script->name == 1 || all->script->name == 404)
        && all->event->event.type == sfEvtKeyReleased
        && all->event->event.key.code == sfKeyEnter) {
            if (all->script->name == 404) {
                all->script->name = 1;
                char *temp = my_strcat("What's your name? ", all->text->name);
                if (temp == NULL)
                    return (84);
                sfText_setString(all->text->text_name, temp);
                return (0);
            }
            if (name_answering_2(all) == 84)
                return (84);
            if (all->event->check == 0)
                all->event->check = 1;
        }
    return (0);
}

int script_name_entering(all_t *all)
{
    if (all->event->event.text.unicode >= 65
        && all->event->event.text.unicode <= 122
        && all->text->len_name < 12) {
            all->text->name[all->text->len_name] =
                all->event->event.text.unicode;
            char *temp = my_strcat("What's your name? ", all->text->name);
            if (temp == NULL)
                return (84);
            sfText_setString(all->text->text_name, temp);
            all->text->len_name++;
        }
    return (0);
}
