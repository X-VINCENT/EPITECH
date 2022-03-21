/*
** EPITECH PROJECT, 2022
** Init Buttons Bottom Gamebar for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void init_buttons_bottom_gamebar(game_t *game)
{
    bottom_gamebar_t *bar = game->assets->bottom_gamebar;
    const char path[] = "assets/pictures/game.png";
    sfIntRect r_speed_normal = init_rect(863, 0, 117, 118);
    sfIntRect r_speed_fast = init_rect(1368, 0, 117, 118);
    sfIntRect r_pause = init_rect(1010, 0, 117, 118);
    sfVector2f p_speed = init_pos(1605, 975);
    sfVector2f p_pause = init_pos(1775, 975);
    sfVector2f origin = {r_speed_normal.width / 2, r_speed_normal.height / 2};
    sfVector2f scale = init_scale(1, 1);

    bar->speed_button = malloc(sizeof(sfSprite *) * 3);
    bar->speed_button[0] = create_sprite(path, r_speed_normal, p_speed, scale);
    bar->speed_button[1] = create_sprite(path, r_speed_fast, p_speed, scale);
    bar->speed_button[2] = NULL;
    bar->pause_button = create_sprite(path, r_pause, p_pause, scale);
    for (int idx = 0; bar->speed_button[idx] != NULL; idx += 1)
        sfSprite_setOrigin(bar->speed_button[idx], origin);
    sfSprite_setOrigin(bar->pause_button, origin);
}
