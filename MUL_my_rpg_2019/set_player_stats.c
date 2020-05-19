/*
** EPITECH PROJECT, 2019
** move_rect
** File description:
** contains all rect movements
*/

#include "include/my.h"

int set_all_stat_bis(all_t *all, char *temp)
{
    temp = my_itoa(all->stat->intelligence);
    if (temp == NULL)
        return (84);
    sfText_setString(all->stat->txt_intelligence, temp);
    temp = my_itoa(all->stat->luck);
    if (temp == NULL)
        return (84);
    sfText_setString(all->stat->txt_luck, temp);
    temp = my_itoa(all->stat->dexterity);
    if (temp == NULL)
        return (84);
    sfText_setString(all->stat->txt_dexterity, temp);
    temp = my_itoa(all->stat->strengh);
    if (temp == NULL)
        return (84);
    sfText_setString(all->stat->txt_strengh, temp);
    return (0);
}

int set_all_stat_texts(all_t *all)
{
    char *temp = my_itoa(all->stat->speed);
    if (temp == NULL)
        return (84);
    sfText_setString(all->stat->txt_speed, temp);
    temp = my_itoa(all->stat->attack);
    if (temp == NULL)
        return (84);
    sfText_setString(all->stat->txt_attack, temp);
    temp = my_itoa(all->stat->life_max);
    if (temp == NULL)
        return (84);
    sfText_setString(all->stat->txt_life_max, temp);
    temp = my_itoa(all->stat->defense);
    if (temp == NULL)
        return (84);
    sfText_setString(all->stat->txt_defense, temp);
    if (set_all_stat_bis(all, temp) == 84)
        return (84);
    return (0);
}

void set_stat_for_archer(all_t *all)
{
    all->stat->speed = 15;
    all->stat->attack += 25;
    all->stat->life_max = 80;
    all->stat->defense = 70;
    all->stat->intelligence = 10;
    all->stat->luck = 8;
    all->stat->dexterity = 3;
    all->stat->strengh = 7;
    all->perso->pv = 80;
    all->perso->tmp_pv = 80;
}

void set_stat_for_warrior(all_t *all)
{
    all->stat->speed = 10;
    all->stat->attack += 20;
    all->stat->life_max = 100;
    all->stat->defense = 100;
    all->stat->intelligence = 6;
    all->stat->luck = 5;
    all->stat->dexterity = 5;
    all->stat->strengh = 10;
    all->perso->pv = 100;
    all->perso->tmp_pv = 100;
}

void set_stat_for_tank(all_t *all)
{
    all->stat->speed = 5;
    all->stat->attack += 15;
    all->stat->life_max = 115;
    all->stat->defense = 150;
    all->stat->intelligence = 3;
    all->stat->luck = 4;
    all->stat->dexterity = 7;
    all->stat->strengh = 15;
    all->perso->pv = 115;
    all->perso->tmp_pv = 115;
}