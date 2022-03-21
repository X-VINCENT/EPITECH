/*
** EPITECH PROJECT, 2022
** Display Results Screen for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void display_results_screen(game_t *game)
{
    results_screen_t *screen = game->assets->results_screen;

    if (game->result == 1) {
        sfRenderWindow_drawSprite(game->window, screen->win_bg, NULL);
        sfRenderWindow_drawText(game->window, screen->win_text, NULL);
        if (time_elapsed(screen->clock) > 0.1) {
            animate_sprite(screen->win_bg, 653, 14366);
            sfClock_restart(screen->clock);
        }
    } else if (game->result == 0)
        sfRenderWindow_drawSprite(game->window, screen->loose_bg, NULL);
}
