/*
** EPITECH PROJECT, 2022
** Init Loading Screen for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void init_loading_screen(game_t *game)
{
    const char path[] = "assets/pictures/backgrounds/loading_screen.png";
    sfIntRect rect = init_rect(0, 0, 1920, 1080);
    sfVector2f pos = init_pos(0, 0);
    sfVector2f scale = init_scale(1, 1);

    game->assets->loading_screen = malloc(sizeof(loading_screen_t));
    game->assets->loading_screen->bg = create_sprite(path, rect, pos, scale);
}
