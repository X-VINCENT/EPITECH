/*
** EPITECH PROJECT, 2022
** Score for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void check_and_display_score(game_t *game, map_t *map)
{
    if (time_elapsed(map->score->clock) > 0.01) {
        game->stats->score += game->speed;
        sfClock_restart(map->score->clock);
    }
    if (game->stats->score % 1000 == 0)
        sfSound_play(game->assets->sounds->score);
    sfText_setString(
        map->score->score, my_put_nbr_in_str(game->stats->score));
    sfText_setOrigin(map->score->score, (sfVector2f){
        sfText_getGlobalBounds(map->score->score).width / 2,
        sfText_getGlobalBounds(map->score->score).height / 2});
    sfRenderWindow_drawText(game->window, map->score->score, NULL);
    if (game->stats->score > game->stats->best_score)
        game->stats->best_score = game->stats->score;
}
