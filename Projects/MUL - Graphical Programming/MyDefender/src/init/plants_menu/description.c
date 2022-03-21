/*
** EPITECH PROJECT, 2022
** Description Plants Menu for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void init_description_plants_menu(game_t *game)
{
    init_plants_description_plants_menu(game);
    init_zombies_description_plants_menu(game);
}

void init_plants_description_plants_menu(game_t *game)
{
    plants_menu_t *menu = game->assets->plants_menu;
    menu->plants_description = malloc(sizeof(sfSprite *) * 6);
    const char path[] = "assets/pictures/buttons/description.png";
    sfIntRect rect = init_rect(0, 0, 600, 500);
    sfVector2f pos = init_pos(400, 485);
    sfVector2f origin = {rect.width / 2, rect.height / 2};
    sfVector2f scale = init_scale(1, 1);

    for (int idx = 0; idx != 5; idx += 1) {
        menu->plants_description[idx] = create_sprite(path, rect, pos, scale);
        sfSprite_setOrigin(menu->plants_description[idx], origin);
        rect.top += 505;
    }
    menu->plants_description[5] = NULL;
}

void init_zombies_description_plants_menu(game_t *game)
{
    plants_menu_t *menu = game->assets->plants_menu;
    menu->zombies_description = malloc(sizeof(sfSprite *) * 7);
    const char path[] = "assets/pictures/buttons/description.png";
    sfIntRect rect = init_rect(1200, 0, 800, 501);
    sfVector2f pos = init_pos(1350, 485);
    sfVector2f origin = {rect.width / 2, rect.height / 2};
    sfVector2f scale = init_scale(1, 1);

    for (int idx = 0; idx != 6; idx += 1) {
        menu->zombies_description[idx] = create_sprite(
            path, rect, pos, scale);
        sfSprite_setOrigin(menu->zombies_description[idx], origin);
        rect.top += 500;
    }
    menu->zombies_description[6] = NULL;
}
