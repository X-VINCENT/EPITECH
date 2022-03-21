##
## EPITECH PROJECT, 2022
## Makefile for My Sokoban
## File description:
## Xavier VINCENT
##

NAME            =   		my_sokoban
TEST_NAME       =			unit_tests

SRC_MAIN        =   		$(addprefix src/,                       \
							main.c)

SRC             =   		$(addprefix src/,                       \
							destroy/destroy_data.c                  \
							errors/check_map.c                      \
							errors/help.c                           \
							init/backup_map.c                       \
							init/init_data.c                        \
							init/init_map_data.c                    \
							init/init_objects.c                     \
							tools/display_map.c                     \
							tools/get_nb_blocked_boxes.c            \
							tools/get_nb_objects.c                  \
							tools/get_player_position.c             \
							tools/move_box.c                        \
							tools/move_player.c                     \
							engine.c                                \
							my_sokoban.c)

SRC_TESTS       =   		$(addprefix tests/,                     \
							test_get_nb_blocked_boxes.c             \
							test_get_nb_objects.c                   \
							test_get_player_position.c              \
							test_move_box.c)
SRC_TESTS       +=  		$(SRC)

override CC     =   		gcc
override RM     =   		rm -rf

OBJ_MAIN        =   		$(SRC_MAIN:.c=.o)
OBJ             =   		$(SRC:.c=.o)

CFLAGS          +=  		-Iinclude
LDFLAGS         =   		-Llib -lmy -lncurses
CRITERION       =   		--coverage -lcriterion

COMPILING_LIBS  =   		"*******  COMPILING LIBS.  *******"
LIBS_COMPILED   =   		"*******   LIBS COMPILED   *******"
COMPILING_SRCS  =   		"*******  COMPILING SRCS.  *******"
SRCS_COMPILED   =   		"*******   SRCS COMPILED   *******"
COMPILING_TESTS =   		"*******  COMPILING TESTS  *******"
TESTS_COMPILED  =   		"*******  TESTS COMPILED.  *******"
CLEANING        =   		"*******     CLEANING.     *******"
CLEANED         =   		"*******  CLEAN COMPLETED  *******"
TESTING         =   		"*******      TESTING.     *******"
TESTED          =   		"*******  TESTS FINISHED.  *******"

all:            $(NAME)

$(NAME):        $(OBJ_MAIN) $(OBJ)
	@echo ""
	@echo $(COMPILING_LIBS)
	make -C lib re
	@echo $(LIBS_COMPILED)
	@echo ""
	@echo $(COMPILING_SRCS)
	@echo cc "\t" -o $(OBJ_MAIN)
	@echo cc "\t" -o $(OBJ)
	@$(CC) -o $(NAME) $(OBJ_MAIN) $(OBJ) $(CFLAGS) $(LDFLAGS)
	@echo $(SRCS_COMPILED)
	@echo ""

clean:
	@echo ""
	@echo $(CLEANING)
	$(RM) $(OBJ_MAIN)
	$(RM) $(OBJ)
	$(RM) *.gcda
	$(RM) *.gcno
	@make -C lib clean
	@echo $(CLEANED)
	@echo ""

fclean:			clean
	$(RM) $(NAME)
	@make -C lib fclean

re:			clean all

tests_run:
	@echo ""
	@echo $(COMPILING_LIBS)
	make -C lib re
	@echo $(LIBS_COMPILED)
	@echo ""
	@echo $(COMPILING_TESTS)
	$(CC) -o $(TEST_NAME) $(SRC_TESTS) $(CFLAGS) $(LDFLAGS) $(CRITERION)
	@echo $(TESTS_COMPILED)
	@echo ""
	@echo $(TESTING)
	./$(TEST_NAME)
	$(RM) $(TEST_NAME)
	@echo $(TESTED)
	@echo ""

cover:
	gcovr --exclude tests/
	gcovr --branches --exclude tests/

my_tests: 		tests_run cover fclean

.PHONY: 		all $(NAME) clean fclean re tests_run cover my_tests
