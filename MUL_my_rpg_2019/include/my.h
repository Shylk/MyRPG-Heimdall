/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** contains prototype of all functions in libmy
*/

#include "main.h"

#define MENU all->menu->which_menu == 0
#define SETTINGS all->menu->which_menu == 1
#define HTP all->menu->which_menu == 2
#define START all->menu->which_menu == 3
#define LEFT all->event->move[0]
#define RIGHT all->event->move[1]
#define UP all->event->move[2]
#define DOWN all->event->move[3]
#define SPRINT all->event->move[4]
#define SPRINT_CURSOR all->hud->sprint_cursor
#define UP_CURSOR 0
#define DOWN_CURSOR 1
#define LEFT_CURSOR 2
#define RIGHT_CURSOR 3
#define POTION 1
#define NO_MOVE 4
#define SPAWN all->map->scene == 0
#define PLAIN all->map->scene == 1
#define MOUNTAIN all->map->scene == 2
#define CAVE all->map->scene == 4
#define X all->map->x_path
#define Y all->map->y_path
#define R all->map->pixel.r
#define G all->map->pixel.g
#define B all->map->pixel.b
#define IMG all->map->img_map_path[all->map->scene]
#define TAB all->map->img_tab_path[all->map->tab]
#define KEY_RIGHT sfKeyboard_isKeyPressed(sfKeyRight)
#define KEY_LEFT sfKeyboard_isKeyPressed(sfKeyLeft)
#define KEY_ENTER sfKeyboard_isKeyPressed(sfKeyEnter)

