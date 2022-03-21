##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Xavier VINCENT
##

NAME			=			libmy.a

SRC				=			src/my_edit_str.c				\
							src/my_put_get.c				\
							src/modstr.c					\
							src/my_printf.c					\
							src/my_printf2.c				\
							src/my_printf3.c

SRC_TESTS		=			tests/tests_my_printf.c

OBJ				=			$(SRC:.c=.o)

all: $(NAME)

$(NAME):		$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)
	rm -f *.gcda
	rm -f *.gcno

fclean:			clean
	rm -f $(NAME)

re:				fclean all

unit_tests:		re
	gcc -o unit_tests $(SRC) $(SRC_TESTS) -L -lmy --coverage -lcriterion

tests_run:		unit_tests
	./unit_tests
	rm unit_tests

cover:
	gcovr --exclude tests/
	gcovr --branches --exclude tests/

my_tests: tests_run cover
	rm -f $(OBJ)
	rm -f $(NAME)
	rm -f *.gcda
	rm -f *.gcno
