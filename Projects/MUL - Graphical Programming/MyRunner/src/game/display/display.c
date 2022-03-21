/*
** EPITECH PROJECT, 2021
** Display for My Runner
** File description:
** Xavier VINCENT
*/

#include "my_runner.h"

void display(game_t *game)
{
    if (!game)
        return;
    display_parallax(game->window, game->assets->parallax);
    display_character(game->window, game->assets->character);
    display_score(game->window, game->score);
    display_fps(game->window, game->assets->fps, game->clock_fps);
    display_map(game);
}

void display_parallax(sfRenderWindow *window, parallax_t *parallax)
{
    if (!window || !parallax)
        return;
    animate_parallax(parallax);
    sfRenderWindow_drawSprite(window, parallax->sky, NULL);
    sfRenderWindow_drawSprite(window, parallax->bg, NULL);
    sfRenderWindow_drawSprite(window, parallax->middle, NULL);
    sfRenderWindow_drawSprite(window, parallax->fg, NULL);
    sfRenderWindow_drawSprite(window, parallax->g1, NULL);
    sfRenderWindow_drawSprite(window, parallax->g2, NULL);
    sfRenderWindow_drawSprite(window, parallax->snow, NULL);
}

void display_character(sfRenderWindow *window, character_t *character)
{
    if (!window || !character)
        return;
    if (sfTime_asSeconds(sfClock_getElapsedTime(character->clock)) > 0.075)
        animate_character(character);
    if (sfTime_asSeconds(sfClock_getElapsedTime(
        character->clock_jump)) > 0.01)
        character_jump(character);
    sfRenderWindow_drawSprite(window, character->run, NULL);
}

void display_score(sfRenderWindow *window, score_t *score)
{
    sfFloatRect text_rect = sfText_getLocalBounds(score->text);
    sfVector2f origin = {text_rect.left + text_rect.width / 2.00,
        text_rect.top + text_rect.height / 2.00};
    sfVector2f position = {960.00, 150.00};

    if (!window || !score)
        return;
    if (sfTime_asSeconds(sfClock_getElapsedTime(score->clock)) > 0.01) {
        score->score += 1;
        sfClock_restart(score->clock);
    }
    sfRenderWindow_drawSprite(window, score->sign, NULL);
    sfText_setOrigin(score->text, origin);
    sfText_setPosition(score->text, position);
    sfText_setString(
        score->text, my_put_nbr_in_str(score->score));
    sfRenderWindow_drawText(
        window, score->text, NULL);
}

void display_fps(sfRenderWindow *window, sfText *fps, sfClock *clock_fps)
{
    float fps_f = 1.00 / sfTime_asSeconds(sfClock_getElapsedTime(clock_fps));
    int fps_i = fps_f;

    if (!window || !clock_fps)
        return;
    sfText_setString(fps, my_put_nbr_in_str(fps_i));
    sfRenderWindow_drawText(window, fps, NULL);
    sfClock_restart(clock_fps);
}
