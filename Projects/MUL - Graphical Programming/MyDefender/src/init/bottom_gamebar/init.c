/*
** EPITECH PROJECT, 2022
** Init Button Gamebar for My Defender
** File description:
** Xavier VINCENT
*/

#include "my_defender.h"

void init_bottom_gamebar(game_t *game)
{
    sfIntRect rect = init_rect(0, 1451, 1920, 216);
    sfVector2f pos = {0, 864};
    sfVector2f scale = init_scale(1, 1);

    game->assets->bottom_gamebar = malloc(sizeof(bottom_gamebar_t));
    game->assets->bottom_gamebar->bar = create_sprite(
        "assets/pictures/game.png", rect, pos, scale);
    game->assets->bottom_gamebar->clock = sfClock_create();
    init_texts_bottom_gamebar(game);
    init_plants_bottom_gamebar(game);
    init_objects_bottom_gamebar(game);
    init_buttons_bottom_gamebar(game);
}
