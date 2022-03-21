/*
** EPITECH PROJECT, 2022
** Init Map for My Runner
** File description:
** Xavier VINCENT
*/

#include "my_runner.h"

void init_map(game_t *game, const char *map_path)
{
    if (!game || !map_path)
        return;
    game->map = malloc(sizeof(map_t));
    game->map->sprite_size = 64;
    game->map->nb_rows = get_nb_of_rows(map_path);
    game->map->nb_cols = get_nb_of_cols(map_path);
    game->map->map = load_map(map_path);
    game->map->coin_sound = create_sound("assets/sounds/coin.ogg");
    init_sprite_map(game->map);
}

void init_sprite_map(map_t *map)
{
    if (!map)
        return;
    map->boxes = malloc(sizeof(sfSprite *) * 1024);
    map->snowmans = malloc(sizeof(sfSprite *) * 1024);
    map->coins = malloc(sizeof(sfSprite *) * 1024);
    map->boxes_index = 0;
    map->snowmans_index = 0;
    map->coins_index = 0;
    for (int i = 0; i <= map->nb_rows; i += 1)
        for (int j = 0; j <= map->nb_cols; j += 1) {
            create_map_sprites(map, i, j);
            create_map_sprites_2(map, i, j);
        }
    map->clock = sfClock_create();
    map->coins_clock = sfClock_create();
}

void create_map_sprites(map_t *map, int i, int j)
{
    sfIntRect *r_box = init_rect(0, 0, 128, 128);
    sfIntRect *r_sm = init_rect(0, 0, 128, 146);
    sfVector2f scale = {0.5, 0.5};
    sfVector2f pos = {j * map->sprite_size, i * map->sprite_size};

    if (!map)
        return;
    if (map->map[i][j] == '2') {
        map->boxes[map->boxes_index] = create_sprite(
            "assets/pictures/objects/box.png", r_box, pos, scale);
        map->boxes_index += 1;
    }
    if (map->map[i][j] == '3') {
        map->snowmans[map->snowmans_index] = create_sprite(
            "assets/pictures/character/snowman.png", r_sm, pos, scale);
        map->snowmans_index += 1;
    }
    free(r_box);
    free(r_sm);
}

void create_map_sprites_2(map_t *map, int i, int j)
{
    sfIntRect *r_coin = init_rect(0, 0, 128, 128);
    sfVector2f scale = {0.25, 0.25};
    sfVector2f pos = {j * map->sprite_size + 16, i * map->sprite_size};
    sfVector2f origin = {64, 64};

    if (!map)
        return;
    if (map->map[i][j] == '4') {
        map->coins[map->coins_index] = create_sprite(
            "assets/pictures/objects/coin.png", r_coin, pos, scale);
        map->coins_index += 1;
    }
    free(r_coin);
}
