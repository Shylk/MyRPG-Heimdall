##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## makefile
##

SRC	=	my_getnbr.c 	\
		my_putchar.c	\
		my_put_nbr.c	\
		my_putstr.c	\
		my_revstr.c	\
		my_strlen.c	\
		my_itoa.c	\
		my_atoi.c	\
		my_strcat.c	\
		my_strcomp.c	\

OBJ	=	$(SRC:.c=.o)

NAME = libmy.a

all: $(NAME)

$(NAME):	$(OBJ)
	@ ar rc $(NAME) $(OBJ)
	@ echo "[INFO]: lib compiled !"

%.o:	%.c
	@ echo "[INFO]: Compiling" $<
	@ gcc -o $@ -c $<

clean:
	@ rm -f $(OBJ)
	@ echo "[INFO]: files removed !"

fclean: clean
	@ rm -f $(NAME)
	@ echo "[INFO]: removed binary ->" $(NAME)

re:	fclean all
