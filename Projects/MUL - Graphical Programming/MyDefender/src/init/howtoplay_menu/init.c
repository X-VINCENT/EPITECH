/*
** EPITECH PROJECT, 2022
** Init How to play Menu for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void init_howtoplay_menu(game_t *game)
{
    sfIntRect rect = init_rect(0, 0, 1920, 1080);
    sfVector2f pos = init_pos(0, 0);
    sfVector2f scale = init_scale(1, 1);

    if (!game)
        return;
    game->assets->howtoplay_menu = malloc(sizeof(howtoplay_menu_t));
    game->assets->howtoplay_menu->bg = create_sprite(
        "assets/pictures/backgrounds/howtoplay_menu.png", rect, pos, scale);
    game->assets->howtoplay_menu->clock = sfClock_create();
}
