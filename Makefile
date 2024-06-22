##
## EPITECH PROJECT, 2023
## makefile
## File description:
## pour my_printf
##

CC	=	gcc	-Wall -Wextra

SRC	=	src/my_hunter.c	\
		src/my_putstr.c	\
		src/posduck.c	\
		src/click_start.c	\
		src/open_window.c	\
		src/print_start.c	\
		src/game.c

OBJ	=	$(SRC:.c=.o)

NAME	=	my_hunter

CFLAGS	=	-lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio

CFLAGS	+=	-iquote include

all: $(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(CFLAGS) $(OBJ)
clean:
	rm -f $(OBJ)
	rm -f *#
	rm -f *~

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
