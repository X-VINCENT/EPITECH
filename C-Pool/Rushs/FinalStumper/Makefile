##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile
##

NAME		=	rush3

SRC			=	rush3.c					\
				my_print_result.c

SRC_TESTS	=	tests/test_rush_file.c	\
				tests/test_rush3.c

all:	$(NAME)

$(NAME):
	make -C lib/my re
	gcc -o $(NAME) main.c $(SRC) -L./lib -lmy

tests_run:
	gcc -o unit_tests $(SRC) -L./lib -lmy $(SRC_TESTS) --coverage -lcriterion
	-./unit_tests
	rm unit_tests

cover:
	gcovr --exclude tests/
	gcovr --branches --exclude tests/

clean:
	rm -f $(NAME)
	rm -f *.gcda
	rm -f *.gcno
	make -C lib/my clean

fclean:	clean
	make -C lib/my clean

re: fclean all

my_tests: re tests_run cover
