/*
** EPITECH PROJECT, 2022
** Display howtoplay Menu for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void display_howtoplay_menu(game_t *game)
{
    howtoplay_menu_t *menu = game->assets->howtoplay_menu;

    sfRenderWindow_drawSprite(game->window, menu->bg, NULL);
    display_top_bar(game, HOWTOPLAY_STAGE);
}
