/*
** EPITECH PROJECT, 2022
** DIsplay Pause Menu for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void display_pause_menu(game_t *game)
{
    pause_menu_t *menu = game->assets->pause_menu;

    sfRenderWindow_drawSprite(game->window, menu->bg, NULL);
    display_buttons_pause_menu(game);
    display_top_bar(game, PAUSE_STAGE);
}
