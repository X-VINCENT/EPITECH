/*
** EPITECH PROJECT, 2022
** Zombie Hit Castle Maps for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void zombie_hit_castle_map(game_t *game, map_t *map, int idx_wave)
{
    wave_t *wave = map->waves[idx_wave];
    sfVector2f pos = {-20000, 10000};

    for (int idx = 0; wave->zombies[idx] != NULL; idx += 1) {
        if (sfSprite_getPosition(
            wave->zombies[idx]->sprite).x >= 19 * BLK_SIZE) {
            map->castle_health -= 1;
            wave->zombies_alive -= 1;
            sfSprite_setPosition(wave->zombies[idx]->sprite, pos);
        }
    }
}
