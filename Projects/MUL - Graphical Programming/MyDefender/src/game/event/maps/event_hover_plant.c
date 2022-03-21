/*
** EPITECH PROJECT, 2022
** Event Hover Plant for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void hover_plants(game_t *game, map_t *map)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse, NULL);
    sfFloatRect r_plant;

    for (int idx = 0; map->plants[idx] != NULL; idx += 1) {
        r_plant = sfSprite_getGlobalBounds(map->plants[idx]->sprite);
        if (sfFloatRect_contains(&r_plant, coords.x, coords.y))
            map->plants[idx]->is_hover = 1;
        else
            map->plants[idx]->is_hover = 0;
    }
}
