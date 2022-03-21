/*
** EPITECH PROJECT, 2022
** Save Data for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void save_data(game_t *game)
{
    save_value_in_file(game->stats->time_playing, "time_playing.dat");
    save_value_in_file(game->stats->best_score, "best_score.dat");
    save_value_in_file(game->stats->damage_caused, "damage_caused.dat");
    save_value_in_file(game->stats->zombies_killed, "zombies_killed.dat");
    save_value_in_file(game->stats->suns_picked_up, "suns_picked_up.dat");
    save_value_in_file(game->stats->plants_planted, "plants_planted.dat");
}

void save_value_in_file(int value, const char filepath[])
{
    FILE *fp = fopen(filepath, "wb");
    char *str_value = my_put_nbr_in_str(value);

    if (!fp)
        return;
    if (fwrite(str_value, 1, my_strlen(str_value), fp) == -1)
        return;
    free(str_value);
    fclose(fp);
}
