/*
** EPITECH PROJECT, 2022
** Event Transplanter Maps for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void event_transplanter(game_t *game, map_t *map)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse, NULL);
    sfVector2f new_pos = {-1500, -2500};
    sfFloatRect r_plant;

    if (game->trans_selected != 1 || game->maps->money < TRANSPLANTER_PRICE)
        return;
    for (int idx = 0; map->plants[idx] != NULL; idx += 1) {
        r_plant = sfSprite_getGlobalBounds(map->plants[idx]->sprite);
        if (sfFloatRect_contains(&r_plant, coords.x, coords.y)) {
            sfSprite_setPosition(map->plants[idx]->sprite, new_pos);
            sfCircleShape_setPosition(map->plants[idx]->area, new_pos);
            game->maps->sunflower_value -=
                map->plants[idx]->name == SUNFLOWER ? 25 : 0;
            game->maps->money -= TRANSPLANTER_PRICE;
            sfSound_play(game->assets->sounds->transplanter);
            game->trans_selected = 0;
        }
    }
}
