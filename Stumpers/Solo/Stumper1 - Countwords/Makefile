##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Xavier VINCENT
##

NAME			=			countwords

SRC_MAIN		=			$(addprefix src/,			\
						main.c)

SRC			=			$(addprefix src/,			\
						my_strcpy.c				\
						countwords.c)

SRC_TESTS		=			$(addprefix tests/,			\
						)

SRC_TESTS		+=			$(SRC)

CC			=			gcc

RM			=			rm -rf

OBJ_MAIN		=			$(SRC_MAIN:.c=.o)

OBJ			=			$(SRC:.c=.o)

CFLAGS 			+= 			-I./include

CRITERION		=			--coverage -lcriterion

END			=			"\033[0m"
BOLD			=			"\033[1m"
GREY			=			"\033[30m"
RED			=			"\033[31m"
GREEN			=			"\033[32m"
BLUE			=			"\033[34m"

all: 			$(NAME)

$(NAME):		$(OBJ) $(OBJ_MAIN)
	@echo "$(BOLD)$(GREY)******* COMPILING SRCS... *******$(END)"
	@$(CC) -o $(NAME) $(OBJ) $(OBJ_MAIN)
	@echo "$(GREEN)*******   SRCS COMPILED   *******$(END)"
	@echo ""

clean:
	@echo "$(BOLD)$(GREY)*******   CLEANING...   *******$(END)"
	@$(RM) $(OBJ_MAIN)
	@$(RM) $(OBJ)
	@$(RM) *.gcda
	@$(RM) *.gcno
	@echo "$(RED)******* CLEAN COMPLETED *******$(END)"
	@echo ""

fclean:			clean
	@$(RM) $(NAME)
	@echo "$(BOLD)$(RED)******* FULL CLEAN COMPLETED *******$(END)"
	@echo ""

re:			clean all

tests_run:
	@echo "$(BOLD)$(GREY)******* COMPILING TESTS... *******$(END)"
	@$(CC) -o unit_tests $(SRC_TESTS) $(CFLAGS) $(CRITERION)
	@echo "$(GREEN)******* TESTS COMPILED *******$(END)"
	@echo ""
	@echo "$(GREEN)******* TESTING... *******$(END)"
	@./unit_tests
	@rm unit_tests
	@echo "$(BLUE)******* TESTS COMPLETED *******$(END)"
	@echo ""

cover:
	gcovr --exclude tests/
	gcovr --branches --exclude tests/

my_tests: 		tests_run cover
	@echo "$(BOLD)$(GREY)******* CLEANING... *******$(END)"
	@$(RM) $(NAME)
	@$(RM) $(OBJ_MAIN)
	@$(RM) $(OBJ)
	@$(RM) *.gcda
	@$(RM) *.gcno
	@echo "$(RED)******* CLEAN COMPLETED *******$(END)"
	@echo ""

.PHONY: 		all $(NAME) clean fclean re tests_run cover my_tests
