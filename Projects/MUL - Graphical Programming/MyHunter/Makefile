##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Xavier VINCENT
##

CC = gcc

CFLAGS = -Iinclude

LDFLAGS = -lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio

NAME			=			my_hunter

SRC				=			src/destroy/destroy_all.c			\
							src/destroy/destroy_sounds.c		\
							src/destroy/destroy_textures.c		\
							src/init/init_birds.c				\
							src/init/init_sounds.c				\
							src/init/init_structs.c				\
							src/birds.c							\
							src/display.c						\
							src/errors.c 						\
							src/events.c						\
							src/my_hunter.c

all: $(NAME)

$(NAME):		$(OBJ)
	$(CC) $(CFLAGS) $(LDFLAGS) -o $(NAME) main.c $(SRC)

clean:
	rm -f *.gcda
	rm -f *.gcno

fclean:			clean
	rm -f $(NAME)

re:				fclean all
