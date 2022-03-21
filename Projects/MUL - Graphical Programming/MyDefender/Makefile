##
## EPITECH PROJECT, 2022
## Makefile for My Defender
## File description:
## Xavier VINCENT - Max PEIXOTO
##

NAME                =           my_defender
TEST_NAME           =           unit_tests

SRC_MAIN            =           $(addprefix src/,                            \
								main.c)

SRC                 =           $(addprefix src/,                            \
								destroy/bottom_gamebar/destroy.c             \
								destroy/home_menu/destroy.c                  \
								destroy/howtoplay_menu/destroy.c             \
								destroy/loading_screen/destroy.c             \
								destroy/maps/destroy.c                       \
								destroy/maps/plants.c                        \
								destroy/maps/score.c                         \
								destroy/maps/waves.c                         \
								destroy/maps/zombies.c                       \
								destroy/maps_menu/destroy.c                  \
								destroy/pause_menu/destroy.c                 \
								destroy/plants_menu/destroy.c                \
								destroy/popup_menu/destroy.c                 \
								destroy/results_screen/destroy.c             \
								destroy/settings_menu/destroy.c              \
								destroy/start_menu/destroy.c                 \
								destroy/stats_menu/destroy.c                 \
								destroy/top_bar/destroy.c                    \
								destroy/destroy_sounds.c                     \
								destroy/destroy.c                            \
								errors/check_env.c                           \
								errors/check_file.c                          \
								errors/check_maps.c                          \
								errors/check_pictures.c                      \
								errors/help.c                                \
								game/animation/maps/map1/move_zombies.c      \
								game/animation/maps/animate_plants.c         \
								game/animation/maps/animate_zombies.c        \
								game/animation/maps/check_damage.c           \
								game/animation/maps/move_sun.c               \
								game/animation/maps/score.c                  \
								game/animation/maps/zombie_hit_castle.c      \
								game/display/bottom_gamebar/display.c        \
								game/display/home_menu/cards.c               \
								game/display/home_menu/display.c             \
								game/display/howtoplay_menu/display.c        \
								game/display/loading_screen/display.c        \
								game/display/maps/map1/display.c             \
								game/display/maps/draw_infos.c               \
								game/display/maps/draw_objects.c             \
								game/display/maps/hits_and_result.c          \
								game/display/maps_menu/display.c             \
								game/display/plants_menu/cards.c             \
								game/display/plants_menu/display.c           \
								game/display/pause_menu/display.c            \
								game/display/pause_menu/buttons.c            \
								game/display/popup_menu/display.c            \
								game/display/results_screen/display.c        \
								game/display/settings_menu/bars.c            \
								game/display/settings_menu/display.c         \
								game/display/settings_menu/fps.c             \
								game/display/settings_menu/res.c             \
								game/display/start_menu/display.c            \
								game/display/stats_menu/display.c            \
								game/display/top_bar/display.c               \
								game/event/bottom_gamebar/key_pressed.c      \
								game/event/bottom_gamebar/mouse_moved.c      \
								game/event/bottom_gamebar/mouse_pressed.c    \
								game/event/home_menu/key_pressed.c           \
								game/event/home_menu/mouse_moved.c           \
								game/event/home_menu/mouse_pressed.c         \
								game/event/howtoplay_menu/key_pressed.c      \
								game/event/howtoplay_menu/mouse_moved.c      \
								game/event/howtoplay_menu/mouse_pressed.c    \
								game/event/maps/map1/key_pressed.c           \
								game/event/maps/map1/mouse_moved.c           \
								game/event/maps/map1/mouse_pressed.c         \
								game/event/maps/put_plants/money.c           \
								game/event/maps/put_plants/map1.c            \
								game/event/maps/put_plants/maps.c            \
								game/event/maps/event_fertilizer.c           \
								game/event/maps/event_transplanter.c         \
								game/event/maps/event_hover_plant.c          \
								game/event/maps_menu/key_pressed.c           \
								game/event/maps_menu/mouse_moved.c           \
								game/event/maps_menu/mouse_pressed.c         \
								game/event/pause_menu/key_pressed.c          \
								game/event/pause_menu/mouse_moved.c          \
								game/event/pause_menu/mouse_pressed.c        \
								game/event/plants_menu/key_pressed.c         \
								game/event/plants_menu/mouse_moved.c         \
								game/event/plants_menu/mouse_pressed.c       \
								game/event/popup_menu/key_pressed.c          \
								game/event/popup_menu/mouse_moved.c          \
								game/event/popup_menu/mouse_pressed.c        \
								game/event/results_screen/key_pressed.c      \
								game/event/results_screen/mouse_moved.c      \
								game/event/results_screen/mouse_pressed.c    \
								game/event/settings_menu/key_pressed.c       \
								game/event/settings_menu/mouse_moved.c       \
								game/event/settings_menu/mouse_pressed.c     \
								game/event/start_menu/key_pressed.c          \
								game/event/start_menu/mouse_moved.c          \
								game/event/start_menu/mouse_pressed.c        \
								game/event/stats_menu/key_pressed.c          \
								game/event/stats_menu/mouse_moved.c          \
								game/event/stats_menu/mouse_pressed.c        \
								game/event/top_bar/key_pressed.c             \
								game/event/top_bar/mouse_moved.c             \
								game/event/top_bar/mouse_pressed.c           \
								game/event/event_1.c                         \
								game/event/event_2.c					     \
								game/event/event_3.c					     \
								game/tools/audio.c                           \
								game/tools/create_plant.c                    \
								game/tools/fps.c                             \
								game/tools/get_time.c                        \
								game/tools/res.c                             \
								game/tools/save_data.c                       \
								game/my_defender.c                           \
								init/bottom_gamebar/buttons.c                \
								init/bottom_gamebar/init.c                   \
								init/bottom_gamebar/objects.c                \
								init/bottom_gamebar/plants.c                 \
								init/bottom_gamebar/texts.c                  \
								init/home_menu/cards.c                       \
								init/home_menu/init.c                        \
								init/howtoplay_menu/init.c                   \
								init/loading_screen/init.c                   \
								init/maps/waves/init.c                       \
								init/maps/waves/map1.c                       \
								init/maps/zombies/init.c                     \
								init/maps/init_infos.c                       \
								init/maps/init_map.c                         \
								init/maps/init_score.c                       \
								init/maps/init_sun.c                         \
								init/maps/init_texts.c                       \
								init/maps/load_map.c                         \
								init/maps_menu/init.c                        \
								init/pause_menu/init.c                       \
								init/plants_menu/cards.c                     \
								init/plants_menu/description.c               \
								init/plants_menu/init.c                      \
								init/popup_menu/init.c                       \
								init/results_screen/init.c                   \
								init/settings_menu/init_fps.c                \
								init/settings_menu/init_res.c                \
								init/settings_menu/init_bars.c               \
								init/settings_menu/init.c                    \
								init/start_menu/init.c                       \
								init/stats_menu/init.c                       \
								init/top_bar/init.c                          \
								init/init_assets.c                           \
								init/init_game.c                             \
								init/init_sounds.c                           \
								init/init_stats.c)

