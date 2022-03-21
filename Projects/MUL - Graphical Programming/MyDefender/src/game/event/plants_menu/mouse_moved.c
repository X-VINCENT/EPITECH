/*
** EPITECH PROJECT, 2022
** Mouse Moved Plants Menu for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void mouse_moved_plants_menu(game_t *game)
{
    mouse_moved_plants_cards_plants_menu(game);
    mouse_moved_zombies_cards_plants_menu(game);
    mouse_moved_top_bar(game, PLANTS_STAGE);
}

void mouse_moved_plants_cards_plants_menu(game_t *game)
{
    plants_menu_t *menu = game->assets->plants_menu;
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse, NULL);
    sfFloatRect rect;

    for (int idx = 0; menu->plants_off[idx] != NULL; idx += 1) {
        rect = sfSprite_getGlobalBounds(menu->plants_off[idx]);
        if (sfFloatRect_contains(&rect, coords.x, coords.y))
            menu->plants_cards_status[idx] = 1;
        else
            menu->plants_cards_status[idx] = 0;
    }
}

void mouse_moved_zombies_cards_plants_menu(game_t *game)
{
    plants_menu_t *menu = game->assets->plants_menu;
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse, NULL);
    sfFloatRect rect;

    for (int idx = 0; menu->zombies_off[idx] != NULL; idx += 1) {
        rect = sfSprite_getGlobalBounds(menu->zombies_off[idx]);
        if (sfFloatRect_contains(&rect, coords.x, coords.y))
            menu->zombies_cards_status[idx] = 1;
        else
            menu->zombies_cards_status[idx] = 0;
    }
}
