/*
** EPITECH PROJECT, 2022
** Destroy Map for My Runner
** File description:
** Xavier VINCENT
*/

#include "my_runner.h"

void destroy_map(map_t *map)
{
    if (!map)
        return;
    for (int i = 0; i < map->boxes_index; i += 1)
        destroy_sprite(map->boxes[i]);
    for (int i = 0; i < map->snowmans_index; i += 1)
        destroy_sprite(map->snowmans[i]);
    for (int i = 0; i < map->coins_index; i += 1)
        destroy_sprite(map->coins[i]);
    sfClock_destroy(map->clock);
    sfClock_destroy(map->coins_clock);
    sfSound_destroy(map->coin_sound);
    free(map->boxes);
    free(map->snowmans);
    free(map->coins);
    free(map->map);
    free(map);
}
