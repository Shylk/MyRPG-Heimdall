/*
** EPITECH PROJECT, 2019
** declare_text
** File description:
** main
*/

#include "../include/my.h"

void declare_text_8(all_t *all)
{
    all->text->s_key_for_skill = sfText_create();
    sfText_setFont(all->text->s_key_for_skill, all->text->font);
    sfText_setString(all->text->s_key_for_skill, "s");
    all->text->pos_text_class.y += 128;
    sfText_setPosition(all->text->s_key_for_skill,
    all->text->pos_text_class);
    all->text->q_key_for_quest = sfText_create();
    sfText_setFont(all->text->q_key_for_quest, all->text->font);
    sfText_setString(all->text->q_key_for_quest, "q");
    all->text->pos_text_class.y = 90;
    sfText_setPosition(all->text->q_key_for_quest,
    all->text->pos_text_class);
}

void declare_text_7(all_t *all, sfVector2f tmp_vec)
{
    tmp_vec.y = 292;
    sfText_setPosition(all->stat->txt_intelligence, tmp_vec);
    tmp_vec.x = 1645;
    tmp_vec.y = 460;
    sfText_setPosition(all->stat->txt_luck, tmp_vec);
    tmp_vec.y = 600;
    sfText_setPosition(all->stat->txt_dexterity, tmp_vec);
    tmp_vec.y = 765;
    sfText_setPosition(all->stat->txt_strengh, tmp_vec);
    sfText_setCharacterSize(all->stat->txt_speed, 70);
    sfText_setCharacterSize(all->stat->txt_attack, 70);
    sfText_setCharacterSize(all->stat->txt_life_max, 70);
    sfText_setCharacterSize(all->stat->txt_defense, 70);
    sfText_setCharacterSize(all->stat->txt_intelligence, 70);
    sfText_setCharacterSize(all->stat->txt_luck, 70);
    sfText_setCharacterSize(all->stat->txt_dexterity, 70);
    sfText_setCharacterSize(all->stat->txt_strengh, 70);
    declare_text_8(all);
}

void declare_text_6(all_t *all)
{
    sfVector2f tmp_vec;
    sfText_setFont(all->stat->txt_speed, all->text->font);
    sfText_setFont(all->stat->txt_attack, all->text->font);
    sfText_setFont(all->stat->txt_life_max, all->text->font);
    sfText_setFont(all->stat->txt_defense, all->text->font);
    sfText_setFont(all->stat->txt_intelligence, all->text->font);
    sfText_setFont(all->stat->txt_luck, all->text->font);
    sfText_setFont(all->stat->txt_dexterity, all->text->font);
    sfText_setFont(all->stat->txt_strengh, all->text->font);
    tmp_vec.x = 589;
    tmp_vec.y = 290;
    sfText_setPosition(all->stat->txt_speed, tmp_vec);
    tmp_vec.y = 460;
    sfText_setPosition(all->stat->txt_attack, tmp_vec);
    tmp_vec.y = 610;
    sfText_setPosition(all->stat->txt_life_max, tmp_vec);
    tmp_vec.y = 760;
    sfText_setPosition(all->stat->txt_defense, tmp_vec);
    tmp_vec.x = 1694;
    declare_text_7(all, tmp_vec);
}

void declare_text_5(all_t *all)
{
    all->shop->txt_money = sfText_copy(all->hud->txt_money);
    all->shop->txt_xp = sfText_copy(all->hud->txt_xp);
    sfText_setCharacterSize(all->shop->txt_money, 60);
    sfText_setColor(all->shop->txt_money, sfYellow);
    sfText_setCharacterSize(all->shop->txt_xp, 60);
    sfText_setColor(all->shop->txt_xp, sfGreen);
    all->shop->vector_txt.x = 850;
    all->shop->vector_txt.y = 280;
    sfText_setPosition(all->shop->txt_money, all->shop->vector_txt);
    all->shop->vector_txt.x += 400;
    sfText_setPosition(all->shop->txt_xp, all->shop->vector_txt);
    all->stat->txt_speed = sfText_create();
    all->stat->txt_attack = sfText_create();
    all->stat->txt_life_max = sfText_create();
    all->stat->txt_defense = sfText_create();
    all->stat->txt_intelligence = sfText_create();
    all->stat->txt_luck = sfText_create();
    all->stat->txt_dexterity = sfText_create();
    all->stat->txt_strengh = sfText_create();
    declare_text_6(all);
}

int declare_text_4(all_t *all)
{
    sfText_setCharacterSize(all->text->int_hp_enemie, 30);
    all->text->int_hp_girl = sfText_create();
    sfText_setFont(all->text->int_hp_girl, all->text->hvd);
    char *temp = my_itoa(all->fight->hp_girl);
    if (temp == NULL)
        return (84);
    sfText_setString(all->text->int_hp_girl, temp);
    sfText_setCharacterSize(all->text->int_hp_girl, 30);
    all->text->fight_name_girl = sfText_create();
    sfText_setFont(all->text->fight_name_girl, all->text->hvd);
    sfText_setString(all->text->fight_name_girl, "Mayor's daughter");
    sfText_setCharacterSize(all->text->fight_name_girl, 30);
    sfText_setPosition(all->text->fight_name_girl, all->text->pos_name_girl);
    all->shop->txt_money = sfText_create();
    all->shop->txt_xp = sfText_create();
    declare_text_5(all);
    return (0);
}
