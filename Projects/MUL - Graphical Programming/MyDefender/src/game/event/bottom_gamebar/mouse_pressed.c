/*
** EPITECH PROJECT, 2022
** Mouse Pressed Bottom Gamebar for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void mouse_pressed_bottom_gamebar(game_t *game)
{
    bottom_gamebar_t *bar = game->assets->bottom_gamebar;
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse, NULL);
    sfFloatRect r_transplanter = sfSprite_getGlobalBounds(bar->transplanter);
    sfFloatRect r_speed = sfSprite_getGlobalBounds(bar->speed_button[0]);
    sfFloatRect r_pause = sfSprite_getGlobalBounds(bar->pause_button);

    if (sfFloatRect_contains(&r_transplanter, coords.x, coords.y))
        game->trans_selected = 1;
    if (sfFloatRect_contains(&r_speed, coords.x, coords.y)) {
        if (game->speed == 1)
            game->speed = 2;
        else
            game->speed = 1;
    }
    if (sfFloatRect_contains(&r_pause, coords.x, coords.y))
        game->stage = PAUSE_STAGE;
    mouse_pressed_plants_bottom_gamebar(game);
}

void mouse_pressed_plants_bottom_gamebar(game_t *game)
{
    bottom_gamebar_t *bar = game->assets->bottom_gamebar;
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse, NULL);
    sfFloatRect r_plant;
    sfFloatRect r_fertilizer = sfSprite_getGlobalBounds(bar->fertilizer);

    if (sfFloatRect_contains(&r_fertilizer, coords.x, coords.y))
        game->is_fertilizer_selected = 1;
    for (int idx = 0; bar->plants[idx] != NULL; idx += 1) {
        r_plant = sfSprite_getGlobalBounds(bar->plants[idx]);
        if (sfFloatRect_contains(&r_plant, coords.x, coords.y)) {
            select_plant_to_create(game, idx);
        }
    }
}

void select_plant_to_create(game_t *game, int idx)
{
    switch (idx) {
        case 0:
            game->plant_selected = PEASHOOTER;
            break;
        case 1:
            game->plant_selected = SUNFLOWER;
            break;
        case 2:
            game->plant_selected = TORCHWOOD;
            break;
        case 3:
            game->plant_selected = MINE_POTATO;
            break;
        case 4:
            game->plant_selected = ICE_SHOOTER;
            break;
        default:
            break;
    }
}
