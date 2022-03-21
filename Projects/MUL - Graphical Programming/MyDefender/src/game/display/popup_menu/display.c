/*
** EPITECH PROJECT, 2022
** Display Popup Menu for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void display_popup_menu(game_t *game)
{
    popup_menu_t *menu = game->assets->popup_menu;

    sfRenderWindow_drawSprite(game->window, menu->popup, NULL);
    if (menu->hover_yes == 1)
        sfRenderWindow_drawSprite(game->window, menu->yes_on, NULL);
    else
        sfRenderWindow_drawSprite(game->window, menu->yes_off, NULL);
    if (menu->hover_no == 1)
        sfRenderWindow_drawSprite(game->window, menu->no_on, NULL);
    else
        sfRenderWindow_drawSprite(game->window, menu->no_off, NULL);
    menu->hover_yes = 0;
    menu->hover_no = 0;
}
