/*
** EPITECH PROJECT, 2022
** Display Map foir My Runner
** File description:
** Xavier VINCENT
*/

#include "my_runner.h"

void display_map(game_t *game)
{
    if (!game)
        return;
    move_map(game);
    for (int i = 0; i < game->map->boxes_index; i += 1)
        sfRenderWindow_drawSprite(game->window, game->map->boxes[i], NULL);
    for (int i = 0; i < game->map->snowmans_index; i += 1)
        sfRenderWindow_drawSprite(game->window, game->map->snowmans[i], NULL);
    for (int i = 0; i < game->map->coins_index; i += 1)
        sfRenderWindow_drawSprite(game->window, game->map->coins[i], NULL);
}

void move_map(game_t *game)
{
    if (!game)
        return;
    if (sfTime_asSeconds(sfClock_getElapsedTime(game->map->clock)) > 0.01) {
        for (int i = 0; i < game->map->boxes_index; i += 1)
            move_sprite_map(game, game->map->boxes[i]);
        for (int i = 0; i < game->map->snowmans_index; i += 1) {
            move_sprite(game->map->snowmans[i], 128, 1152);
            move_sprite_map(game, game->map->snowmans[i]);
        }
        move_coins(game->map);
        for (int i = 0; i < game->map->coins_index; i += 1)
            move_sprite_map(game, game->map->coins[i]);
        sfClock_restart(game->map->clock);
    }
}

void move_sprite_map(game_t *game, sfSprite *sprite)
{
    if (!game || !sprite)
        return;
    sfVector2f position = sfSprite_getPosition(sprite);
    sfVector2f reset_position = {
        game->map->nb_cols * game->map->sprite_size, position.y};
    sfVector2f new_position = {
        position.x - (8 * game->assets->parallax->speed), position.y};

    if (position.x <= (0 - game->map->sprite_size))
        sfSprite_setPosition(sprite, reset_position);
    else
        sfSprite_setPosition(sprite, new_position);
}

void move_coins(map_t *map)
{
    sfIntRect rect;

    if (!map)
        return;
    if (sfTime_asSeconds(sfClock_getElapsedTime(map->coins_clock)) > 0.1) {
        for (int i = 0; i < map->coins_index; i += 1) {
            rect = sfSprite_getTextureRect(map->coins[i]);
            move_sprite(map->coins[i], 128, 768);
        }
        sfClock_restart(map->coins_clock);
    }
}
