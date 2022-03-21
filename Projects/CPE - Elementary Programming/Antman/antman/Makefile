##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Xavier VINCENT
##

NAME			=			antman

SRC_MAIN		=			$(addprefix src/,					\
							main.c)

SRC				=			$(addprefix src/,					\
							core/antman.c						\
							core/lzw.c							\
							core/lzw2.c							\
							errors/help.c)

SRC_TESTS		=			$(addprefix tests/,					\
							test_antman.c						\
							test_help.c							\
							test_lzw.c							\
							test_lzw2.c)

SRC_TESTS		+=			$(SRC)

CC				=			gcc

RM				=			rm -rf

OBJ_MAIN		=			$(SRC_MAIN:.c=.o)

OBJ				=			$(SRC:.c=.o)

CFLAGS 			+= 			-I./include -g

LDFLAGS 		= 			-L../lib -lmy

CRITERION		=			--coverage -lcriterion

END				=			"\033[0m"
BOLD			=			"\033[1m"
GREY			=			"\033[30m"
RED				=			"\033[31m"
GREEN			=			"\033[32m"
BLUE			=			"\033[34m"

all: 			$(NAME)

$(NAME):		$(OBJ) $(OBJ_MAIN)
	@echo "$(BOLD)$(GREY)******* COMPILING LIBS... *******$(END)"
	@make -C ../lib re
	@echo "$(GREEN)*******   LIBS COMPILED   *******$(END)"
	@echo ""
	@echo "$(BOLD)$(GREY)******* COMPILING SRCS... *******$(END)"
	@$(CC) -o $(NAME) $(OBJ) $(OBJ_MAIN) $(LDFLAGS)
	@echo "$(GREEN)*******   SRCS COMPILED   *******$(END)"
	@echo ""

clean:
	@echo "$(BOLD)$(GREY)*******   CLEANING...   *******$(END)"
	@$(RM) $(OBJ_MAIN)
	@$(RM) $(OBJ)
	@$(RM) *.gcda
	@$(RM) *.gcno
	@make -C ../lib clean
	@echo "$(RED)******* CLEAN COMPLETED *******$(END)"
	@echo ""

fclean:			clean
	@$(RM) $(NAME)
	@make -C ../lib fclean
	@echo "$(BOLD)$(RED)******* FULL CLEAN COMPLETED *******$(END)"
	@echo ""

re:			clean all

tests_run:
	@echo "$(BOLD)$(GREY)******* COMPILING... *******$(END)"
	@make -C ../lib re
	@echo "$(GREEN)******* LIBS COMPILED *******$(END)"
	@echo ""
	@echo "$(BOLD)$(GREY)******* COMPILING TESTS... *******$(END)"
	@$(CC) -o unit_tests $(SRC_TESTS) $(CFLAGS) $(LDFLAGS) $(CRITERION)
	@echo "$(GREEN)******* TESTS COMPILED *******$(END)"
	@echo ""
	@echo "$(GREEN)******* TESTING... *******$(END)"
	@./unit_tests
	@$(RM) unit_tests
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
	@make -C ../lib clean
	@echo "$(RED)******* CLEAN COMPLETED *******$(END)"
	@echo ""

.PHONY: 		all $(NAME) clean fclean re tests_run cover my_tests
