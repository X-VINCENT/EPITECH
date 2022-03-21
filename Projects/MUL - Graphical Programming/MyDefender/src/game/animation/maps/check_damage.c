/*
** EPITECH PROJECT, 2022
** Check Damage Map 1 for My Defender
** File description:
** Xavier IVNCENT - Max PEIXOTO
*/

#include "my_defender.h"

void check_damage(game_t *game, map_t *map, wave_t *wave)
{
    sfFloatRect plant_area;

    map->tmp_damage = 0;
    map->tmp_zombies_killed = 0;
    for (int idx = 0; map->plants[idx] != NULL; idx += 1) {
        plant_area = sfCircleShape_getGlobalBounds(map->plants[idx]->area);
        if (map->plants[idx]->speed > 0 && time_elapsed(
            map->plants[idx]->clock_damage) * game->speed >
            map->plants[idx]->speed) {
            check_contact_plant_zombie(map, wave, plant_area, idx);
            sfClock_restart(map->plants[idx]->clock_damage);
        } else if (map->plants[idx]->speed <= 0)
            check_contact_plant_zombie(map, wave, plant_area, idx);
    }
    game->stats->damage_caused += map->tmp_damage;
    game->stats->zombies_killed += map->tmp_zombies_killed;
}

void check_contact_plant_zombie(
    map_t *map, wave_t *wave, sfFloatRect plant_area, int idx)
{
    sfVector2f new_pos = init_pos(200, -3000);

    for (int idx2 = 0; wave->zombies[idx2] != NULL; idx2 += 1) {
        if (wave->zombies[idx2]->health <= 0) {
            sfSprite_setPosition(wave->zombies[idx2]->sprite, new_pos);
            sfText_setPosition(wave->zombies[idx2]->health_text, new_pos);
            wave->zombies_alive -= 1;
            wave->zombies[idx2]->health = 1;
            sfSound_play(map->zombie_death);
            map->tmp_zombies_killed += 1;
        }
    }
    check_contact_plant_zombie_2(map, wave, plant_area, idx);
    check_contact_plant_zombie_3(map, wave, plant_area, idx);
}

void check_contact_plant_zombie_2(
    map_t *map, wave_t *wave, sfFloatRect plant_area, int idx)
{
    sfFloatRect zombie_rect;
    sfVector2f new_pos_mine = init_pos(200, -5000);

    for (int idx2 = 0; wave->zombies[idx2] != NULL; idx2 += 1) {
        zombie_rect = sfSprite_getGlobalBounds(wave->zombies[idx2]->sprite);
        if (sfFloatRect_intersects(&zombie_rect, &plant_area, NULL) &&
            map->plants[idx]->name == PEASHOOTER) {
            wave->zombies[idx2]->health -= map->plants[idx]->damage;
            map->tmp_damage += map->plants[idx]->damage;
            return;
        }
        if (sfFloatRect_intersects(&zombie_rect, &plant_area, NULL) &&
            map->plants[idx]->name == MINE_POTATO) {
            wave->zombies[idx2]->health -= map->plants[idx]->damage;
            sfSprite_setPosition(map->plants[idx]->sprite, new_pos_mine);
            sfCircleShape_setPosition(map->plants[idx]->area, new_pos_mine);
            map->tmp_damage += map->plants[idx]->damage;
            return;
        }
    }
}

void check_contact_plant_zombie_3(
    map_t *map, wave_t *wave, sfFloatRect plant_area, int idx)
{
    sfFloatRect zombie_rect;

    for (int idx2 = 0; wave->zombies[idx2] != NULL; idx2 += 1) {
        zombie_rect = sfSprite_getGlobalBounds(wave->zombies[idx2]->sprite);
        if (sfFloatRect_intersects(&zombie_rect, &plant_area, NULL) &&
            map->plants[idx]->name == ICE_SHOOTER)
            wave->zombies[idx2]->speed = wave->zombies[idx2]->default_speed -
                (wave->zombies[idx2]->default_speed *
                map->plants[idx]->damage / 100);
        else
            wave->zombies[idx2]->speed = wave->zombies[idx2]->default_speed;
        if (sfFloatRect_intersects(&zombie_rect, &plant_area, NULL) &&
            map->plants[idx]->name != ICE_SHOOTER &&
            map->plants[idx]->name != PEASHOOTER) {
            wave->zombies[idx2]->health -= map->plants[idx]->damage;
            map->tmp_damage += map->plants[idx]->damage;
        }
    }
}
