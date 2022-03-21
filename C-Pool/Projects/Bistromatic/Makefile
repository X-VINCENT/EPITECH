##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile
##

NAME		=	calc

SRC			=	src/evalexpr.c			\
				src/evalexpr2.c			\
				src/check.c				\
				src/check2.c

SRC_TESTS	=	tests/test_summands.c			\
				tests/test_factors.c			\
				tests/test_check.c

all:	$(NAME)

$(NAME):
	make -C lib/my re
	gcc -o $(NAME) main.c $(SRC) -L./lib -lmy

tests_run: re
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
	make -C lib/my fclean

re: fclean all

my_tests: tests_run cover
