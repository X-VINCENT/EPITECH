/*
** EPITECH PROJECT, 2022
** Init Plants Bottom Gamebar for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void init_plants_bottom_gamebar(game_t *game)
{
    bottom_gamebar_t *bar = game->assets->bottom_gamebar;
    const char path[] = "assets/pictures/game.png";
    sfIntRect rect = init_rect(0, 1711, 96, 96);
    sfVector2f pos = {380, 965};
    sfVector2f origin = {rect.width / 2, rect.height / 2};
    sfVector2f scale = init_scale(1, 1);

    bar->plants = malloc(sizeof(sfSprite *) * 6);
    for (int idx = 0; idx != 5; idx += 1) {
        bar->plants[idx] = create_sprite(path, rect, pos, scale);
        sfSprite_setOrigin(bar->plants[idx], origin);
        rect.left += 96;
        pos.x += 160;
    }
    bar->plants[5] = NULL;
}
