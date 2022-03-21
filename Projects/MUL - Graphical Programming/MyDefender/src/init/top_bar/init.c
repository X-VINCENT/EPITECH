/*
** EPITECH PROJECT, 2022
** Init Top Bar for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void init_top_bar(game_t *game)
{
    game->assets->top_bar = malloc(sizeof(top_bar_t));
    game->assets->top_bar->clock = sfClock_create();
    init_buttons_off_top_bar_1(game);
    init_buttons_off_top_bar_2(game);
    init_buttons_on_top_bar_1(game);
    init_buttons_on_top_bar_2(game);
}

void init_buttons_off_top_bar_1(game_t *game)
{
    top_bar_t *bar = game->assets->top_bar;
    char path[] = "assets/pictures/buttons/buttons.png";
    sfIntRect r_home = init_rect(0, 625, 166, 55);
    sfIntRect r_maps = init_rect(0, 708, 166, 55);
    sfIntRect r_plants = init_rect(0, 791, 166, 55);
    sfVector2f p_home = init_pos(190, 70);
    sfVector2f p_maps = init_pos(356, 70);
    sfVector2f p_plants = init_pos(522, 70);
    sfVector2f origin = {r_home.width / 2, r_home.height / 2};
    sfVector2f scale = init_scale(1, 1);

    bar->home_off = create_sprite(path, r_home, p_home, scale);
    bar->maps_off = create_sprite(path, r_maps, p_maps, scale);
    bar->plants_off = create_sprite(path, r_plants, p_plants, scale);
    sfSprite_setOrigin(bar->home_off, origin);
    sfSprite_setOrigin(bar->maps_off, origin);
    sfSprite_setOrigin(bar->plants_off, origin);
}

void init_buttons_off_top_bar_2(game_t *game)
{
    top_bar_t *bar = game->assets->top_bar;
    char path[] = "assets/pictures/buttons/buttons.png";
    sfIntRect r_stats = init_rect(0, 874, 166, 55);
    sfIntRect r_howtoplay = init_rect(0, 957, 166, 55);
    sfIntRect r_settings = init_rect(69, 158, 50, 49);
    sfVector2f p_stats = init_pos(688, 70);
    sfVector2f p_howtoplay = init_pos(854, 70);
    sfVector2f p_settings = init_pos(965, 72);
    sfVector2f origin = {r_howtoplay.width / 2, r_howtoplay.height / 2};
    sfVector2f o_settings = {r_settings.width / 2, r_settings.height / 2};
    sfVector2f scale = init_scale(1, 1);

    bar->stats_off = create_sprite(path, r_stats, p_stats, scale);
    bar->howtoplay_off = create_sprite(path, r_howtoplay, p_howtoplay, scale);
    bar->settings_off = create_sprite(path, r_settings, p_settings, scale);
    sfSprite_setOrigin(bar->stats_off, origin);
    sfSprite_setOrigin(bar->howtoplay_off, origin);
    sfSprite_setOrigin(bar->settings_off, o_settings);
}

void init_buttons_on_top_bar_1(game_t *game)
{
    top_bar_t *bar = game->assets->top_bar;
    char path[] = "assets/pictures/buttons/buttons.png";
    sfIntRect r_home = init_rect(193, 625, 166, 55);
    sfIntRect r_maps = init_rect(193, 708, 166, 55);
    sfIntRect r_plants = init_rect(193, 791, 166, 55);
    sfVector2f p_home = init_pos(190, 70);
    sfVector2f p_maps = init_pos(356, 70);
    sfVector2f p_plants = init_pos(522, 70);
    sfVector2f origin = {r_home.width / 2, r_home.height / 2};
    sfVector2f scale = init_scale(1, 1);

    bar->home_on = create_sprite(path, r_home, p_home, scale);
    bar->maps_on = create_sprite(path, r_maps, p_maps, scale);
    bar->plants_on = create_sprite(path, r_plants, p_plants, scale);
    sfSprite_setOrigin(bar->home_on, origin);
    sfSprite_setOrigin(bar->maps_on, origin);
    sfSprite_setOrigin(bar->plants_on, origin);
}

void init_buttons_on_top_bar_2(game_t *game)
{
    top_bar_t *bar = game->assets->top_bar;
    char path[] = "assets/pictures/buttons/buttons.png";
    sfIntRect r_stats = init_rect(193, 874, 166, 55);
    sfIntRect r_howtoplay = init_rect(193, 957, 166, 55);
    sfIntRect r_settings = init_rect(10, 158, 50, 49);
    sfVector2f p_stats = init_pos(688, 70);
    sfVector2f p_howtoplay = init_pos(854, 70);
    sfVector2f p_settings = init_pos(965, 72);
    sfVector2f origin = {r_howtoplay.width / 2, r_howtoplay.height / 2};
    sfVector2f o_settings = {r_settings.width / 2, r_settings.height / 2};
    sfVector2f scale = init_scale(1, 1);

    bar->stats_on = create_sprite(path, r_stats, p_stats, scale);
    bar->howtoplay_on = create_sprite(path, r_howtoplay, p_howtoplay, scale);
    bar->settings_on = create_sprite(path, r_settings, p_settings, scale);
    sfSprite_setOrigin(bar->stats_on, origin);
    sfSprite_setOrigin(bar->howtoplay_on, origin);
    sfSprite_setOrigin(bar->settings_on, o_settings);
}
