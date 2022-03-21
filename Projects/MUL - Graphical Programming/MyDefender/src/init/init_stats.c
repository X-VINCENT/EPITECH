/*
** EPITECH PROJECT, 2022
** Init Stats for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void init_stats(game_t *game)
{
    game->stats = malloc(sizeof(stats_t));
    game->stats->score = 0;
    game->stats->time_playing = get_value_from_file("time_playing.dat");
    game->stats->best_score = get_value_from_file("best_score.dat");
    game->stats->damage_caused = get_value_from_file("damage_caused.dat");
    game->stats->zombies_killed = get_value_from_file("zombies_killed.dat");
    game->stats->suns_picked_up = get_value_from_file("suns_picked_up.dat");
    game->stats->plants_planted = get_value_from_file("plants_planted.dat");
    game->stats->time_playing_clock = sfClock_create();
}

int get_value_from_file(const char path[])
{
    FILE *fp = fopen(path, "rb");
    int value = 0;
    char *value_str = malloc(sizeof(char) * 100);

    if (!fp)
        return -1;
    if (fread(value_str, 1, 100, fp) == -1)
        return -1;
    value = my_getnbr(value_str);
    free(value_str);
    fclose(fp);
    return value;
}
