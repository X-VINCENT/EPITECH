##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Xavier VINCENT
##

NAME			=			palindrome

SRC_MAIN		=			$(addprefix src/,		\
						main.c)

SRC			=			$(addprefix src/,		\
						palindrome.c)

SRC_TESTS		=			$(addprefix tests/,		\
						test_my_strlen.c		\
						test_check_char.c		\
						test_palindrome.c)

SRC_TESTS		+=			$(SRC)

CC			=			gcc

RM			=			rm -rf

OBJ_MAIN		=			$(SRC_MAIN:.c=.o)

OBJ			=			$(SRC:.c=.o)

CFLAGS 			+= 			-Iinclude

CRITERION		=			--coverage -lcriterion

all: 			$(NAME)

$(NAME):		$(OBJ) $(OBJ_MAIN)
	$(CC) -o $(NAME) $(OBJ) $(OBJ_MAIN) $(LDFLAGS)

clean:
	$(RM) $(OBJ_MAIN)
	$(RM) $(OBJ)
	$(RM) *.gcda
	$(RM) *.gcno

fclean:			clean
	$(RM) $(NAME)

re:			clean all

tests_run:
	$(CC) -o unit_tests $(SRC_TESTS) $(CFLAGS) $(LDFLAGS) $(CRITERION)
	./unit_tests
	rm unit_tests

cover:
	gcovr --exclude tests/
	gcovr --branches --exclude tests/

my_tests: 		tests_run cover
	$(RM) $(NAME)
	$(RM) $(OBJ_MAIN)
	$(RM) $(OBJ)
	$(RM) *.gcda
	$(RM) *.gcno

.PHONY: 		all $(NAME) clean fclean re tests_run cover my_tests
