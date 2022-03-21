/*
** EPITECH PROJECT, 2022
** Draw Objects Map for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void draw_map_objects(game_t *game, map_t *map)
{
    for (int idx = 0; map->objects[idx] != NULL; idx += 1)
        sfRenderWindow_drawSprite(
            game->window, map->objects[idx]->sprite, NULL);
    draw_zombies(game, map);
    draw_plants(game, map);
    sfRenderWindow_drawSprite(game->window, game->maps->sun, NULL);
    check_and_display_score(game, map);
    draw_wave_text(game, map);
}

void draw_plants(game_t *game, map_t *map)
{
    for (int idx = 0; map->plants[idx] != NULL; idx += 1) {
        if (game->show_areas == 1)
            sfRenderWindow_drawCircleShape(
                game->window, map->plants[idx]->area, NULL);
        sfRenderWindow_drawSprite(
            game->window, map->plants[idx]->sprite, NULL);
    }
}

void draw_zombies(game_t *game, map_t *map)
{
    wave_t *wave = map->waves[map->current_wave];
    char *str_health = NULL;

    for (int idx = 0; wave->zombies[idx] != NULL; idx += 1) {
        sfRenderWindow_drawSprite(
            game->window, wave->zombies[idx]->sprite, NULL);
        str_health = my_put_nbr_in_str(wave->zombies[idx]->health);
        sfText_setString(wave->zombies[idx]->health_text, str_health);
        sfRenderWindow_drawText(
            game->window, wave->zombies[idx]->health_text, NULL);
        free(str_health);
    }
}

void draw_wave_text(game_t *game, map_t *map)
{
    sfText *text = game->maps->wave_text;
    char *str_wave;

    if (time_elapsed(game->maps->clock_wave_text) < 3) {
        str_wave = my_strcat(
            "WAVE ", my_put_nbr_in_str(map->current_wave + 1));
        sfText_setString(text, str_wave);
        sfRenderWindow_drawText(game->window, text, NULL);
        free(str_wave);
    }
}
