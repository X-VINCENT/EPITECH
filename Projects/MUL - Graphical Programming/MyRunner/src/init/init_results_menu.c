/*
** EPITECH PROJECT, 2022
** Init Results Menu for My Runner
** File description:
** Xavier VINCENT
*/

#include "my_runner.h"

void init_results_menu(game_t *game)
{
    game->assets->results_menu = malloc(sizeof(results_menu_t));
    sfIntRect *rect = init_rect(0, 0, 1920, 1080);
    sfVector2f pos = {0.00, 0.00};
    sfVector2f scale = {1.00, 1.00};

    if (!game)
        return;
    game->assets->results_menu->bg = create_sprite(
        "assets/pictures/background/bg.png", rect, pos, scale);
    game->assets->results_menu->clock = sfClock_create();
    init_buttons_results_menu(game->assets->results_menu);
    init_buttons_2_results_menu(game->assets->results_menu);
    init_text_results_menu(game->assets->results_menu);
    init_sounds_results_menu(game->assets->results_menu);
}

void init_text_results_menu(results_menu_t *results_menu)
{
    const char font[] = "assets/fonts/GreatVibes-Regular.otf";

    if (!results_menu)
        return;
    results_menu->win = create_text(
        font, sfBlack, 96,
        "You beat the best score !\n           GG !");
    results_menu->loose = create_text(
        font, sfBlack, 96, "You loose !\nTry again !");
    results_menu->score = create_text(font, sfBlack, 48, "0");
    results_menu->best_score = create_text(font, sfBlack, 48, "0");
    setting_up_text_results_menu(results_menu);
    setting_up_text_2_results_menu(results_menu);
}

void setting_up_text_results_menu(results_menu_t *results_menu)
{
    sfFloatRect rect_win = sfText_getLocalBounds(results_menu->win);
    sfFloatRect rect_loose = sfText_getLocalBounds(results_menu->loose);
    sfVector2f origin_win = {rect_win.left + rect_win.width / 2.00,
        rect_win.top + rect_win.height / 2.00};
    sfVector2f origin_loose = {rect_loose.left + rect_loose.width / 2.00,
        rect_loose.top + rect_loose.height / 2.00};
    sfVector2f pos_win_loose = {960.00, 150.00};

    if (!results_menu)
        return;
    sfText_setStyle(results_menu->win, sfTextBold);
    sfText_setStyle(results_menu->loose, sfTextBold);
    sfText_setOrigin(results_menu->win, origin_win);
    sfText_setOrigin(results_menu->loose, origin_loose);
    sfText_setPosition(results_menu->win, pos_win_loose);
    sfText_setPosition(results_menu->loose, pos_win_loose);
}

void setting_up_text_2_results_menu(results_menu_t *results_menu)
{
    sfFloatRect rect_score = sfText_getLocalBounds(results_menu->score);
    sfFloatRect rect_best_score = sfText_getLocalBounds(
        results_menu->best_score);
    sfVector2f origin_score = {rect_score.left + rect_score.width / 2.00,
        rect_score.top + rect_score.height / 2.00};
    sfVector2f origin_best_score = {
        rect_best_score.left + rect_best_score.width / 2.00,
        rect_best_score.top + rect_best_score.height / 2.00};
    sfVector2f pos_score = {960.00, 350.00};
    sfVector2f pos_best_score = {960.00, 950.00};

    if (!results_menu)
        return;
    sfText_setStyle(results_menu->score, sfTextBold);
    sfText_setStyle(results_menu->best_score, sfTextBold);
    sfText_setOrigin(results_menu->score, origin_score);
    sfText_setOrigin(results_menu->best_score, origin_best_score);
    sfText_setPosition(results_menu->score, pos_score);
    sfText_setPosition(results_menu->best_score, pos_best_score);
}
