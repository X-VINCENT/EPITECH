/*
** EPITECH PROJECT, 2022
** Display Home Menu for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void display_home_menu(game_t *game)
{
    home_menu_t *menu = game->assets->home_menu;

    sfRenderWindow_drawSprite(game->window, menu->bg, NULL);
    display_cards_home_menu(game);
    display_top_bar(game, HOME_STAGE);
    play_music(menu->music);
}

void display_cards_home_menu(game_t *game)
{
    display_maps_home_menu(game);
    display_plants_zombies_home_menu(game);
    display_stats_home_menu(game);
    display_settings_home_menu(game);
    display_howtoplay_home_menu(game);
}
