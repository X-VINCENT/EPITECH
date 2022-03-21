/*
** EPITECH PROJECT, 2022
** Init Cards Plants Menu for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void init_cards_plants_menu(game_t *game)
{
    init_plants_off_plants_menu(game);
    init_plants_on_plants_menu(game);
    init_zombies_off_plants_menu(game);
    init_zombies_on_plants_menu(game);
}

void init_plants_off_plants_menu(game_t *game)
{
    plants_menu_t *menu = game->assets->plants_menu;
    const char path[] = "assets/pictures/buttons/buttons.png";
    sfIntRect rect = init_rect(443, 680, 110, 117);
    sfVector2f pos = init_pos(125, 863);
    sfVector2f origin = {rect.width / 2, rect.height / 2};
    sfVector2f scale = init_scale(1, 1);

    menu->plants_off = malloc(sizeof(sfSprite *) * 6);
    for (int idx = 0; idx != 5; idx += 1) {
        menu->plants_off[idx] = create_sprite(path, rect, pos, scale);
        sfSprite_setOrigin(menu->plants_off[idx], origin);
        rect.left += 175;
        pos.x += 130;
    }
    menu->plants_off[5] = NULL;
}

void init_plants_on_plants_menu(game_t *game)
{
    plants_menu_t *menu = game->assets->plants_menu;
    const char path[] = "assets/pictures/buttons/buttons.png";
    sfIntRect rect = init_rect(443, 837, 170, 176);
    sfVector2f pos = init_pos(125, 863);
    sfVector2f origin = {rect.width / 2, rect.height / 2};
    sfVector2f scale = init_scale(1, 1);

    menu->plants_on = malloc(sizeof(sfSprite *) * 6);
    for (int idx = 0; idx != 5; idx += 1) {
        menu->plants_on[idx] = create_sprite(path, rect, pos, scale);
        sfSprite_setOrigin(menu->plants_on[idx], origin);
        rect.left += 174;
        pos.x += 130;
    }
    menu->plants_on[5] = NULL;
}

void init_zombies_off_plants_menu(game_t *game)
{
    plants_menu_t *menu = game->assets->plants_menu;
    const char path[] = "assets/pictures/buttons/buttons.png";
    sfIntRect rect = init_rect(1363, 680, 110, 117);
    sfVector2f pos = init_pos(1050, 863);
    sfVector2f origin = {rect.width / 2, rect.height / 2};
    sfVector2f scale = init_scale(1, 1);

    menu->zombies_off = malloc(sizeof(sfSprite *) * 7);
    for (int idx = 0; idx != 6; idx += 1) {
        menu->zombies_off[idx] = create_sprite(path, rect, pos, scale);
        sfSprite_setOrigin(menu->zombies_off[idx], origin);
        rect.left += 181;
        pos.x += 130;
    }
    menu->zombies_off[6] = NULL;
}

void init_zombies_on_plants_menu(game_t *game)
{
    plants_menu_t *menu = game->assets->plants_menu;
    const char path[] = "assets/pictures/buttons/buttons.png";
    sfIntRect rect = init_rect(1363, 836, 170, 176);
    sfVector2f pos = init_pos(1050, 863);
    sfVector2f origin = {rect.width / 2, rect.height / 2};
    sfVector2f scale = init_scale(1, 1);

    menu->zombies_on = malloc(sizeof(sfSprite *) * 7);
    for (int idx = 0; idx != 6; idx += 1) {
        menu->zombies_on[idx] = create_sprite(path, rect, pos, scale);
        sfSprite_setOrigin(menu->zombies_on[idx], origin);
        rect.left += 182;
        pos.x += 130;
    }
    menu->zombies_on[6] = NULL;
}
