/*
** EPITECH PROJECT, 2022
** Display Plants Menu for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void display_plants_menu(game_t * game)
{
    plants_menu_t *menu = game->assets->plants_menu;

    sfRenderWindow_drawSprite(game->window, menu->bg, NULL);
    display_cards_plants_menu(game);
    display_top_bar(game, PLANTS_STAGE);
}
