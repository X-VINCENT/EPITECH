/*
** EPITECH PROJECT, 2022
** Destroy Maps for My Defender
** File description:
** Xavier VINCENT  - Max PEIXOTO
*/

#include "my_defender.h"

void destroy_map(map_t *map)
{
    for (int idx = 0; map->map[idx] != NULL; idx += 1)
        free(map->map[idx]);
    free(map->map);
    for (int idx = 0; map->objects[idx] != NULL; idx += 1) {
        destroy_sprite(map->objects[idx]->sprite);
        free(map->objects[idx]);
    }
    free(map->objects);
    destroy_plants_struct(map->plants);
    destroy_score(map->score);
    destroy_sound(map->zombie_death);
    free(map);
}
