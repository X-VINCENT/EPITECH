/*
** EPITECH PROJECT, 2022
** Init Waves for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

wave_t *init_wave1_map1(game_t *game)
{
    wave_t *wave = malloc(sizeof(wave_t));
    sfVector2f pos_hugo = init_pos(-5 * BLK_SIZE, BLK_SIZE - 6);

    wave->zombies = malloc(sizeof(zombie_t *) * 4);
    for (int idx = 0; idx != 3; idx += 1) {
        wave->zombies[idx] = init_zombie_hugo(pos_hugo);
        pos_hugo.x -= 2 * BLK_SIZE;
    }
    wave->zombies[3] = NULL;
    wave->zombies_alive = 3;
    return wave;
}

wave_t *init_wave2_map1(game_t *game)
{
    wave_t *wave = malloc(sizeof(wave_t));
    sfVector2f pos_hugo = init_pos(-5 * BLK_SIZE, BLK_SIZE - 6);
    sfVector2f pos = init_pos(-5 * BLK_SIZE, BLK_SIZE - 20);

    wave->zombies = malloc(sizeof(zombie_t *) * 7);
    for (int idx = 0; idx != 6; idx += 1) {
        if (idx % 3 == 0)
            wave->zombies[idx] = init_zombie_max(pos);
        else
            wave->zombies[idx] = init_zombie_hugo(pos);
        pos_hugo.x -= 2 * BLK_SIZE;
        pos.x -= 2 * BLK_SIZE;
    }
    wave->zombies[6] = NULL;
    wave->zombies_alive = 6;
    return wave;
}

wave_t *init_wave3_map1(game_t *game)
{
    wave_t *wave = malloc(sizeof(wave_t));
    sfVector2f pos_hugo = init_pos(-5 * BLK_SIZE, BLK_SIZE - 6);
    sfVector2f pos = init_pos(-5 * BLK_SIZE, BLK_SIZE - 20);

    wave->zombies = malloc(sizeof(zombie_t *) * 12);
    for (int idx = 0; idx != 11; idx += 1) {
        if (idx % 3 == 0)
            wave->zombies[idx] = init_zombie_max(pos);
        if (idx == 11 || idx == 5)
            wave->zombies[idx] = init_zombie_gautier(pos);
        else
            wave->zombies[idx] = init_zombie_hugo(pos_hugo);
        pos_hugo.x -= 2 * BLK_SIZE;
        pos.x -= 2 * BLK_SIZE;
    }
    wave->zombies[11] = NULL;
    wave->zombies_alive = 11;
    return wave;
}

wave_t *init_wave4_map1(game_t *game)
{
    wave_t *wave = malloc(sizeof(wave_t));
    sfVector2f pos_hugo = init_pos(-5 * BLK_SIZE, BLK_SIZE - 6);
    sfVector2f pos = init_pos(-5 * BLK_SIZE, BLK_SIZE - 20);

    wave->zombies = malloc(sizeof(zombie_t *) * 26);
    for (int idx = 0; idx != 25; idx += 1) {
        if (idx % 3 == 0)
            wave->zombies[idx] = init_zombie_max(pos);
        if (idx % 5 == 0 && idx != 15)
            wave->zombies[idx] = init_zombie_gautier(pos);
        else
            wave->zombies[idx] = init_zombie_hugo(pos_hugo);
        pos_hugo.x -= 2 * BLK_SIZE;
        pos.x -= 2 * BLK_SIZE;
    }
    wave->zombies[25] = NULL;
    wave->zombies_alive = 25;
    return wave;
}

wave_t *init_wave5_map1(game_t *game)
{
    wave_t *wave = malloc(sizeof(wave_t));
    sfVector2f pos = init_pos(-5 * BLK_SIZE, BLK_SIZE);

    wave->zombies = malloc(sizeof(zombie_t *) * 11);
    for (int idx = 0; idx != 10; idx += 1) {
        wave->zombies[idx] = init_zombie_michael_jackson(pos);
        pos.x -= 4 * BLK_SIZE;
    }
    wave->zombies[10] = NULL;
    wave->zombies_alive = 10;
    return wave;
}
