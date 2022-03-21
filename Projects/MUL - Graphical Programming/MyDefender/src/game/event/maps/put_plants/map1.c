/*
** EPITECH PROJECT, 2022
** Put Plants on Map 1 for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void put_plant_on_map1(game_t *game)
{
    bottom_gamebar_t *bar = game->assets->bottom_gamebar;
    map_t *map = game->maps->map1;
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse, NULL);

    for (int idx = 0; map->objects[idx] != NULL; idx += 1) {
        if (check_if_placement_is_ok(game, map, coords, idx)) {
            create_plant(
                game, map, sfSprite_getPosition(map->objects[idx]->sprite));
            game->stats->plants_planted += 1;
        }
    }
}

int check_if_placement_is_ok(
    game_t *game, map_t *map, sfVector2f coords, int idx_obj)
{
    int plant = game->plant_selected;
    sfFloatRect rect = sfSprite_getGlobalBounds(
        map->objects[idx_obj]->sprite);
    sfFloatRect rect_plant;

    if (!(sfFloatRect_contains(&rect, coords.x, coords.y) &&
        (map->objects[idx_obj]->type == POT && plant != MINE_POTATO ||
        map->objects[idx_obj]->type == PATH && plant == MINE_POTATO)))
        return 0;
    for (int idx = 0; map->plants[idx] != NULL; idx += 1) {
        rect_plant = sfSprite_getGlobalBounds(map->plants[idx]->sprite);
        if (sfFloatRect_contains(&rect_plant, coords.x, coords.y))
            return 0;
    }
    return 1;
}

void create_plant(game_t *game, map_t *map, sfVector2f pos)
{
    int idx = 0;

    while (map->plants[idx] != NULL)
        idx += 1;
    if (!check_money(game))
        return;
    switch (game->plant_selected) {
        case PEASHOOTER:
            map->plants[idx] = create_peashooter(pos);
            game->maps->money -= PEASHOOTER_PRICE;
            break;
        default:
            create_plant_2(game, map, pos, idx);
            break;
    }
}

void create_plant_2(game_t *game, map_t *map, sfVector2f pos, int idx)
{
    switch (game->plant_selected) {
        case SUNFLOWER:
            map->plants[idx] = create_sunflower(pos);
            game->maps->sunflower_value += 25;
            game->maps->money -= SUNFLOWER_PRICE;
            break;
        case TORCHWOOD:
            map->plants[idx] = create_torchwood(pos);
            game->maps->money -= TORCHWOOD_PRICE;
            break;
        case MINE_POTATO:
            map->plants[idx] = create_mine_potato(pos);
            game->maps->money -= MINE_POTATO_PRICE;
            break;
        case ICE_SHOOTER:
            map->plants[idx] = create_ice_shooter(pos);
            game->maps->money -= ICE_SHOOTER_PRICE;
        default:
            break;
    }
}
