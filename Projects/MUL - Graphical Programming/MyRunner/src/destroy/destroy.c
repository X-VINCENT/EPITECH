/*
** EPITECH PROJECT, 2021
** Destroy for My Runner
** File description:
** Xavier VINCENT
*/

#include "my_runner.h"

void destroy_all(game_t *game)
{
    if (!game)
        return;
    destroy_home_menu(game->assets->home_menu);
    destroy_pause_menu(game->assets->pause_menu);
    destroy_settings_menu(game->assets->settings_menu);
    destroy_results_menu(game->assets->results_menu);
    sfMusic_destroy(game->assets->game_music);
    sfClock_destroy(game->clock_fps);
    destroy_sprite(game->assets->cursor);
    destroy_parallax(game->assets->parallax);
    destroy_character(game->assets->character);
    destroy_score(game->score);
    destroy_event(game->event);
    destroy_window(game->window);
    free(game->assets);
    free(game);
}

void destroy_parallax(parallax_t *parallax)
{
    if (!parallax)
        return;
    sfClock_destroy(parallax->clock);
    destroy_sprite(parallax->sky);
    destroy_sprite(parallax->bg);
    destroy_sprite(parallax->middle);
    destroy_sprite(parallax->fg);
    destroy_sprite(parallax->g1);
    destroy_sprite(parallax->g2);
    destroy_sprite(parallax->snow);
    free(parallax);
}

void destroy_character(character_t *character)
{
    if (!character)
        return;
    sfClock_destroy(character->clock);
    sfClock_destroy(character->clock_jump);
    destroy_sprite(character->attack);
    destroy_sprite(character->hurt);
    destroy_sprite(character->run);
    sfSound_destroy(character->jump_sound);
    sfSound_destroy(character->death);
    free(character);
}

void destroy_score(score_t *score)
{
    if (!score)
        return;
    destroy_sprite(score->sign);
    sfText_destroy(score->text);
    sfClock_destroy(score->clock);
    free(score);
}

void destroy_event(event_t *event)
{
    if (!event)
        return;
    sfClock_destroy(event->clock);
    sfSound_destroy(event->click_button);
    free(event->event);
    free(event);
}
