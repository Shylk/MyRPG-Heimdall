/*
** EPITECH PROJECT, 2019
** error_launch_2
** File description:
** main
*/

#include "include/my.h"

void tab_0(all_t *all)
{
    all->tab[0] = "old_man.png";
    all->tab[1] = "path_6.jpg";
    all->tab[2] = "howto_play_1.jpg";
    all->tab[3] = "priest_who_is_he.png";
    all->tab[4] = "start_path.jpg";
    all->tab[5] = "70.png";
    all->tab[6] = "heart.png";
    all->tab[7] = "choose_a_class.png";
    all->tab[8] = "select.png";
    all->tab[9] = "80.png";
    all->tab[10] = "first_quest_validate.png";
    all->tab[11] = "tab_6.jpg";
    all->tab[12] = "bestiary_minotaur.jpg";
    all->tab[13] = "dont_go_that_way.png";
    all->tab[14] = "chief.png";
    all->tab[15] = "menu_options_glow.png";
    all->tab[16] = "100.png";
    all->tab[17] = "fight_perso2.png";
    all->tab[18] = "unvailable.png";
    all->tab[19] = "perso4_down.png";
}

void tab_1(all_t *all)
{
    all->tab[20] = "box_key_inventory.png";
    all->tab[21] = "strange_person.png";
    all->tab[22] = "coins.png";
    all->tab[23] = "perso2_left.png";
    all->tab[24] = "minotaur.png";
    all->tab[25] = "potion.png";
    all->tab[26] = "cave_path.jpg";
    all->tab[27] = "glow_skill_tree.png";
    all->tab[28] = "perso3_right.png";
    all->tab[29] = "perso_right.png";
    all->tab[30] = "60.png";
    all->tab[31] = "give_daughter_mayor.png";
    all->tab[32] = "chief_dialog.png";
    all->tab[33] = "settings_glow_controls.png";
    all->tab[34] = "little_girl_down.png";
    all->tab[35] = "mayor_daughter_dialog_1.png";
    all->tab[36] = "path_1.jpg";
    all->tab[37] = "perso3_up.png";
    all->tab[38] = "priest_correct_answer.png";
    all->tab[39] = "perso4_up.png";
}

void tab_2(all_t *all)
{
    all->tab[40] = "tab_4.jpg";
    all->tab[41] = "after_class_interactive_dialog3.png";
    all->tab[42] = "skill_tree.png";
    all->tab[43] = "xp.png";
    all->tab[44] = "pause_wallpaper.png";
    all->tab[45] = "menu_cursor.png";
    all->tab[46] = "map.png";
    all->tab[47] = "40.png";
    all->tab[48] = "tab_3.jpg";
    all->tab[49] = "mayor_find_daughter.png";
    all->tab[50] = "path_5.jpg";
    all->tab[51] = "e_to_interact.png";
    all->tab[52] = "menu_play_glow.png";
    all->tab[53] = "archer.png";
    all->tab[54] = "cave.jpg";
    all->tab[55] = "perso4_right.png";
    all->tab[56] = "dead_body.png";
    all->tab[57] = "settings_glow_howto.png";
    all->tab[58] = "chest.png";
    all->tab[59] = "perso_down.png";
}

void tab_3(all_t *all)
{
    all->tab[60] = "inventory_1.png";
    all->tab[61] = "priest_enigma.png";
    all->tab[62] = "cursor_right.png";
    all->tab[63] = "after_class_interactive_dialog2.png";
    all->tab[64] = "30.png";
    all->tab[65] = "priest_after_potion.png";
    all->tab[66] = "tab_bord.png";
    all->tab[67] = "icon_skill_tree.png";
    all->tab[68] = "perso3_down.png";
    all->tab[69] = "quit_glow_yes.png";
    all->tab[70] = "path_end.jpg";
    all->tab[71] = "dead_body_dialog.png";
    all->tab[72] = "priest_intro.png";
    all->tab[73] = "quest_book.png";
    all->tab[74] = "music_off.png";
    all->tab[75] = "bestiary_goblin.jpg";
    all->tab[76] = "no_xp_cursor.png";
    all->tab[77] = "perso5_up.png";
    all->tab[78] = "fight.png";
    all->tab[79] = "20.png";
}

char **make_tab_texture(all_t *all)
{
    all->tab = malloc(sizeof(char *) * (177));
    if (all->tab == NULL)
        return (NULL);
    tab_0(all);
    tab_1(all);
    tab_2(all);
    tab_3(all);
    tab_4(all);
    tab_5(all);
    tab_6(all);
    tab_7(all);
    tab_8(all);
    return (all->tab);
}
