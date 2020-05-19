/*
** EPITECH PROJECT, 2019
** main.h
** File description:
** struct
*/

#include <SFML/Window/Export.h>
#include <SFML/Graphics.h>
#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics/FontInfo.h>
#include <SFML/Graphics/Color.h>
#include <SFML/Graphics/Image.h>
#include <SFML/System/Types.h>
#include <SFML/System/Export.h>
#include <SFML/System/Time.h>
#include <SFML/System/Vector2.h>
#include <SFML/Audio.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <dirent.h>

typedef struct intro_x intro_t;
struct intro_x
{
    sfTexture *txt_intro;
    sfSprite *spr_intro;
    sfIntRect rct_intro;
    sfVector2f pos_intro;
    int intro;
};

typedef struct clocker_x clocker_t;
struct clocker_x
{
    sfClock *clock;
    sfTime time;
    float seconds;
    sfClock *clock_move;
    sfTime time_move;
    float seconds_move;
    sfClock *clock_fight;
    sfTime time_fight;
    float seconds_fight;
};

typedef struct cursor_x cursor_t;
struct cursor_x
{
    sfCursor *cursor;
    sfTexture *txt_mouse;
    sfSprite *spr_mouse;
    sfVector2f pos_mouse;
};

typedef struct event_x event_t;
struct event_x
{
    sfEvent event;
    int move[5];
    int x;
    int y;
    int check;
};

typedef struct node node_t;
struct node
{
    struct node *next;
};

typedef struct list list_t;
struct list
{
    node_t *current;
    node_t *head;
};

typedef struct music music_t;
struct music
{
    sfMusic *menu_click;
    sfMusic *menu_music;
    sfMusic *achievement;
    sfMusic *sword_hit;
    sfMusic *gobelin_punch;
    sfMusic *denied;
};

typedef struct player_stat player_stat_t;
struct player_stat
{
    int speed;
    int attack;
    int life_max;
    int defense;
    int intelligence;
    int luck;
    int dexterity;
    int strengh;
    sfText *txt_speed;
    sfText *txt_attack;
    sfText *txt_life_max;
    sfText *txt_defense;
    sfText *txt_intelligence;
    sfText *txt_luck;
    sfText *txt_dexterity;
    sfText *txt_strengh;
};

typedef struct pause pause_t;
struct pause
{
    sfSprite *sprite;
    sfTexture *texture;
    sfSprite *sprite_stats;
    sfSprite *sprite_bestiary_goblin;
    sfSprite *sprite_bestiary_bluebob;
    sfSprite *sprite_bestiary_minotaur;
    sfTexture *text_bestiary_goblin;
    sfTexture *text_bestiary_bluebob;
    sfTexture *text_bestiary_minotaur;
    sfTexture *text_stats;
    int bestiary_scene;
    int section;
};

typedef struct shop shop_t;
struct shop
{
    sfSprite *sprite_wallapaper;
    sfSprite *sprite_confirm;
    sfTexture *text_wallpaper;
    sfTexture *text_confirm;
    sfText *txt_money;
    sfText *txt_xp;
    sfVector2f vector_txt;
    sfVector2f vector_confirm;
};

typedef struct menu menu_t;
struct menu
{
    sfSprite *sprite_wallpaper;
    sfSprite *sprite_cursor;
    sfSprite *sprite_arrow;
    sfSprite *sprite_quit_menu;
    sfSprite *sprite_settings_menu;
    sfSprite *sprite_controls;
    sfSprite *sprite_sounds[4];
    sfSprite *sprite_how_to_play;
    sfTexture *txt_how_to_play;
    sfTexture *txt_controls;
    sfTexture *txt_quit_yes;
    sfTexture *txt_quit_no;
    sfTexture *txt_wallpaper;
    sfTexture *txt_cursor;
    sfTexture *glows_menu[4];
    sfTexture *glows_settings[4];
    sfTexture *sounds[4];
    sfTexture *txt_arrow;
    sfIntRect rect;
    sfVector2f vector;
    sfVector2f vec_cursor;
    sfVector2f vec_music;
    sfVector2f vec_sound_effects;
    sfEvent event;
    sfClock *clock;
    sfTime time;
    int menu;
    int quit_menu;
    int which_menu;
    int music;
    int sound_effects;
    int section;
    int how_to_play_section;
    float seconds;
};

