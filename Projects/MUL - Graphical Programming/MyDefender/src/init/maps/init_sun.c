/*
** EPITECH PROJECT, 2022
** Init Money for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void init_sun(game_t *game)
{
    const char path[] = "assets/pictures/game.png";
    sfIntRect rect_sun = init_rect(1500, 0, 150, 150);
    sfVector2f pos_sun = init_pos(rand() % 1700 + 100, -500);
    sfVector2f scale = init_scale(1, 1);

    game->maps->sunflower_value = 50;
    game->maps->sun_clock = sfClock_create();
    game->maps->sun = create_sprite(path, rect_sun, pos_sun, scale);
}
