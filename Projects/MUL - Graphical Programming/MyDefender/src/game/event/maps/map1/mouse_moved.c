/*
** EPITECH PROJECT, 2022
** Mouse Moved Map1 for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void mouse_moved_map1(game_t *game)
{
    map_t *map = game->maps->map1;
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse, NULL);

    hover_plants(game, map);
    mouse_moved_bottom_gamebar(game);
}
