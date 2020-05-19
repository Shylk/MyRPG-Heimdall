##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## makefile
##

SRC	=	main.c	\
		declare/declare_struct.c	\
		declare/all.c	\
		declare/int.c	\
		declare/music.c	\
		declare/origin.c	\
		declare/pos.c	\
		declare/pos_2.c	\
		declare/rect.c	\
		declare/sprite.c	\
		declare/sprite_2.c	\
		declare/sprite_3.c	\
		declare/sprite_4.c	\
		declare/sprite_5.c	\
		declare/text.c	\
		declare/text_2.c	\
		declare/text_3.c	\
		declare/texture.c	\
		cursor.c	\
		analyse_events.c	\
		analyse_events_2.c	\
		event.c	\
		mouvement_event.c	\
		choices.c	\
		script.c	\
		loop_in_game.c	\
		game_plain.c	\
		game_plain_2.c	\
		game_plain_call_direction.c	\
		game_small_map.c	\
		check_move_on_item.c	\
		menu_managment.c	\
		menu/menu.c	\
			menu/menu_2.c	\
			menu/quit_menu.c	\
			menu/settings_menu.c	\
			menu/settings_menu_2.c	\
		move_rect.c	\
		check_pixel_color.c	\
		dialog_old_priest.c	\
			dialog_old_priest_2.c	\
			dialog_old_priest_3.c	\
		dialog_with_chief_after_class.c	\
		dialog_give_potion_to_chief.c	\
		dialog_mayor_asking_find_daughter.c	\
		dialog_mayor_daughter.c	\
		dialog_mayor_daughter_2.c	\
			combat/fight.c          \
			combat/hero_attack.c    \
			combat/gobelin_attack.c \
			combat/hud_fight.c      \
			combat/enemy_turn.c	\
			combat/change_texture_hp.c	\
			combat/change_texture_hp2.c	\
			combat/fight_blue_monster.c	\
			combat/tuto_fight_1v1.c	\
			combat/boss_fight.c     \
			combat/boss_fight_management.c  \
			combat/gobelin_management.c     \
			combat/damage_to_player.c	\
			combat/second_fight_monster_management.c	\
				combat/event/fight_event.c      \
		skin_selection.c	\
		skin_selection_2.c	\
		shop.c	\
		shop_2.c	\
		pause_menu.c	\
			pause_menu_2.c	\
		set_player_stats.c	\
			ingame/event_cave.c	\
			ingame/event_plain.c	\
			ingame/event_down.c	\
			ingame/event_up.c	\
			ingame/event_left.c	\
			ingame/event_right.c	\
			ingame/event_little_map.c	\
			ingame/game_loop.c	\
		select_class.c	\
		draw_start_dialogs.c	\
		draw_start_dialogs_2.c	\
		print_and_change_positions.c	\
		print_and_change_positions_2.c	\
		print_and_change_positions_3.c	\
		init_vector_glow.c	\
		use_card_skill_tree.c	\
		check_case_inventory.c	\
		check_card_1.c	\
		check_card_2.c	\
		check_error_launch.c	\
		check_error_launch_2.c	\
		check_error_launch_3.c	\
		check_error_launch_4.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	my_rpg

FLAGS = -l csfml-graphics -l csfml-audio -l csfml-system -l csfml-window -Wextra -Wall

all: $(NAME)

$(NAME):	$(OBJ)
	@ make -C lib/my
	@ echo "[INFO]: lib compiled !"
	@ gcc -o $(NAME) $(OBJ) $(FLAGS) -L lib/my -lmy
	@ echo "[OK]: Compiled succesfully !"
	@ rm -f $(OBJ)
	@ echo "[INFO]: Removed compiled files"
	@ rm -f *~ *#
	@ echo "[INFO]: Removed useless files"
	@ make clean -C lib/my
	@ echo "[INFO]: removed lib .o files"

%.o:	%.c
	@ echo "[INFO]: Compiling" $<
	@ gcc -o $@ -c $< -L lib/my -lmy

clean:
	@ rm -f $(OBJ)
	@ echo "[INFO]: Removed compiled files"
	@ rm -f *~ *#
	@ echo "[INFO]: Removed useless files"
	@ make clean -C lib/my
	@ echo "[INFO]: removed lib .o files"

fclean:	clean
	@ rm -f $(NAME)
	@ echo "[INFO]: Removed binary ->" $(NAME)
	@ make fclean -C lib/my
	@ echo "[INFO]: removed lib"

re: fclean all

.PHONY: all re clean fclean
