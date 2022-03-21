/*
** EPITECH PROJECT, 2022
** Init Assets for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void init_sounds(game_t *game)
{
    game->assets->sounds = malloc(sizeof(sounds_t));

    game->assets->sounds->plant = create_sound(
        "assets/audio/sounds/plants.ogg");
    game->assets->sounds->transplanter = create_sound(
        "assets/audio/sounds/transplanter.ogg");
    game->assets->sounds->score = create_sound(
        "assets/audio/sounds/score.ogg");
    game->assets->sounds->menu = create_sound("assets/audio/sounds/menu.ogg");
}
