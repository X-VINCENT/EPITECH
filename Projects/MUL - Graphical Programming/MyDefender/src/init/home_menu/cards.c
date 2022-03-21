/*
** EPITECH PROJECT, 2022
** Init Cards Home Menu for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void init_maps_home_menu(game_t *game)
{
    home_menu_t *menu = game->assets->home_menu;
    const char path[] = "assets/pictures/buttons/home.png";
    sfIntRect r_off = init_rect(0, 635, 503, 445);
    sfIntRect r_on = init_rect(0, 0, 520, 462);
    sfVector2f pos = init_pos(480, 540);
    sfVector2f o_off = {r_off.width / 2, r_off.height / 2};
    sfVector2f o_on = {r_on.width / 2, r_on.height / 2};
    sfVector2f scale = init_scale(1, 1);

    menu->maps_off = create_sprite(path, r_off, pos, scale);
    menu->maps_on = create_sprite(path, r_on, pos, scale);
    sfSprite_setOrigin(menu->maps_off, o_off);
    sfSprite_setOrigin(menu->maps_on, o_on);
}

void init_plants_zombies_home_menu(game_t *game)
{
    home_menu_t *menu = game->assets->home_menu;
    const char path[] = "assets/pictures/buttons/home.png";
    sfIntRect r_plants = init_rect(505, 635, 312, 444);
    sfIntRect r_zombies = init_rect(521, 0, 324, 462);
    sfVector2f pos = init_pos(900, 540);
    sfVector2f o_plants = {r_plants.width / 2, r_plants.height / 2};
    sfVector2f o_zombies = {r_zombies.width / 2, r_zombies.height / 2};
    sfVector2f scale = init_scale(1, 1);

    menu->plants = create_sprite(path, r_plants, pos, scale);
    menu->zombies = create_sprite(path, r_zombies, pos, scale);
    sfSprite_setOrigin(menu->plants, o_plants);
    sfSprite_setOrigin(menu->zombies, o_zombies);
}

void init_stats_home_menu(game_t *game)
{
    home_menu_t *menu = game->assets->home_menu;
    const char path[] = "assets/pictures/buttons/home.png";
    sfIntRect r_off = init_rect(820, 635, 313, 444);
    sfIntRect r_on = init_rect(846, 0, 324, 462);
    sfVector2f pos = init_pos(1222, 540);
    sfVector2f o_off = {r_off.width / 2, r_off.height / 2};
    sfVector2f o_on = {r_on.width / 2, r_on.height / 2};
    sfVector2f scale = init_scale(1, 1);

    menu->stats_off = create_sprite(path, r_off, pos, scale);
    menu->stats_on = create_sprite(path, r_on, pos, scale);
    sfSprite_setOrigin(menu->stats_off, o_off);
    sfSprite_setOrigin(menu->stats_on, o_on);
}

void init_settings_home_menu(game_t *game)
{
    home_menu_t *menu = game->assets->home_menu;
    const char path[] = "assets/pictures/buttons/home.png";
    sfIntRect r_off = init_rect(1134, 635, 312, 219);
    sfIntRect r_on = init_rect(1170, 0, 323, 229);
    sfVector2f pos = init_pos(1545, 650);
    sfVector2f o_off = {r_off.width / 2, r_off.height / 2};
    sfVector2f o_on = {r_on.width / 2, r_on.height / 2};
    sfVector2f scale = init_scale(1, 1);

    menu->settings_off = create_sprite(path, r_off, pos, scale);
    menu->settings_on = create_sprite(path, r_on, pos, scale);
    sfSprite_setOrigin(menu->settings_off, o_off);
    sfSprite_setOrigin(menu->settings_on, o_on);
}

void init_howtoplay_home_menu(game_t *game)
{
    home_menu_t *menu = game->assets->home_menu;
    const char path[] = "assets/pictures/buttons/home.png";
    sfIntRect r_off = init_rect(1134, 859, 312, 219);
    sfIntRect r_on = init_rect(1170, 231, 323, 229);
    sfVector2f o_off = {r_off.width / 2, r_off.height / 2};
    sfVector2f o_on = {r_on.width / 2, r_on.height / 2};
    sfVector2f scale = init_scale(1, 1);
    sfVector2f pos = init_pos(1545, 427);
    menu->howtoplay_off = create_sprite(path, r_off, pos, scale);
    menu->howtoplay_on = create_sprite(path, r_on, pos, scale);
    sfSprite_setOrigin(menu->howtoplay_off, o_off);
    sfSprite_setOrigin(menu->howtoplay_on, o_on);
}
