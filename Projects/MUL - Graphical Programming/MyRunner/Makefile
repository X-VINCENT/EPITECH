##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Xavier VINCENT
##

NAME			=			my_runner

SRC_MAIN		=			$(addprefix src/,					\
							main.c)

SRC				=			$(addprefix src/,					\
							destroy/destroy_home_menu.c			\
							destroy/destroy_pause_menu.c		\
							destroy/destroy_results_menu.c		\
							destroy/destroy_settings_menu.c		\
							destroy/destroy.c					\
							errors/check_env.c					\
							errors/check_file.c					\
							errors/check_map.c					\
							errors/help.c						\
							game/animation.c					\
							game/check_contact.c				\
							game/display/display_home_menu.c	\
							game/display/display_map.c			\
							game/display/display_pause_menu.c	\
							game/display/display_results_menu.c	\
							game/display/display_settings_menu.c\
							game/display/display.c				\
							game/event/event.c					\
							game/event/key_event.c				\
							game/event/mouse_button_event_2.c	\
							game/event/mouse_button_event.c		\
							game/event/mouse_moved_event.c		\
							game/my_runner.c					\
							game/reset.c						\
							game/score.c						\
							game/settings_menu.c				\
							game/sounds.c						\
							init/init_array.c					\
							init/init_game.c					\
							init/init_home_menu.c				\
							init/init_map.c						\
							init/init_pause_menu.c				\
							init/init_results_menu_2.c			\
							init/init_results_menu.c			\
							init/init_runner.c					\
							init/init_settings_menu.c)

SRC_CSFML		= 			$(addprefix csfml/,					\
							audio.c								\
							clock.c								\
							init.c								\
							sprite.c							\
							text.c								\
							window.c)

SRC_TESTS		=			$(addprefix tests/,					\
							test_check_env.c					\
							test_check_file.c					\
							test_check_map.c)

SRC_TESTS		+=			$(SRC)
SRC_TESTS		+=			$(SRC_CSFML)

CC				=			gcc

RM				=			rm -rf

OBJ_MAIN		=			$(SRC_MAIN:.c=.o)

OBJ				=			$(SRC:.c=.o) $(SRC_CSFML:.c=.o)

CFLAGS 			+= 			-I./include

LDFLAGS 		= 			-L./lib -lmy
LDFLAGS			+=			-lcsfml-graphics -lcsfml-window
LDFLAGS			+=			-lcsfml-system -lcsfml-audio

CRITERION		=			--coverage -lcriterion

END				=			\033[0m
BOLD			=			\033[1m
GREY			=			\033[30m
RED				=			\033[31m
GREEN			=			\033[32m
BLUE			=			\033[34m

all: 		$(NAME)

$(NAME):	check $(OBJ) $(OBJ_MAIN) unzip
	@echo "$(BOLD)$(GREY)******* COMPILING LIBS... *******$(END)"
	@make -C lib re
	@echo "$(GREEN)*******   LIBS COMPILED   *******$(END)"
	@echo ""
	@echo "$(BOLD)$(GREY)******* COMPILING SRCS... *******$(END)"
	@$(CC) -o $(NAME) $(OBJ) $(OBJ_MAIN) $(LDFLAGS)
	@echo "$(GREEN)*******   SRCS COMPILED   *******$(END)"
	@echo ""

check:
	@echo "$(BOLD)$(GREY)******* CHECKING FILES... *******$(END)"
	if test -s assets.tar.gz; \
	then echo "$(GREEN)Assets already zipped$(END)"; \
	else tar -zcvf assets.tar.gz ./assets && $(RM) ./assets; \
	fi

unzip:
	@echo "$(BOLD)$(GREY)******* UNZIPPING ASSETS... *******$(END)"
	tar -zxvf assets.tar.gz
	$(RM) assets.tar.gz
	@echo "$(GREEN)*******   ASSETS UNZIPPED   *******$(END)"

clean:
	@echo "$(BOLD)$(GREY)*******   CLEANING...   *******$(END)"
	@$(RM) $(OBJ_MAIN)
	@$(RM) $(OBJ)
	@$(RM) *.gcda
	@$(RM) *.gcno
	@make -C lib clean
	@echo "$(RED)******* CLEAN COMPLETED *******$(END)"
	@echo ""

fclean:		clean
	@$(RM) $(NAME)
	@make -C lib fclean
	@echo "$(BOLD)$(RED)******* FULL CLEAN COMPLETED *******$(END)"
	@echo ""

re:			clean all

tests_run:	check unzip
	@echo "$(BOLD)$(GREY)******* COMPILING... *******$(END)"
	@make -C lib re
	@echo "$(GREEN)******* LIBS COMPILED *******$(END)"
	@echo ""
	@echo "$(BOLD)$(GREY)******* COMPILING TESTS... *******$(END)"
	@$(CC) -o unit_tests $(SRC_TESTS) $(CFLAGS) $(LDFLAGS) $(CRITERION)
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

my_tests: 	tests_run cover
	@echo "$(BOLD)$(GREY)******* CLEANING... *******$(END)"
	@$(RM) $(NAME)
	@$(RM) $(OBJ_MAIN)
	@$(RM) $(OBJ)
	@$(RM) *.gcda
	@$(RM) *.gcno
	@make -C lib clean
	@echo "$(RED)******* CLEAN COMPLETED *******$(END)"
	@echo ""

.PHONY: 	all $(NAME) check unzip clean fclean re tests_run cover my_tests
