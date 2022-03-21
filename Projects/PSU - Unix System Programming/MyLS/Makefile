##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Xavier VINCENT
##

NAME			=			my_ls

SRC				=			lib/my_put_nbr.c		\
							lib/my_putchar.c		\
							lib/my_putstr.c			\
							lib/my_strcat.c			\
							lib/my_strcmp.c			\
							lib/my_strcpy.c			\
							lib/my_strlen.c			\
							src/basic_ls_l.c		\
							src/basic_ls.c			\
							src/display.c			\
							src/errors.c			\
							src/init_struct.c		\
							src/main.c				\
							src/my_ls.c				\
							src/sort_filenames.c	\
							src/sort_paths.c

SRC_TESTS		=			

OBJ				=			$(SRC:.c=.o)

CFLAGS 			= 			-I./include

LDFLAGS 		= 			-L./my_printf -lmy

CRITERION		=			--coverage -lcriterion

all: 			$(NAME)

$(NAME):		$(OBJ)
	make -C my_printf re
	gcc -o $(NAME) $(OBJ) $(LDFLAGS)

clean:
	rm -f $(OBJ)
	rm -f *.gcda
	rm -f *.gcno
	make -C my_printf clean

fclean:			clean
	rm -f $(NAME)
	make -C my_printf fclean

re:				fclean all

tests_run:
	make -C my_printf re
	gcc -o unit_tests $(SRC) $(SRC_TESTS) $(CFLAGS) $(LDFLAGS) $(CRITERION)
	./unit_tests
	rm unit_tests

cover:
	gcovr --exclude test/
	gcovr --branches --exclude test/

my_tests: 		tests_run cover
	rm -f $(NAME)
	rm -f $(OBJ)
	rm -f *.gcda
	rm -f *.gcno
	make -C my_printf clean
