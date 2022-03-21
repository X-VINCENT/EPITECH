/*
** EPITECH PROJECT, 2022
** Display Cards Home Menu for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void display_maps_home_menu(game_t *game)
{
    home_menu_t *menu = game->assets->home_menu;

    if (menu->maps_status == 1)
        sfRenderWindow_drawSprite(game->window, menu->maps_on, NULL);
    else
        sfRenderWindow_drawSprite(game->window, menu->maps_off, NULL);
}

void display_plants_zombies_home_menu(game_t *game)
{
    home_menu_t *menu = game->assets->home_menu;

    if (menu->plants_status == 1)
        sfRenderWindow_drawSprite(game->window, menu->zombies, NULL);
    else
        sfRenderWindow_drawSprite(game->window, menu->plants, NULL);
}

void display_stats_home_menu(game_t *game)
{
    home_menu_t *menu = game->assets->home_menu;

    if (menu->stats_status == 1)
        sfRenderWindow_drawSprite(game->window, menu->stats_on, NULL);
    else
        sfRenderWindow_drawSprite(game->window, menu->stats_off, NULL);
}

void display_settings_home_menu(game_t *game)
{
    home_menu_t *menu = game->assets->home_menu;

    if (menu->settings_status == 1)
        sfRenderWindow_drawSprite(game->window, menu->settings_on, NULL);
    else
        sfRenderWindow_drawSprite(game->window, menu->settings_off, NULL);
}

void display_howtoplay_home_menu(game_t *game)
{
    home_menu_t *menu = game->assets->home_menu;

    if (menu->howtoplay_status == 1)
        sfRenderWindow_drawSprite(game->window, menu->howtoplay_on, NULL);
    else
        sfRenderWindow_drawSprite(game->window, menu->howtoplay_off, NULL);
}
