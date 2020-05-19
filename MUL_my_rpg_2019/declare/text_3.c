/*
** EPITECH PROJECT, 2019
** declare_text
** File description:
** main
*/

#include "../include/my.h"

int declare_text_2_bis(all_t *all)
{
    char *temp = my_itoa(all->perso->pv);
    if (temp == NULL)
        return (84);
    sfText_setString(all->text->int_hp_hero, temp);
    sfText_setCharacterSize(all->text->int_hp_hero, 30);
    all->text->int_hp_enemie = sfText_create();
    sfText_setFont(all->text->int_hp_enemie, all->text->hvd);
    temp = my_itoa(all->fight->hp_enemie);
    if (temp == NULL)
        return (84);
    sfText_setString(all->text->int_hp_enemie, temp);
    return (0);
}

int declare_text_bis_2(all_t *all)
{
    char *temp = my_itoa(all->perso->money);
    if (temp == NULL)
        return (84);
    sfText_setString(all->hud->txt_money, temp);
    temp = my_itoa(all->perso->pv);
    if (temp == NULL)
        return (84);
    sfText_setString(all->hud->txt_pv, temp);
    temp = my_itoa(all->perso->xp);
    if (temp == NULL)
        return (84);
    sfText_setString(all->hud->txt_xp, temp);
    return (0);
}

int declare_text_bis(all_t *all)
{
    all->hud->txt_money = sfText_create();
    all->hud->txt_pv = sfText_create();
    all->hud->txt_xp = sfText_create();
    sfText_setFont(all->hud->txt_xp, all->text->font);
    sfText_setFont(all->hud->txt_money, all->text->font);
    sfText_setFont(all->hud->txt_pv, all->text->font);
    if (declare_text_bis_2(all) == 84)
        return (84);
    all->text->m_key_for_map = sfText_create();
    all->text->fight_name_enemie2 = sfText_create();
    sfText_setFont(all->text->fight_name_enemie2, all->text->hvd);
    sfText_setString(all->text->fight_name_enemie2, "Another goblin");
    sfText_setCharacterSize(all->text->fight_name_enemie2, 30);
    sfText_setPosition(all->text->fight_name_enemie2,
    all->text->pos_name_enemie2);
    return (0);
}
