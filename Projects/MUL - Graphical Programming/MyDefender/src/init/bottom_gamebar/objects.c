/*
** EPITECH PROJECT, 2022
** Init Objects Bottom Gamebar for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void init_objects_bottom_gamebar(game_t *game)
{
    bottom_gamebar_t *bar = game->assets->bottom_gamebar;
    const char path[] = "assets/pictures/game.png";
    sfIntRect r_fertilizer = init_rect(1129, 0, 82, 89);
    sfIntRect r_transplanter = init_rect(1213, 0, 133, 131);
    sfVector2f p_fertilizer = init_pos(1176, 960);
    sfVector2f p_transplanter = init_pos(1361, 975);
    sfVector2f o_fertilizer = {
        r_fertilizer.width / 2, r_fertilizer.height / 2};
    sfVector2f o_transplanter = {
        r_transplanter.width / 2, r_transplanter.height / 2};
    sfVector2f scale = init_scale(1, 1);

    bar->fertilizer = create_sprite(
        path, r_fertilizer, p_fertilizer, scale);
    bar->transplanter = create_sprite(
        path, r_transplanter, p_transplanter, scale);
    sfSprite_setOrigin(bar->fertilizer, o_fertilizer);
    sfSprite_setOrigin(bar->transplanter, o_transplanter);
}
