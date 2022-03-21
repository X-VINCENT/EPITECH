/*
** EPITECH PROJECT, 2022
** Destroy Plants Map for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void destroy_plants_struct(plant_t **plants)
{
    for (int idx = 0; plants[idx] != NULL; idx += 1) {
        destroy_sprite(plants[idx]->sprite);
        destroy_circle_shape(plants[idx]->area);
        sfClock_destroy(plants[idx]->clock_anim);
        sfClock_destroy(plants[idx]->clock_damage);
        free(plants[idx]);
    }
    free(plants);
}

void destroy_plants(game_t *game, plant_t **plants)
{
    for (int idx = 0; plants[idx] != NULL; idx += 1) {
        destroy_sprite(plants[idx]->sprite);
        destroy_circle_shape(plants[idx]->area);
        if (plants[idx]->name == SUNFLOWER)
            game->maps->sunflower_value -= 25;
        sfClock_destroy(plants[idx]->clock_anim);
        sfClock_destroy(plants[idx]->clock_damage);
        free(plants[idx]);
    }
    free(plants);
}
