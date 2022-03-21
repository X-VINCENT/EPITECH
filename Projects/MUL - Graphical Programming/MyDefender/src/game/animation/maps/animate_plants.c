/*
** EPITECH PROJECT, 2022
** Animate Plants Maps for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void animate_plants(game_t *game, map_t *map)
{
    for (int idx = 0; map->plants[idx] != NULL; idx += 1) {
        check_plant_to_anim_1(game, map, idx);
        check_plant_to_anim_2(game, map, idx);
    }
}

void check_plant_to_anim_1(game_t *game, map_t *map, int idx)
{
    enum plant_name name = map->plants[idx]->name;
    float time = time_elapsed(map->plants[idx]->clock_anim) * game->speed;
    sfSprite *sprite = map->plants[idx]->sprite;

    if (name == PEASHOOTER && time > 2 / PEASHOOTER_ANIM_SPEED) {
        animate_sprite(sprite, PEASHOOTER_OFFSET, PEASHOOTER_MAX_VALUE);
        sfClock_restart(map->plants[idx]->clock_anim);
    }
    if (name == SUNFLOWER && time > 2 / SUNFLOWER_ANIM_SPEED) {
        animate_sprite(sprite, SUNFLOWER_OFFSET, SUNFLOWER_MAX_VALUE);
        sfClock_restart(map->plants[idx]->clock_anim);
    }
    if (name == TORCHWOOD && time > 2 / TORCHWOOD_ANIM_SPEED) {
        animate_sprite(sprite, TORCHWOOD_OFFSET, TORCHWOOD_MAX_VALUE);
        sfClock_restart(map->plants[idx]->clock_anim);
    }
}

void check_plant_to_anim_2(game_t *game, map_t *map, int idx)
{
    enum plant_name name = map->plants[idx]->name;
    float time = time_elapsed(map->plants[idx]->clock_anim) * game->speed;
    sfSprite *sprite = map->plants[idx]->sprite;

    if (name == MINE_POTATO && time > 2 / MINE_POTATO_ANIM_SPEED) {
        animate_sprite(sprite, MINE_POTATO_OFFSET, MINE_POTATO_MAX_VALUE);
        sfClock_restart(map->plants[idx]->clock_anim);
    }
    if (name == ICE_SHOOTER && time > 2 / ICE_SHOOTER_ANIM_SPEED) {
        animate_sprite(sprite, ICE_SHOOTER_OFFSET, ICE_SHOOTER_MAX_VALUE);
        sfClock_restart(map->plants[idx]->clock_anim);
    }
}