int declare_value(all_t *all);
int declare_struct(all_t *all);
int declare_int(all_t *all);
void declare_clock(all_t *all);
void declare_texture(all_t *all);
int declare_sprite(all_t *all);
void declare_sprite_6(all_t *all);
void declare_sprite_11(all_t *all);
void declare_sprite_16(all_t *all);
void declare_sprite_10_bis(all_t *all);
void declare_sprite_9_bis(all_t *all);
void declare_sprite_8_bis(all_t *all);
void declare_sprite_7_bis(all_t *all);
void declare_pos(all_t *all);
void declare_pos_5(all_t *all, sfVector2f vec_tmp);
void declare_pos_6(all_t *all, sfVector2f vec_tmp);
void declare_rect(all_t *all);
int declare_int(all_t *all);
void declare_origin(all_t *all);
int declare_text(all_t *all);
int declare_text_4(all_t *all);
int declare_text_bis(all_t *all);
int declare_text_2_bis(all_t *all);
int text_script(all_t *all);
void text_choices(all_t *all);
void delete_or_use_item(all_t *all, int i);
int check_case_1_inventory
(all_t *all, sfVector2f vector_move_on_item_inventory);
int check_case_2_inventory
(all_t *all, sfVector2f vector_move_on_item_inventory);
int check_case_3_inventory
(all_t *all, sfVector2f vector_move_on_item_inventory);
int check_case_4_inventory
(all_t *all, sfVector2f vector_move_on_item_inventory);
void check_move_on_item(all_t *all);
void check_if_un_or_available_glow(all_t *all, int tier);
void is_tier_1(all_t *all, int *tier, int pos_card);
void is_tier_2(all_t *all, int *tier, int pos_card);
void is_tier_3(all_t *all, int *tier, int pos_card);
void use_card_skill_tree(all_t *all, int *tier, int pos_card);
void init_vector_no_xp(all_t *all, sfVector2f *vector_no_xp);
void init_vector_move_on_card(sfVector2f *vector_move_on_card);
int check_sixth_card_tree
(all_t *all, int *tier_3, sfVector2f vector_move_on_card);
int check_fifth_card_tree
(all_t *all, int *tier_3, sfVector2f vector_move_on_card);
int check_fourth_card_tree
(all_t *all, int *tier_2, sfVector2f vector_move_on_card);
int check_third_card_tree
(all_t *all, int *tier_2, sfVector2f vector_move_on_card);
int check_second_card_tree
(all_t *all, int *tier_1, sfVector2f vector_move_on_card);
int check_first_card_tree
(all_t *all, int *tier_1, sfVector2f vector_move_on_card);
void reinit_can_draw_var(all_t *all);
int check_move_on_card_tree(all_t *all);
int end_screen_event(all_t *all);
void declare_music(all_t *all);
int analyse_events(all_t *all);
void timed(all_t *all);
int many_argc(int argc, char **argv);
void intro(all_t *all);
void name_function(all_t *all);
int game_loop(all_t *all);
int game_plain(all_t *all);
void game_start(all_t *all);
void move_rect_perso(all_t *all);
void skipping_intro(all_t *all);
int player_enter_his_name(all_t *all);
int script_name_answering(all_t *all);
int script_name_entering(all_t *all);
void left_or_rigth_choice(all_t *all);
int choice_name(all_t *all);
void mouse_moved(all_t *all);
void mouse_clicked(all_t *all);
void menu_moved(all_t *all);
void settings_moved(all_t *all);
void how_to_play_moved(all_t *all);
void start_game_moved(all_t *all);
void menu_clicked(all_t *all);
void settings_clicked(all_t *all);
void how_to_play_clicked(all_t *all);
void start_game_clicked(all_t *all);
void mouvement_event(all_t *all);
int check_left(all_t *all);
int check_right(all_t *all);
int check_up(all_t *all);
int check_down(all_t *all);
int print_and_change_positions(all_t *all);
void choose_a_class(all_t *all);
int draw_dialogs(all_t *all);
int interactive_dialog_after_class(all_t *all);
int dialog_give_potion_to_chief(all_t *all);
int print_and_timer(all_t *all, sfSprite *sprite);
void give_new_position_to_arrow(all_t *all, int x, int y);
void skin_selection(all_t *all);
void dialog_mayor_little_daughter(all_t *all);
void game_small_map(all_t *all);
int give_daughter_back_mayor(all_t *all);
int shop(all_t *all);
void print_change_position_2_bis(all_t *all, sfVector2f tmp_vector);
int set_string_change_position(all_t *all);
int draw_dialogs_bis(all_t *all);
int give_daughter_bis(all_t *all, sfSprite *sprite, sfTexture *texture,
int diag);
int sf_set_pos_bis(all_t *all);
void god_benediction_bis(all_t *all, sfSprite *sprite, sfTexture *texture);
int events_give_daughter_back_mayor(all_t *all, sfSprite **sprite,
sfTexture **texture);
void move_rect_perso_girl(all_t *all);
int settings_menu(all_t *all);
void key_down_event_settings_menu(all_t *all);
void key_up_event_settings_menu(all_t *all);
int get_skin_4(all_t *all);
int get_skin_5(all_t *all);
void stop_and_play_denied_payment_sound(all_t *all);
void give_new_position_to_confirm_sprite(all_t *all, int x, int y);
int set_all_stat_texts(all_t *all);
int display_shop_bis(all_t *all);
int dead_body_dialog(all_t *all);
int god_benediction_dialog(all_t *all);
void left_right_up_down(all_t *all);
void move_cursor_mini_map(all_t *all, int direction);
void key_enter_event_settings_menu(all_t *all);
int check_if_select_a_class(all_t *all);
int draw_dialogs_6(all_t *all);
void print_and_change_positions_6(all_t *all);
int menu_managment(all_t *all);
int menu(all_t *all);
void settings(all_t *all);
void how_to_play(all_t *all);
void start_game(all_t *all);
void timer_menu(all_t *all);
void check_basic_events_menu(all_t *all, sfEvent);
void check_events_menu(all_t *all);
void check_key_up_menu(all_t *all);
void check_key_down_menu(all_t *all);
int check_side_keys_quit_menu(all_t *all, int);
int quit_menu(all_t *all);
int pause_menu(all_t *all);
void set_stat_for_archer(all_t *all);
void set_stat_for_warrior(all_t *all);
void set_stat_for_tank(all_t *all);
void stop_and_play_click_sound(all_t *all);
int events_section_0(all_t *all, int x, int y);
void events_section_bestiary(all_t *all, int x, int y);
int event_all_menu_menu(all_t *all);
int event_inventaire_map_pause_2(all_t *all);
int hp_hud(all_t *all);
int fight(all_t *all);
void gobelin_attack(all_t *all);
void move_rect_gobelin(all_t *all);
int animation_attack_sword(all_t *all);
int reset_value_bis(all_t *all);
void change_combat_choice(all_t *all);
void flee_event(all_t *all);
void combat_event(all_t *all);
void second_gobelin_attack(all_t *all);
void animation_gobelin_die(all_t *all);
void animation_gobelin2_die(all_t *all);
int animation_girl(all_t *all);
void move_cursor(all_t *all);
int fight_second_monster(all_t *all);
void enemy_turn(all_t *all);
void select_attack_choice(all_t *all);
void draw_shield(all_t *all);
void select_fight_choice(all_t *all);
void change_texture_hp_enemie(all_t *all);
void change_texture_hp_enemie2(all_t *all);
void change_texture_hp_blue(all_t *all);
void change_texture_hp_blue2(all_t *all);
void change_texture_hp_girl(all_t *all);
void change_texture_hp_hero(all_t *all);
void animation_blue_die(all_t *all);
void animation_blue2_die(all_t *all);
void move_rect_blue_monsters(all_t *all);
int boss_fight(all_t *all);
void reset_value_end_fight1(all_t *all);
void set_boss_position(all_t *all);
void change_texture_hp_boss(all_t *all);
void animation_boss_die(all_t *all);
void move_rect_boss(all_t *all);
void reset_value_blue_monster(all_t *all);
void reset_value_end_fight_tuto(all_t *all);
int fight_tuto(all_t *all);
int init_check_placement_inventory_tab(all_t *all);
void use_potion(all_t *all);
void end_screen(all_t *all);
void left(all_t *all);
void right(all_t *all);
void up(all_t *all);
void down(all_t *all);
void right_side_map(all_t *all);
void left_side_map(all_t *all);
void up_side_map(all_t *all);
void down_side_map(all_t *all);
int player_attack(all_t *all);
void damage_to_player(all_t *all);
int mayor_asking_to_find_her_daughter(all_t *all);
int old_man_dialog(all_t *all);
int old_man_key_enter(all_t *all, int diag, sfSprite **sprite,
sfTexture **texture);
void old_man_key_up(all_t *all, int diag);
void old_man_key_down(all_t *all, int diag);
int old_man_key_right_left(all_t *all, int diag, int x, int y);
void old_man_events_manager(all_t *all, sfEvent event, int diag);
int enter_diag_1(all_t *all, sfSprite **sprite, sfTexture **texture);
int enter_diag_2(all_t *all, sfSprite **sprite, sfTexture **texture);
int enter_diag_3(all_t *all, sfSprite **sprite, sfTexture **texture);
int enter_diag_4(all_t *all, sfSprite **sprite, sfTexture **texture);
int enter_diag_5_or_6(all_t *all, int diag);
int ev_little_daughter_diag(int diag, sfSprite **sprite, sfTexture **texture);
void event_start(all_t *all);
void event_mountain(all_t *all);
void event_plain(all_t *all);
void event_cave_down(all_t *all, int random);
void event_cave_left(all_t *all, int random);
void event_cave_right(all_t *all, int random);
void event_cave_up(all_t *all, int random);
void event_end(all_t *all);
void event_cave(all_t *all);
void check_shop_events_enough_money(all_t *all, int i);
void _init_give_daughter_back_mayor(all_t *all, sfSprite **spr,
sfTexture *tex);
void all_double_direction(all_t *all);
void left_and_right(all_t *all);
void set_draw_pos_perso_and_girl(all_t *all);
void set_and_draw_sprite_text(all_t *all);
void up_and_down(all_t *all);
int win_screen_event(all_t *all);
char **make_tab_texture(all_t *all);
int test_binary_is_here(all_t *all);
char **make_tab_texture(all_t *all);
int check_all_font(struct dirent *dir, all_t *all);
void tab_4(all_t *all);
void tab_5(all_t *all);
void tab_6(all_t *all);
void tab_7(all_t *all);
void tab_8(all_t *all);
void my_putchar(char);
int my_put_nbr(int);
void my_putstr(char *str);
int my_strlen(char const *str);
int my_getnbr(char const *);
char *my_revstr(char *);
char *my_itoa(int);
int my_atoi(char *str);
char *my_strcat(char *dest, char *src);
int my_strcomp(char *temp, char *test);