SRC_CSFML           =           $(addprefix csfml/,                          \
								animation.c                                  \
								audio.c                                      \
								audio2.c                                     \
								clock.c                                      \
								init.c                                       \
								shape.c                                      \
								sprite.c                                     \
								text.c                                       \
								window.c)

SRC_TESTS           =           $(addprefix tests/,                          \
								test_check_env.c                             \
								test_check_file.c)
SRC_TESTS           +=          $(SRC) $(SRC_CSFML)

OBJ_MAIN            =           $(SRC_MAIN:.c=.o)
OBJ                 =           $(SRC:.c=.o) $(SRC_CSFML:.c=.o)

CFLAGS              +=          -Iinclude
LDFLAGS             =           -Llib -lmy
LDFLAGS             +=          -lcsfml-graphics -lcsfml-window
LDFLAGS             +=          -lcsfml-system -lcsfml-audio
CRITERION           =           --coverage -lcriterion

COMPILING_LIBS      =           "*******  COMPILING LIBS.  *******"
LIBS_COMPILED       =           "*******   LIBS COMPILED   *******"
COMPILING_SRCS      =           "*******  COMPILING SRCS.  *******"
SRCS_COMPILED       =           "*******   SRCS COMPILED   *******"
COMPILING_TESTS     =           "*******  COMPILING TESTS  *******"
TESTS_COMPILED      =           "*******  TESTS COMPILED.  *******"
CLEANING            =           "*******     CLEANING.     *******"
CLEANED             =           "*******  CLEAN COMPLETED  *******"
TESTING             =           "*******      TESTING.     *******"
TESTED              =           "*******  TESTS FINISHED.  *******"

all: $(NAME)

$(NAME): zip $(OBJ_MAIN) $(OBJ) unzip
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

zip:
	@echo "*******  CHECKING FILES.  *******"
	if test -s assets.tar.gz; \
	then echo "*******  ASSETS ZIPPED  *******"; \
	else tar -zcvf assets.tar.gz ./assets && rm -rf ./assets; \
	fi
	@echo "*******  ASSETS ZIPPED  *******"

unzip:
	@echo "*******  UNZIPPING ASSETS.  *******"
	tar -zxvf assets.tar.gz
	$(RM) assets.tar.gz
	@echo "*******   ASSETS UNZIPPED   *******"

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

fclean: clean
	$(RM) $(NAME)
	@make -C lib fclean

re: clean all

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

my_tests: tests_run cover fclean

.PHONY: all $(NAME) clean fclean re tests_run cover my_tests zip unzip