typedef struct game game_t;
struct game
{
    sfSprite *sprite_png;
    sfSprite *sprite_chief;
    sfSprite *sprite_mayor;
    sfSprite *sprite_old_man;
    sfSprite *sprite_dead_body;
    sfSprite *sprite_dead_body_dialog;
    sfSprite *sprite_dialog;
    sfSprite *sprite_strange_man;
    sfSprite *sprite_chief_dialog;
    sfSprite *sprite_priest_after_potion;
    sfSprite *sprite_skin_selection;
    sfSprite *sprite_little_girl;
    sfSprite *sprite_tree;
    sfSprite *sprite_minotaur;
    sfTexture *text_minotaur;
    sfTexture *text_dead_body;
    sfTexture *text_dead_body_dialog;
    sfTexture  *text_little_girl;
    sfTexture *text_skin_selection;
    sfTexture *text_png;
    sfTexture *text_dialog;
    sfTexture *text_old_man;
    sfTexture *text_strange_man;
    sfTexture *text_chief;
    sfTexture *text_mayor;
    sfTexture *text_chief_dialog;
    sfTexture *text_priest_after_potion;
    sfTexture *text_tree;
    sfVector2f vector;
    sfVector2f vector_chief;
    sfVector2f vector_old_man;
    sfVector2f vector_strange_man;
    sfVector2f vector_mayor;
    sfVector2f vector_dead_body;
    sfVector2f vector_tree;
    sfVector2f vector_minotaur;
    int tmp;
    int tmp2;
    int can_draw_glow_item;
    int can_draw_glow_card_skill_tree;
    int can_draw_no_xp_cursor;
};

typedef struct hud hud_t;
struct hud
{
    sfSprite *sprite_class_logo;
    sfTexture *text_class_logo;
    sfSprite *sprite_quest_book;
    sfTexture *text_quest_book;
    sfSprite *sprite_no_xp_cursor;
    sfTexture *text_no_coins_cursor;
    sfSprite *sprite_key_inventory;
    sfTexture *text_key_inventory;
    sfSprite *sprite_icon_tree;
    sfTexture *text_icon_tree;
    sfSprite *sprite_map_logo;
    sfTexture *text_map_logo;
    sfSprite *sprite_chest_logo;
    sfTexture *text_chest_logo;
    sfSprite *sprite_heart;
    sfTexture *text_heart;
    sfSprite *sprite_coins;
    sfTexture *text_coins;
    sfSprite **potion;
    sfSprite *sprite_potion;
    sfTexture *text_potion;
    sfSprite *sprite_xp;
    sfTexture *text_xp;
    sfSprite *sprite_potion_unlocked;
    sfTexture *text_potion_unlocked;
    sfSprite *sprite_100_coins_reward;
    sfSprite *sprite_skin_dialog;
    sfTexture *text_skin_dialog;
    sfTexture *texture_100_coins_reward;
    sfSprite *sprite_map;
    sfTexture *text_map;
    sfSprite *sprite_skill_tree;
    sfTexture *text_skill_tree;
    sfSprite *sprite_move_on_item;
    sfTexture *text_move_on_item;
    sfSprite *sprite_glow_skill;
    sfTexture *text_glow_skill;
    sfTexture *text_unvailable;
    sfSprite *sprite_inventory;
    sfTexture *text_inventory;
    sfTexture *text_inventory_1;
    sfSprite *sprite_quest_log;
    sfTexture *text_quest_log_any;
    sfTexture *text_quest_log_one;
    sfTexture *text_quest_log_two;
    sfTexture *text_quest_log_all;
    sfSprite *sprite_description_potion;
    sfTexture *text_description_potion;
    sfSprite *sprite_cursor_map;
    sfSprite *sprite_enter_shop;
    sfTexture *text_enter_shop;
    sfSprite *sprite_speak_priest_e;
    sfTexture *text_speak_priest_e;
    sfSprite *sprite_not_that_way;
    sfTexture *text_not_that_way;
    sfTexture *text_cursor_map_up;
    sfTexture *text_cursor_map_down;
    sfTexture *text_cursor_map_left;
    sfTexture *text_cursor_map_right;
    sfSprite *sprite_e_to_interact;
    sfTexture *text_e_to_interact;
    sfVector2f vector_cursor_map;
    float sprint_cursor;
    sfVector2f vector;
    sfText* txt_money;
    sfText* txt_pv;
    sfText *txt_xp;
    int *check_placement_inventory;
};

