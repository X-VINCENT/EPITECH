/*
** EPITECH PROJECT, 2022
** Get Time Tools for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

char *get_time(game_t *game)
{
    int hour = 0;
    int minute = 0;
    char *time = NULL;

    game->stats->time_playing += time_elapsed(
        game->stats->time_playing_clock);
    if (time_elapsed(game->stats->time_playing_clock) >= 1)
        sfClock_restart(game->stats->time_playing_clock);
    hour = game->stats->time_playing / 3600;
    minute = (game->stats->time_playing - (3600 * hour)) / 60;
    time = put_time_in_str(hour, minute);
    return time;
}

char *put_time_in_str(int hour, int minute)
{
    char *time = NULL;
    char *str_hour = NULL;
    char *str_hour_long = NULL;
    char *str_minute = NULL;

    str_hour = my_put_nbr_in_str(hour);
    str_hour_long = my_strcat(str_hour, " : ");
    str_hour_long[my_strlen(str_hour_long)] = '\0';
    str_minute = my_put_nbr_in_str(minute);
    time = my_strcat(str_hour_long, str_minute);
    time[my_strlen(time)] = '\0';
    free(str_hour);
    free(str_hour_long);
    free(str_minute);
    return time;
}
