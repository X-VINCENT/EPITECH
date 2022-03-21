/*
** EPITECH PROJECT, 2022
** Init Maps Menu for My Defender
** File description:
** Xavier VINCENT
*/

#include "my_defender.h"

void init_maps_menu(game_t *game)
{
    const char path[] = "assets/pictures/backgrounds/maps_menu.png";
    sfIntRect rect = init_rect(0, 0, 1920, 1080);
    sfVector2f pos = init_pos(0, 0);
    sfVector2f scale = init_scale(1, 1);

    game->assets->maps_menu = malloc(sizeof(maps_menu_t));
    game->assets->maps_menu->bg = create_sprite(path, rect, pos, scale);
    game->assets->maps_menu->clock = sfClock_create();
    game->assets->maps_menu->cards_status = malloc(sizeof(int) * 6);
    init_cards_maps_off_menu(game);
    init_cards_maps_on_menu(game);
}

void init_cards_maps_off_menu(game_t *game)
{
    maps_menu_t *menu = game->assets->maps_menu;
    const char path[] = "assets/pictures/maps/maps.png";
    sfIntRect rect = init_rect(0, 634, 313, 444);
    sfVector2f pos = init_pos(310, 550);
    sfVector2f origin = {rect.width / 2, rect.height / 2};
    sfVector2f scale = init_scale(1, 1);

    menu->maps_off = malloc(sizeof(sfSprite *) * 6);
    for (int idx = 0; idx != 5; idx += 1) {
        menu->maps_off[idx] = create_sprite(path, rect, pos, scale);
        sfSprite_setOrigin(menu->maps_off[idx], origin);
        rect.left += 314;
        pos.x += 330;
    }
    menu->maps_off[5] = NULL;
}

void init_cards_maps_on_menu(game_t *game)
{
    maps_menu_t *menu = game->assets->maps_menu;
    const char path[] = "assets/pictures/maps/maps.png";
    sfIntRect rect = init_rect(0, 0, 325, 463);
    sfVector2f pos = init_pos(310, 550);
    sfVector2f origin = {rect.width / 2, rect.height - 150};
    sfVector2f scale = init_scale(1, 1);

    menu->maps_on = malloc(sizeof(sfSprite *) * 6);
    for (int idx = 0; idx != 5; idx += 1) {
        menu->maps_on[idx] = create_sprite(path, rect, pos, scale);
        sfSprite_setOrigin(menu->maps_on[idx], origin);
        rect.left += 325;
        pos.x += 330;
    }
    menu->maps_on[5] = NULL;
}
