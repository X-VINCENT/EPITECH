/*
** EPITECH PROJECT, 2022
** Reset for My Runner
** File description:
** Xavier VINCENT
*/

#include "my_runner.h"

void reset_game(game_t *game)
{
    if (!game)
        return;
    init_map(game, ".legend");
    game->score->score = 0;
    game->stage = 1;
}
