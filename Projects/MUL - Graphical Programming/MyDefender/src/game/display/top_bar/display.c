/*
** EPITECH PROJECT, 2022
** Display Top Bar for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void display_top_bar(game_t *game, int stage)
{
    top_bar_t *bar = game->assets->top_bar;

    if (stage == HOME_STAGE)
        sfRenderWindow_drawSprite(game->window, bar->home_on, NULL);
    else
        sfRenderWindow_drawSprite(game->window, bar->home_off, NULL);
    if (stage == MAPS_STAGE)
        sfRenderWindow_drawSprite(game->window, bar->maps_on, NULL);
    else
        sfRenderWindow_drawSprite(game->window, bar->maps_off, NULL);
    if (stage == PLANTS_STAGE)
        sfRenderWindow_drawSprite(game->window, bar->plants_on, NULL);
    else
        sfRenderWindow_drawSprite(game->window, bar->plants_off, NULL);
    display_top_bar_2(game, stage);
}

void display_top_bar_2(game_t *game, int stage)
{
    top_bar_t *bar = game->assets->top_bar;

    if (stage == STATS_STAGE)
        sfRenderWindow_drawSprite(game->window, bar->stats_on, NULL);
    else
        sfRenderWindow_drawSprite(game->window, bar->stats_off, NULL);
    if (stage == HOWTOPLAY_STAGE)
        sfRenderWindow_drawSprite(game->window, bar->howtoplay_on, NULL);
    else
        sfRenderWindow_drawSprite(game->window, bar->howtoplay_off, NULL);
    if (stage == SETTINGS_STAGE)
        sfRenderWindow_drawSprite(game->window, bar->settings_on, NULL);
    else
        sfRenderWindow_drawSprite(game->window, bar->settings_off, NULL);
}
