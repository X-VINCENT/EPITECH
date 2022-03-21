/*
** EPITECH PROJECT, 2022
** Display Cards Plants Menu for My Defender
** File description:
** Xavier VINCENT  - Max PEIXOTO
*/

#include "my_defender.h"

void display_cards_plants_menu(game_t *game)
{
    plants_menu_t *menu = game->assets->plants_menu;

    display_plants_plants_menu(game);
    display_zombies_plants_menu(game);
}

void display_plants_plants_menu(game_t *game)
{
    plants_menu_t *menu = game->assets->plants_menu;

    for (int idx = 0; menu->plants_off[idx] != NULL; idx += 1) {
        if (menu->plants_cards_status[idx] == 1) {
            sfRenderWindow_drawSprite(
                game->window, menu->plants_on[idx], NULL);
            sfRenderWindow_drawSprite(
                game->window, menu->plants_description[idx], NULL);
        } else
            sfRenderWindow_drawSprite(
                game->window, menu->plants_off[idx], NULL);
    }
}

void display_zombies_plants_menu(game_t *game)
{
    plants_menu_t *menu = game->assets->plants_menu;

    for (int idx = 0; menu->zombies_off[idx] != NULL; idx += 1) {
        if (menu->zombies_cards_status[idx] == 1) {
            sfRenderWindow_drawSprite(
                game->window, menu->zombies_on[idx], NULL);
            sfRenderWindow_drawSprite(
                game->window, menu->zombies_description[idx], NULL);
        } else
            sfRenderWindow_drawSprite(
                game->window, menu->zombies_off[idx], NULL);
    }
}