typedef struct fight fight_t;
struct fight
{
    sfTexture *text_fight;
    sfSprite *sprite_fight;
    sfTexture *text_select;
    sfSprite *sprite_select;
    sfTexture *text_gobelin;
    sfTexture *text_gobelin2;
    sfSprite *sprite_gobelin;
    sfSprite *sprite_gobelin2;
    sfTexture *text_perso;
    sfSprite *sprite_perso;
    sfTexture *text_flee;
    sfSprite *sprite_flee;
    sfSprite *sprite_select_flee;
    sfSprite *sprite_select_enemie;
    sfTexture *text_hp;
    sfSprite *sprite_hp;
    sfTexture *text_hp_enemie;
    sfSprite *sprite_hp_enemie;
    sfTexture *text_hp_enemie2;
    sfSprite *sprite_hp_enemie2;
    sfTexture *text_hp_girl;
    sfSprite *sprite_hp_girl;
    sfTexture *text_slash;
    sfSprite *sprite_slash;
    sfTexture *text_shield;
    sfSprite *sprite_shield;
    sfTexture *text_girl;
    sfSprite *sprite_girl;
    sfTexture *txt_end;
    sfSprite *spr_end;
    sfTexture *txt_win;
    sfSprite *spr_win;
    sfVector2f pos_choice;
    sfVector2f pos_select;
    sfVector2f pos_gobelin;
    sfVector2f pos_gobelin2;
    sfVector2f pos_perso;
    sfVector2f pos_flee;
    sfVector2f pos_select_flee;
    sfVector2f pos_hp;
    sfVector2f pos_hp_enemie;
    sfVector2f pos_hp_enemie2;
    sfVector2f pos_hp_girl;
    sfVector2f pos_slash;
    sfVector2f pos_select_enemie;
    sfVector2f pos_girl;
    sfIntRect rct_gobelin;
    sfIntRect rct_gobelin2;
    sfIntRect rct_blue;
    sfIntRect rct_blue2;
    sfIntRect rct_boss;
    sfIntRect rct_slash;
    int hp_enemie;
    int hp_enemie2;
    int hp_girl;
    int select;
    int select_flee;
    int ally_turn;
    int which_to_attack;
    int attack_selected;
    int choice;
    int turn;
    int died;
};

typedef struct text text_t;
struct text
{
    sfFont *font;
    sfFont *hvd;
    sfText *text_name;
    sfVector2f pos_text_name;
    sfText *text_choice1;
    sfVector2f pos_text_choice1;
    sfText *text_choice2;
    sfVector2f pos_text_choice2;
    sfText *text_player_class;
    sfVector2f pos_text_class;
    sfText *m_key_for_map;
    sfText *s_key_for_skill;
    sfText *q_key_for_quest;
    sfText *i_key_for_inventory;
    sfText *int_hp_hero;
    sfVector2f pos_int_hp_hero;
    sfText *int_hp_enemie;
    sfVector2f pos_int_hp_enemie;
    sfText *fight_name;
    sfVector2f pos_name;
    sfText *fight_name_enemie;
    sfVector2f pos_name_enemie;
    sfText *int_hp_enemie2;
    sfVector2f pos_int_hp_enemie2;
    sfText *fight_name_enemie2;
    sfVector2f pos_name_enemie2;
    sfText *int_hp_girl;
    sfVector2f pos_int_hp_girl;
    sfText *fight_name_girl;
    sfVector2f pos_name_girl;
    char *name;
    int len_name;
};

typedef struct script script_t;
struct script
{
    int name;
    int choice;
};

typedef struct map map_t;
struct map
{
    sfTexture *txt_map[3];
    sfImage *img_map_path[3];
    sfSprite *spr_map;
    sfVector2f pos_map;
    sfTexture *txt_tab[7];
    sfImage *img_tab_path[7];
    sfTexture *txt_exit;
    sfSprite *spr_exit;
    sfVector2f pos_exit;
    sfTexture *txt_bord;
    sfSprite *spr_bord;
    sfVector2f pos_bord;
    unsigned int x_path;
    unsigned int y_path;
    int scene;
    int tab;
    sfColor pixel;
};

typedef struct perso perso_t;
struct perso
{
    sfTexture *txt_perso[4];
    sfTexture *txt_girl[4];
    sfSprite *spr_perso;
    sfSprite *spr_girl;
    sfVector2f pos_girl;
    sfVector2f pos_perso;
    sfIntRect rct_perso;
    sfIntRect rct_girl;
    int limit_rect_perso;
    int choose_class;
    int player_class;
    int take_potion_from_old_man;
    int gave_potion_to_chief;
    int ask_find_daughter_mayor;
    int talk_to_mayor_daughter;
    int mayor_ask_kill_boss;
    int get_benediction;
    int first_combat;
    int second_combat;
    int third_combat;
    int press_m_key;
    int press_i_key;
    int press_q_key;
    int press_s_key;
    int pv;
    int tmp_pv;
    int money;
    int xp;
};

typedef struct all
{
    sfRenderWindow *window;
    sfVideoMode video_mode;
    char **tab;
    intro_t *intro;
    event_t *event;
    cursor_t *cursor;
    clocker_t *clocker;
    list_t *list;
    music_t *music;
    game_t *game;
    hud_t *hud;
    fight_t *fight;
    text_t *text;
    script_t *script;
    menu_t *menu;
    map_t *map;
    perso_t *perso;
    shop_t *shop;
    pause_t *pause;
    player_stat_t *stat;
} all_t;
