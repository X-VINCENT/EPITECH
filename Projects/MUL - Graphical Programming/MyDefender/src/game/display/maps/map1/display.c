/*
** EPITECH PROJECT, 2022
** Display Map1 for My Defender
** File description:
** Xavier VINCENT  - Max PEIXOTO
*/

#include "my_defender.h"

void display_map_1(game_t *game)
{
    map_t *map = game->maps->map1;

    draw_map_objects(game, map);
    draw_infos(game, map);
    move_sun(game);
    animate_plants(game, map);
    animate_zombies_map(game, map, map->current_wave);
    move_zombies_map1(game, map->current_wave);
    check_damage(game, map, map->waves[map->current_wave]);
    check_result_and_hit_map(game, map);
    display_bottom_gamebar(game);
    if (map->waves[map->current_wave]->zombies_alive <= 0) {
        map->current_wave += 1;
        sfClock_restart(game->maps->clock_wave_text);
    }
    if (map->current_wave == NB_WAVES - 1) {
        sfMusic_stop(game->assets->home_menu->music);
        play_music(game->maps->michael_music);
    }
}
