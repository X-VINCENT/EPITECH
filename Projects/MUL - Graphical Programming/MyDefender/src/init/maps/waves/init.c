/*
** EPITECH PROJECT, 2022
** Init Waves Maps for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void init_waves_map1(game_t *game)
{
    game->maps->map1->waves = malloc(sizeof(wave_t *) * NB_WAVES + 1);
    game->maps->map1->waves[0] = init_wave1_map1(game);
    game->maps->map1->waves[1] = init_wave2_map1(game);
    game->maps->map1->waves[2] = init_wave3_map1(game);
    game->maps->map1->waves[3] = init_wave4_map1(game);
    game->maps->map1->waves[4] = init_wave5_map1(game);
    game->maps->map1->waves[5] = NULL;
    game->maps->map1->castle_health = 3;
}
