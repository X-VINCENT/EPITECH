/*
** EPITECH PROJECT, 2022
** Display Bottom Gamebar for my Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void display_bottom_gamebar(game_t *game)
{
    bottom_gamebar_t *bar = game->assets->bottom_gamebar;

    sfRenderWindow_drawSprite(game->window, bar->bar, NULL);
    sfText_setString(
        bar->suns_available, my_put_nbr_in_str(game->maps->money));
    sfRenderWindow_drawText(game->window, bar->suns_available, NULL);
    for (int idx = 0; bar->plants[idx] != NULL; idx += 1)
        sfRenderWindow_drawSprite(game->window, bar->plants[idx], NULL);
    for (int idx = 0; bar->plants_price[idx] != NULL; idx += 1)
        sfRenderWindow_drawText(game->window, bar->plants_price[idx], NULL);
    sfRenderWindow_drawSprite(game->window, bar->fertilizer, NULL);
    sfRenderWindow_drawSprite(game->window, bar->transplanter, NULL);
    if (game->speed == 1)
        sfRenderWindow_drawSprite(game->window, bar->speed_button[0], NULL);
    else
        sfRenderWindow_drawSprite(game->window, bar->speed_button[1], NULL);
    sfRenderWindow_drawSprite(game->window, bar->pause_button, NULL);
}
