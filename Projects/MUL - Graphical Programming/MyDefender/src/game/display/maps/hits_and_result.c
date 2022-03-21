/*
** EPITECH PROJECT, 2022
** Hits and Result Maps for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void check_result_and_hit_map(game_t *game, map_t *map)
{
    zombie_hit_castle_map(game, map, map->current_wave);
    if (map->castle_health <= 0) {
        reset_data_map(game, map);
        game->result = 0;
        game->stage = RESULT_STAGE;
        stop_musics(game);
        sfSound_play(game->assets->results_screen->loose_sound);
    }
    if (map->waves[NB_WAVES - 1]->zombies_alive <= 0) {
        reset_data_map(game, map);
        game->result = 1;
        game->stage = RESULT_STAGE;
        stop_musics(game);
        sfSound_play(game->assets->results_screen->win_sound);
    }
}
