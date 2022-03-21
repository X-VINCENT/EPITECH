/*
** EPITECH PROJECT, 2021
** Display pause Menu for My Runner
** File description:
** Xavier VINCENT
*/

#include "my_runner.h"

void display_pause_menu(game_t *game)
{
    pause_menu_t *pause_menu = game->assets->pause_menu;
    char *score_str = my_put_nbr_in_str(game->score->score);

    if (!game)
        return;
    sfRenderWindow_drawSprite(game->window, pause_menu->bg, NULL);
    sfRenderWindow_drawText(game->window, pause_menu->pause, NULL);
    sfText_setString(pause_menu->score, my_strcat("Score: ", score_str));
    draw_score_pause_menu(game->window, pause_menu->score);
    sfRenderWindow_drawText(game->window, pause_menu->creator, NULL);
    sfRenderWindow_drawSprite(game->window, pause_menu->play, NULL);
    sfRenderWindow_drawSprite(game->window, pause_menu->quit, NULL);
    sfRenderWindow_drawSprite(game->window, pause_menu->restart, NULL);
    sfRenderWindow_drawSprite(game->window, pause_menu->settings, NULL);
    if (sfMusic_getVolume(game->assets->game_music) > 0.00)
        sfRenderWindow_drawSprite(game->window, pause_menu->unmute, NULL);
    else
        sfRenderWindow_drawSprite(game->window, pause_menu->mute, NULL);
    free(score_str);
}

void draw_score_pause_menu(sfRenderWindow *window, sfText *score)
{
    if (!window || !score)
        return;
    sfFloatRect rect = sfText_getLocalBounds(score);
    sfVector2f origin = {rect.left + rect.width / 2.00,
        rect.top + rect.height / 2.00};
    sfVector2f pos = {960.00, 300.00};

    sfText_setOrigin(score, origin);
    sfText_setPosition(score, pos);
    sfRenderWindow_drawText(window, score, NULL);
}
