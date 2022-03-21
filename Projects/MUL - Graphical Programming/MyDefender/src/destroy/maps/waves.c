/*
** EPITECH PROJECT, 2022
** Destroy Waves Map for MyDefender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void destroy_waves(wave_t **waves)
{
    if (!waves)
        return;
    for (int idx = 0; waves[idx] != NULL; idx += 1)
        destroy_wave(waves[idx]);
    free(waves);
}

void destroy_wave(wave_t *wave)
{
    if (!wave)
        return;
    for (int idx = 0; wave->zombies[idx] != NULL; idx += 1)
        destroy_zombie(wave->zombies[idx]);
    free(wave->zombies);
    free(wave);
}
