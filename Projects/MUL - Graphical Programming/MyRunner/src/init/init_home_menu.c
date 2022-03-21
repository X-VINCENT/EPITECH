/*
** EPITECH PROJECT, 2021
** Init Home Menu for My Runner
** File description:
** Xavier VINCENT
*/

#include "my_runner.h"

void init_home_menu(game_t *game)
{
    sfIntRect *rect = init_rect(0, 0, 1920, 1080);
    sfVector2f pos = {0.00, 0.00};
    sfVector2f scale = {1.00, 1.00};

    if (!game)
        return;
    game->assets->home_menu = malloc(sizeof(home_menu_t));
    game->assets->home_menu->bg = create_sprite(
        "assets/pictures/background/bg.png", rect, pos, scale);
    game->assets->home_menu->music = create_music(
        "assets/sounds/musics/home_menu.ogg");
    game->assets->home_menu->clock = sfClock_create();
    init_text_home_menu(game);
    init_buttons_home_menu(game->assets->home_menu);
    init_buttons_2_home_menu(game->assets->home_menu);
    free(rect);
}

void init_text_home_menu(game_t *game)
{
    const char font[] = "assets/fonts/GreatVibes-Regular.otf";
    home_menu_t *home_menu = game->assets->home_menu;
    sfVector2f pos_my_runner = {675.00, 200.00};
    sfVector2f pos_creator = {1700.00, 1000.00};

    if (!game)
        return;
    home_menu->my_runner = create_text(font, sfBlack, 116, "My Runner");
    sfText_setPosition(home_menu->my_runner, pos_my_runner);
    sfText_setStyle(home_menu->my_runner, sfTextBold);
    home_menu->best_score = create_text(font, sfBlack, 32, my_strcat(
        "Best score: ", my_put_nbr_in_str(game->score->best_score)));
    setting_up_best_score_home_menu(home_menu);
    home_menu->creator = create_text(font, sfBlack, 32, "Xavier Vincent");
    sfText_setPosition(home_menu->creator, pos_creator);
    sfText_setStyle(home_menu->creator, sfTextBold);
}

void setting_up_best_score_home_menu(home_menu_t *home_menu)
{
    sfFloatRect rect = sfText_getLocalBounds(home_menu->best_score);
    sfVector2f origin = {rect.left + rect.width / 2.00,
        rect.top + rect.height / 2.00};
    sfVector2f pos = {960.00, 1000.00};

    if (!home_menu)
        return;
    sfText_setOrigin(home_menu->best_score, origin);
    sfText_setPosition(home_menu->best_score, pos);
    sfText_setStyle(home_menu->best_score, sfTextBold);
}

void init_buttons_home_menu(home_menu_t *home_menu)
{
    const char path[] = "assets/pictures/buttons/buttons.png";
    sfIntRect *rect_play = init_rect(159, 102, 335, 132);
    sfIntRect *rect_quit = init_rect(159, 958, 335, 132);
    sfVector2f pos_play = {692.50, 800.00};
    sfVector2f pos_quit = {1227.50, 800.00};
    sfVector2f origin = {167.50, 66.00};
    sfVector2f scale = {1.00, 1.00};

    if (!home_menu)
        return;
    home_menu->play = create_sprite(path, rect_play, pos_play, scale);
    home_menu->quit = create_sprite(path, rect_quit, pos_quit, scale);
    sfSprite_setOrigin(home_menu->play, origin);
    sfSprite_setOrigin(home_menu->quit, origin);
    free(rect_play);
    free(rect_quit);
}

void init_buttons_2_home_menu(home_menu_t *home_menu)
{
    const char path[] = "assets/pictures/buttons/buttons.png";
    sfIntRect *rect_settings = init_rect(641, 620, 153, 124);
    sfIntRect *rect_mute = init_rect(641, 447, 153, 124);
    sfIntRect *rect_unmute = init_rect(887, 452, 153, 124);
    sfVector2f pos_settings = {10.00, 1070.00};
    sfVector2f pos_mute = {1910.00, 10.00};
    sfVector2f origin_settings = {0.00, 124.00};
    sfVector2f origin_mute = {153.00, 0.00};
    sfVector2f scale = {0.50, 0.50};

    home_menu->settings = create_sprite(
        path, rect_settings, pos_settings, scale);
    home_menu->mute = create_sprite(path, rect_mute, pos_mute, scale);
    home_menu->unmute = create_sprite(path, rect_unmute, pos_mute, scale);
    sfSprite_setOrigin(home_menu->settings, origin_settings);
    sfSprite_setOrigin(home_menu->mute, origin_mute);
    sfSprite_setOrigin(home_menu->unmute, origin_mute);
    free(rect_settings);
    free(rect_mute);
    free(rect_unmute);
}
