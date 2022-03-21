/*
** EPITECH PROJECT, 2022
** Init Plants Menu for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void init_plants_menu(game_t *game)
{
    const char path[] = "assets/pictures/backgrounds/plants_zombies_menu.png";
    sfIntRect rect = init_rect(0, 0, 1920, 1080);
    sfVector2f pos = init_pos(0, 0);
    sfVector2f scale = init_scale(1, 1);

    game->assets->plants_menu = malloc(sizeof(plants_menu_t));
    game->assets->plants_menu->bg = create_sprite(path, rect, pos, scale);
    game->assets->plants_menu->plants_cards_status = malloc(sizeof(int) * 6);
    game->assets->plants_menu->zombies_cards_status = malloc(sizeof(int) * 7);
    init_cards_plants_menu(game);
    init_description_plants_menu(game);
}
