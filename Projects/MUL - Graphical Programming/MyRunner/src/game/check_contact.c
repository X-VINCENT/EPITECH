/*
** EPITECH PROJECT, 2022
** Check Contact for My Runner
** File description:
** Xavier VINCENT
*/

#include "my_runner.h"

void check_contact(game_t *game)
{
    if (!game)
        return;
    for (int i = 0; i < game->map->boxes_index; i += 1)
        check_contact_boxes(game, i);
    for (int i = 0; i < game->map->snowmans_index; i += 1)
        check_contact_snowmans(game, i);
    for (int i = 0; i < game->map->coins_index; i += 1)
        check_contact_coins(game, i);
}

void check_contact_boxes(game_t *game, int i)
{
    map_t *map = game->map;
    character_t *character = game->assets->character;
    sfFloatRect r_boxes = sfSprite_getGlobalBounds(map->boxes[i]);
    sfFloatRect r_character = sfSprite_getGlobalBounds(character->run);
    sfVector2f pos_top_box = {
        sfSprite_getPosition(character->run).x, r_boxes.top - 102};
    sfVector2f position = {10000.00, 10000.00};

    if (!game)
        return;
    if ((sfFloatRect_intersects(&r_boxes, &r_character, NULL)) &&
        character->jump == 1)
        sfSprite_setPosition(character->run, pos_top_box);
    else if ((sfFloatRect_intersects(&r_boxes, &r_character, NULL)) &&
        character->jump == 0)
        sfSprite_setPosition(character->run, pos_top_box);
}

void check_contact_snowmans(game_t *game, int i)
{
    character_t *character = game->assets->character;
    sfFloatRect r_snowman = sfSprite_getGlobalBounds(game->map->snowmans[i]);
    sfFloatRect r_character = sfSprite_getGlobalBounds(character->run);

    r_snowman.left += 50;
    r_snowman.top += 10;
    r_snowman.height -= 10;
    r_snowman.width -= 50;
    if (sfFloatRect_intersects(&r_snowman, &r_character, NULL)) {
        sfSound_play(game->assets->character->death);
        if (game->score->score > game->score->best_score) {
            game->score->best_score = game->score->score;
            game->assets->results_menu->result = 1;
        } else
            game->assets->results_menu->result = 0;
        game->stage = 4;
    }
}

void check_contact_coins(game_t *game, int i)
{
    character_t *character = game->assets->character;
    sfFloatRect r_coin = sfSprite_getGlobalBounds(game->map->coins[i]);
    sfFloatRect r_character = sfSprite_getGlobalBounds(character->run);
    sfVector2f pos = sfSprite_getPosition(game->map->coins[i]);
    sfVector2f new_pos = {
        game->map->nb_cols * game->map->sprite_size + pos.x + 64, pos.y};

    if (sfFloatRect_intersects(&r_coin, &r_character, NULL)) {
        game->score->score += 10;
        sfSprite_setPosition(game->map->coins[i], new_pos);
        sfSound_play(game->map->coin_sound);
    }
}
