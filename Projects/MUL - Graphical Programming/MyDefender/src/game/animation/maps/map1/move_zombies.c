/*
** EPITECH PROJECT, 2022
** Move Zombies Map 1 for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void move_zombies_map1(game_t *game, int idx_wave)
{
    wave_t *wave = game->maps->map1->waves[idx_wave];
    sfVector2f offset = {1, 0};

    for (int idx = 0; wave->zombies[idx] != NULL; idx += 1) {
        if (time_elapsed(wave->zombies[idx]->clock_move) *
            wave->zombies[idx]->speed > 3 / game->speed)
            move_zombie_map1(game, idx, wave, offset);
    }
}

void move_zombie_map1(game_t *game, int idx, wave_t *wave, sfVector2f offset)
{
    if (sfSprite_getPosition(wave->zombies[idx]->sprite).x >=
        (BLK_SIZE * 11 + 12)) {
        offset.x = 0;
        offset.y = 1;
    }
    if (sfSprite_getPosition(wave->zombies[idx]->sprite).y >=
        (BLK_SIZE * 6 - 6)) {
        offset.x = 1;
        offset.y = 0;
    }
    sfSprite_move(wave->zombies[idx]->sprite, offset);
    sfText_move(wave->zombies[idx]->health_text, offset);
    sfClock_restart(wave->zombies[idx]->clock_move);
}
