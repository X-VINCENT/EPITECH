/*
** EPITECH PROJECT, 2022
** Display Start Menu for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void display_start_menu(game_t *game)
{
    start_menu_t *menu = game->assets->start_menu;

    sfRenderWindow_drawSprite(game->window, menu->bg, NULL);
    sfRenderWindow_drawSprite(game->window, menu->play, NULL);
    sfRenderWindow_drawSprite(game->window, menu->quit, NULL);
    play_music(menu->music);
}
