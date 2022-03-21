/*
** EPITECH PROJECT, 2022
** Display Results Menu for My Runner
** File description:
** Xavier VINCENT
*/

#include "my_runner.h"

void display_results_menu(game_t *game)
{
    results_menu_t *results_menu = game->assets->results_menu;

    if (!game)
        return;
    sfMusic_pause(game->assets->game_music);
    draw_results_menu(game);
    if (results_menu->result == 0) {
        sfSound_play(results_menu->loose_sound);
        sfRenderWindow_drawText(game->window, results_menu->loose, NULL);
    }
    else if (results_menu->result == 1) {
        sfSound_play(results_menu->win_sound);
        sfRenderWindow_drawText(game->window, results_menu->win, NULL);
    }
    if (sfMusic_getVolume(game->assets->game_music) > 0.00)
        sfRenderWindow_drawSprite(game->window, results_menu->unmute, NULL);
    else
        sfRenderWindow_drawSprite(game->window, results_menu->mute, NULL);
}

void edit_text_results_menu(game_t *game)
{
    if (!game)
        return;
    sfText_setString(game->assets->results_menu->score, my_strcat(
        "Score: ", my_put_nbr_in_str(game->score->score)));
    sfText_setString(game->assets->results_menu->best_score, my_strcat(
        "Best score: ", my_put_nbr_in_str(game->score->best_score)));
    center_text_results_menu(game->assets->results_menu);
}

void center_text_results_menu(results_menu_t *results_menu)
{
    if (!results_menu)
        return;
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

    sfText_setOrigin(results_menu->score, origin_score);
    sfText_setOrigin(results_menu->best_score, origin_best_score);
    sfText_setPosition(results_menu->score, pos_score);
    sfText_setPosition(results_menu->best_score, pos_best_score);
}

void draw_results_menu(game_t *game)
{
    results_menu_t *results_menu = game->assets->results_menu;

    if (!game)
        return;
    sfRenderWindow_drawSprite(game->window, results_menu->bg, NULL);
    sfRenderWindow_drawSprite(game->window, results_menu->play, NULL);
    sfRenderWindow_drawSprite(game->window, results_menu->quit, NULL);
    sfRenderWindow_drawSprite(game->window, results_menu->settings, NULL);
    sfRenderWindow_drawText(game->window, results_menu->score, NULL);
    sfRenderWindow_drawText(game->window, results_menu->best_score, NULL);
}
