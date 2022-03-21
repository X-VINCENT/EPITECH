/*
** EPITECH PROJECT, 2022
** Animate Zombies Map for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void animate_zombies_map(game_t *game, map_t *map, int idx_wave)
{
    sfClock *clock;
    int anim_speed = 0;

    for (int idx_zombie = 0;
        map->waves[idx_wave]->zombies[idx_zombie] != NULL; idx_zombie += 1) {
        clock = map->waves[idx_wave]->zombies[idx_zombie]->clock_animate;
        anim_speed = map->waves[idx_wave]->zombies[idx_zombie]->anim_speed;
        if (time_elapsed(clock) > 0.1 / game->speed / anim_speed) {
            animate_zombies_map_2(game, map, idx_wave, idx_zombie);
            sfClock_restart(clock);
        }
    }
}

void animate_zombies_map_2(
    game_t *game, map_t *map, int idx_wave, int idx_zombie)
{
    zombie_t *zombie = map->waves[idx_wave]->zombies[idx_zombie];
    enum name name = zombie->name;
    sfSprite *sprite = zombie->sprite;

    if (name == HUGO)
        animate_sprite(sprite, HUGO_OFFSET, HUGO_MAX_VALUE);
    if (name == MAX)
        animate_sprite(sprite, MAX_OFFSET, MAX_MAX_VALUE);
    if (name == GAUTIER)
        animate_sprite(sprite, GAUTIER_OFFSET, GAUTIER_MAX_VALUE);
    if (name == MICHAEL_JACKSON)
        animate_sprite(sprite, MICHAEL_OFFSET, MICHAEL_MAX_VALUE);
}
