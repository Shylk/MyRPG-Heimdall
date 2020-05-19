/*
** EPITECH PROJECT, 2019
** declare_text
** File description:
** main
*/

#include "../include/my.h"

int declare_text_3(all_t *all)
{
    sfText_setCharacterSize(all->text->int_hp_enemie, 30);
    all->text->fight_name = sfText_create();
    sfText_setFont(all->text->fight_name, all->text->hvd);
    sfText_setString(all->text->fight_name, "The brave Hero");
    sfText_setCharacterSize(all->text->fight_name, 30);
    all->text->fight_name_enemie = sfText_create();
    sfText_setFont(all->text->fight_name_enemie, all->text->hvd);
    sfText_setString(all->text->fight_name_enemie, "A mere goblin");
    sfText_setCharacterSize(all->text->fight_name_enemie, 30);
    sfText_setPosition(all->text->fight_name_enemie,
    all->text->pos_name_enemie);
    all->text->int_hp_enemie2 = sfText_create();
    sfText_setFont(all->text->int_hp_enemie2, all->text->hvd);
    char *temp = my_itoa(all->fight->hp_enemie2);
    if (temp == NULL)
        return (84);
    sfText_setString(all->text->int_hp_enemie2, temp);
    if (declare_text_4(all) == 84)
        return (84);
    return (0);
}

int declare_text_2(all_t *all)
{
    sfText_setString(all->text->i_key_for_inventory, "i");
    all->text->pos_text_class.y += 128;
    all->text->pos_text_class.x += 10;
    sfText_setPosition(all->text->i_key_for_inventory,
    all->text->pos_text_class);
    if (text_script(all) == 84)
        return (84);
    text_choices(all);
    all->text->int_hp_hero = sfText_create();
    sfText_setFont(all->text->int_hp_hero, all->text->hvd);
    if (declare_text_2_bis(all) == 84)
        return (84);
    if (declare_text_3(all) == 84)
        return (84);
    return (0);
}

int declare_text(all_t *all)
{
    sfVector2f vec_tmp;
    all->text->font = sfFont_createFromFile("font/font_regular.ttf");
    all->text->hvd = sfFont_createFromFile("font/hvd.otf");
    all->text->text_player_class = sfText_create();
    sfText_setFont(all->text->text_player_class, all->text->font);
    all->text->pos_text_class.x = 150;
    all->text->pos_text_class.y = 430;
    vec_tmp.x = 150;
    vec_tmp.y = 550;
    sfText_setPosition(all->text->text_player_class, vec_tmp);
    if (declare_text_bis(all) == 84)
        return (84);
    sfText_setFont(all->text->m_key_for_map, all->text->font);
    sfText_setString(all->text->m_key_for_map, "m");
    all->text->pos_text_class.y -= 220;
    sfText_setPosition(all->text->m_key_for_map, all->text->pos_text_class);
    all->text->i_key_for_inventory = sfText_create();
    sfText_setFont(all->text->i_key_for_inventory, all->text->font);
    if (declare_text_2(all) == 84)
        return (84);
    return (0);
}

int text_script(all_t *all)
{
    int i = 0;
    all->text->name = malloc(sizeof(char) * 15);
    if (all->text->name == NULL)
        return (84);
    for (; i < 12; i++)
        all->text->name[i] = '_';
    all->text->name[i] = '\0';
    all->text->pos_text_name.x = 0;
    all->text->pos_text_name.y = 0;
    all->text->text_name = sfText_create();
    sfText_setFont(all->text->text_name, all->text->font);
    char *temp = my_strcat("What's your name? ", all->text->name);
    if (temp == NULL)
        return (84);
    sfText_setString(all->text->text_name, temp);
    sfText_setColor(all->text->text_name, sfWhite);
    sfText_setCharacterSize(all->text->text_name, 30);
    sfText_setPosition(all->text->text_name, all->text->pos_text_name);
    return (0);
}

void text_choices(all_t *all)
{
    all->text->pos_text_choice1.x = 100;
    all->text->pos_text_choice1.y = 100;
    all->text->text_choice1 = sfText_create();
    sfText_setFont(all->text->text_choice1, all->text->font);
    sfText_setString(all->text->text_choice1, "Yes sir !");
    sfText_setColor(all->text->text_choice1, sfWhite);
    sfText_setCharacterSize(all->text->text_choice1, 30);
    sfText_setStyle(all->text->text_choice1, sfTextUnderlined);
    sfText_setPosition(all->text->text_choice1, all->text->pos_text_choice1);
    all->text->pos_text_choice2.x = 250;
    all->text->pos_text_choice2.y = 100;
    all->text->text_choice2 = sfText_create();
    sfText_setFont(all->text->text_choice2, all->text->font);
    sfText_setString(all->text->text_choice2, "Humm...");
    sfText_setColor(all->text->text_choice2, sfWhite);
    sfText_setCharacterSize(all->text->text_choice2, 30);
    sfText_setPosition(all->text->text_choice2, all->text->pos_text_choice2);
}
