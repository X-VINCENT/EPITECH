/*
** EPITECH PROJECT, 2022
** Init Settings Menu for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void init_settings_menu(game_t *game)
{
    sfIntRect rect = init_rect(0, 0, 1920, 1080);
    sfVector2f pos = init_pos(0, 0);
    sfVector2f scale = {1.00, 1.00};

    game->assets->settings_menu = malloc(sizeof(settings_menu_t));
    game->assets->settings_menu->bg = create_sprite(
        "assets/pictures/backgrounds/settings_menu.png", rect, pos, scale);
    game->assets->settings_menu->clock = sfClock_create();
    init_bars_settings_menu(game);
    init_fps_settings_menu(game);
    init_res_settings_menu(game);
}
