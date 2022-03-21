/*
** EPITECH PROJECT, 2022
** Mouse Pressed Map1 for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void mouse_pressed_map1(game_t *game)
{
    map_t *map = game->maps->map1;
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse, NULL);
    sfFloatRect r_sun = sfSprite_getGlobalBounds(game->maps->sun);
    sfVector2f new_sun_pos = {rand() % 1700 + 200, -500};

    if (sfFloatRect_contains(&r_sun, coords.x, coords.y)) {
        game->maps->money += game->maps->sunflower_value;
        sfSprite_setPosition(game->maps->sun, new_sun_pos);
        game->stats->suns_picked_up += 1;
    }
    put_plant_on_map(game);
    event_fertilizer(game, map);
    event_transplanter(game, map);
    mouse_pressed_bottom_gamebar(game);
}
