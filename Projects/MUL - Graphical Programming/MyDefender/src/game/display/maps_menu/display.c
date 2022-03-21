/*
** EPITECH PROJECT, 2022
** Display Maps Menu for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void display_maps_menu(game_t *game)
{
    maps_menu_t *menu = game->assets->maps_menu;

    sfRenderWindow_drawSprite(game->window, menu->bg, NULL);
    display_cards_maps_menu(game);
    display_top_bar(game, MAPS_STAGE);
}

void display_cards_maps_menu(game_t *game)
{
    maps_menu_t *menu = game->assets->maps_menu;

    for (int idx = 0; menu->maps_off[idx] != NULL; idx += 1) {
        if (menu->cards_status[idx] == 1)
            sfRenderWindow_drawSprite(game->window, menu->maps_on[idx], NULL);
        else
            sfRenderWindow_drawSprite(
                game->window, menu->maps_off[idx], NULL);
    }
}
