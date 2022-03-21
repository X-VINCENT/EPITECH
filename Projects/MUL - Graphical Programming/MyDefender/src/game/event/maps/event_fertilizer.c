/*
** EPITECH PROJECT, 2022
** Event Fertilizer Maps for MyDefender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void event_fertilizer(game_t *game, map_t *map)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse, NULL);
    sfFloatRect r_plant;

    if (game->is_fertilizer_selected != 1 ||
        game->maps->money < FERTILIZER_PRICE)
        return;
    for (int idx = 0; map->plants[idx] != NULL; idx += 1) {
        r_plant = sfSprite_getGlobalBounds(map->plants[idx]->sprite);
        if (sfFloatRect_contains(&r_plant, coords.x, coords.y)) {
            check_plant_to_upgrade(game, map->plants[idx]);
            game->is_fertilizer_selected = 0;
            return;
        }
    }
}

void check_plant_to_upgrade(game_t *game, plant_t *plant)
{
    if (plant->name == SUNFLOWER)
        return;
    switch (plant->level) {
        case 1:
            upgrade_plant_to_level_2(game, plant);
            plant->level = 2;
            break;
        case 2:
            upgrade_plant_to_level_3(game, plant);
            plant->level = 3;
        default:
            break;
    }
    game->maps->money -= FERTILIZER_PRICE;
    sfSound_play(game->assets->sounds->plant);
}

void upgrade_plant_to_level_2(game_t *game, plant_t *plant)
{
    switch (plant->name) {
        case PEASHOOTER:
            plant->damage += PEASHOOTER_DAMAGE_UP_1;
            break;
        case TORCHWOOD:
            plant->damage += TORCHWOOD_DAMAGE_UP_1;
            break;
        case MINE_POTATO:
            plant->damage += MINE_POTATO_DAMAGE_UP_1;
            break;
        case ICE_SHOOTER:
            plant->damage += ICE_SHOOTER_DAMAGE_UP_1;
            break;
        default:
            break;
    }
}

void upgrade_plant_to_level_3(game_t *game, plant_t *plant)
{
    switch (plant->name) {
        case PEASHOOTER:
            plant->damage += PEASHOOTER_DAMAGE_UP_2;
            break;
        case TORCHWOOD:
            plant->damage += TORCHWOOD_DAMAGE_UP_2;
            break;
        case MINE_POTATO:
            plant->damage += MINE_POTATO_DAMAGE_UP_2;
            break;
        case ICE_SHOOTER:
            plant->damage += ICE_SHOOTER_DAMAGE_UP_2;
            break;
        default:
            break;
    }
}
