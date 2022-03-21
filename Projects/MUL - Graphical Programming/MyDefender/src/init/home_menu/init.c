/*
** EPITECH PROJECT, 2022
** Init Home Menu for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void init_home_menu(game_t *game)
{
    sfIntRect rect = init_rect(0, 0, 1920, 1080);
    sfVector2f pos = init_pos(0, 0);
    sfVector2f scale = init_scale(1, 1);

    if (!game)
        return;
    game->assets->home_menu = malloc(sizeof(home_menu_t));
    game->assets->home_menu->bg = create_sprite(
        "assets/pictures/backgrounds/home_menu.png", rect, pos, scale);
    game->assets->home_menu->music = create_music(
        "assets/audio/musics/start_menu.ogg");
    game->assets->home_menu->clock = sfClock_create();
    init_cards_home_menu(game);
}

void init_cards_home_menu(game_t *game)
{
    init_maps_home_menu(game);
    init_plants_zombies_home_menu(game);
    init_stats_home_menu(game);
    init_settings_home_menu(game);
    init_howtoplay_home_menu(game);
}
