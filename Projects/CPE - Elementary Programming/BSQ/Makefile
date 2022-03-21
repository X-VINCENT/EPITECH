##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile
##

NAME		=	bsq

SRC			=	main.c						\
				src/bsq.c					\
				src/display.c				\
				src/errors_handle.c			\
				src/find_square.c			\
				src/load_map.c

OBJ			= 	$(SRC:.c=.o)

CFLAGS		= 	-I./include

LDFLAGS		= 	-L./lib -lmy

SRC_TESTS	=	tests/tests_bsq.c

all:	$(NAME)

$(NAME):	$(OBJ)
	make -C lib/my re
	gcc -o $(NAME) $(OBJ) $(LDFLAGS)

tests_run: re
	gcc -o unit_tests $(OBJ) $(SRC_TESTS) $(LDFLAGS) --coverage -lcriterion
	-./unit_tests
	rm unit_tests

cover:
	gcovr --exclude tests/
	gcovr --branches --exclude tests/

clean:
	rm -f $(NAME)
	rm -f *.gcda
	rm -f *.gcno
	rm -f $(OBJ)
	make -C lib/my clean

fclean:	clean
	make -C lib/my fclean

re: fclean all

my_tests: tests_run cover
	rm -f $(NAME)
	rm -f *.gcda
	rm -f *.gcno
	rm -f lib/libmy.a
	rm -f include/my.h
	make -C lib/my clean
