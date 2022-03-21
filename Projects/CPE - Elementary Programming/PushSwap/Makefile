##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Xavier VINCENT
##

NAME				=				push_swap

CC					=				gcc

RM					=				rm -rf

SRC_MAIN			=				src/main.c

SRC					=				src/algorithm/check_list.c				\
									src/algorithm/list.c					\
									src/algorithm/pushswap.c				\
									src/algorithm/sort.c					\
									src/errors/help.c						\
									src/errors/errors.c						\
									src/instructions/instructions_p.c		\
									src/instructions/instructions_r.c		\
									src/instructions/instructions_s.c

SRC_TESTS 			=				tests/test_check_list.c					\
									tests/test_errors.c						\
									tests/test_help.c						\
									tests/test_instructions_s.c				\
									tests/test_list.c						\
									tests/test_pushswap.c

OBJ_MAIN 			=				$(SRC_MAIN:.c=.o)

OBJ					=				$(SRC:.c=.o)

CFLAGS 				= 				-I./include

LDFLAGS 			= 				-L./lib -lmy

CRITERION			=				--coverage -lcriterion

all:								$(NAME)

$(NAME):							$(OBJ) $(OBJ_MAIN)
	make -C lib re
	$(CC) -o $(NAME) $(OBJ) $(OBJ_MAIN) $(LDFLAGS)

clean:
	make -C lib clean
	$(RM) $(OBJ_MAIN)
	$(RM) $(OBJ)
	rm -f *.gcda
	rm -f *.gcno

fclean:								clean
	make -C lib fclean
	$(RM) $(NAME)

re:									fclean all

tests_run: 							re
	make -C lib re
	$(CC) -o unit_tests $(SRC) $(SRC_TESTS) $(CFLAGS) $(LDFLAGS) $(CRITERION)
	-./unit_tests
	$(RM) unit_tests

cover:
	gcovr --exclude tests/
	gcovr --branches --exclude tests/

my_tests: 							tests_run cover
	make -C lib clean
	$(RM) $(NAME)
	$(RM) *.gcda
	$(RM) *.gcno

.PHONY:								all clean fclean re
