/*
** EPITECH PROJECT, 2022
** Init Map Data for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

map_t *init_map(const char *path)
{
    map_t *map = malloc(sizeof(map_t));
    int nb_lines = get_map_lines(path);
    int *col_sizes = get_map_col_sizes(path);

    if (nb_lines != NB_LINES) {
        my_puterror(INVALID_MAP);
        return NULL;
    }
    for (int idx = 0; idx != NB_LINES - 1; idx += 1)
        if (col_sizes[idx] != NB_COLS) {
            my_puterror(INVALID_MAP);
            return NULL;
        }
    map->map = load_map(path, nb_lines, col_sizes);
    map->objects = init_objects(map->map);
    map->plants = init_plants_struct_map(map);
    init_score_map(map);
    map->current_wave = 0;
    free(col_sizes);
    return map;
}

object_t **init_objects(char **map)
{
    object_t **objects = malloc(sizeof(object_t *) * NB_LINES * NB_COLS + 1);
    int idx = 0;

    for (int y = 0; map[y] != NULL; y += 1) {
        for (int x = 0; map[y][x] != '\0'; x += 1) {
            objects[idx] = create_object(map, x, y);
            idx += 1;
        }
    }
    objects[idx] = NULL;
    return objects;
}

object_t *create_object(char **map, int x, int y)
{
    object_t *object = malloc(sizeof(object_t));
    sfIntRect r_grass = init_rect(0, 0, BLK_SIZE, BLK_SIZE);
    sfIntRect r_path = init_rect(BLK_SIZE, 0, BLK_SIZE, BLK_SIZE);
    sfVector2f pos = {x * BLK_SIZE, y * BLK_SIZE};
    sfVector2f scale = init_scale(1, 1);

    object->x = x;
    object->y = y;
    if (map[y][x] == '1') {
        object->sprite = create_sprite(BLK_PATH, r_grass, pos, scale);
        object->type = GRASS;
    }
    if (map[y][x] == '2') {
        object->sprite = create_sprite(BLK_PATH, r_path, pos, scale);
        object->type = PATH;
    }
    object = create_object_2(object, map, x, y);
    return object;
}

object_t *create_object_2(object_t *object, char **map, int x, int y)
{
    sfIntRect r_pot = init_rect(2 * BLK_SIZE, 0, BLK_SIZE, BLK_SIZE);
    sfIntRect r_spawner = init_rect(3 * BLK_SIZE, 0, BLK_SIZE, BLK_SIZE);
    sfIntRect r_house = init_rect(4 * BLK_SIZE, 0, BLK_SIZE, BLK_SIZE);
    sfVector2f pos = {x * BLK_SIZE, y * BLK_SIZE};
    sfVector2f scale = init_scale(1, 1);

    if (map[y][x] == '3') {
        object->sprite = create_sprite(BLK_PATH, r_pot, pos, scale);
        object->type = POT;
    }
    if (map[y][x] == '4') {
        object->sprite = create_sprite(BLK_PATH, r_spawner, pos, scale);
        object->type = SPAWNER;
    }
    if (map[y][x] == '5') {
        object->sprite = create_sprite(BLK_PATH, r_house, pos, scale);
        object->type = HOUSE;
    }
    return object;
}

plant_t **init_plants_struct_map(map_t *map)
{
    plant_t **plants = malloc(sizeof(plant_t *) * 500 + 1);

    for (int idx = 0; idx <= 500; idx += 1)
        plants[idx] = NULL;
    return plants;
}
