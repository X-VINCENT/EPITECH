/*
** EPITECH PROJECT, 2022
** Init Volume Bar Settings Menu for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void init_bars_settings_menu(game_t *game)
{
    settings_menu_t *menu = game->assets->settings_menu;

    init_volume_bar_settings_menu(game);
    init_sound_bar_settings_menu(game);
}

void init_volume_bar_settings_menu(game_t *game)
{
    settings_menu_t *menu = game->assets->settings_menu;
    const char path[] = "assets/pictures/buttons/buttons.png";
    sfIntRect rect = init_rect(12, 10, 30, 18);
    sfIntRect r_down = init_rect(151, 24, 28, 32);
    sfIntRect r_up = init_rect(202, 24, 32, 32);
    sfVector2f pos = init_pos(1463, 371);
    sfVector2f p_down = init_pos(1418, 365);
    sfVector2f p_up = init_pos(1780, 365);
    sfVector2f scale_bar = {1.00, 0.75};
    sfVector2f scale = {0.80, 0.80};

    menu->volume_bar = malloc(sizeof(sfSprite *) * 11);
    for (int idx = 0; idx != 10; idx += 1) {
        menu->volume_bar[idx] = create_sprite(path, rect, pos, scale_bar);
        pos.x += 30;
    }
    menu->volume_bar[10] = NULL;
    menu->volume_bar_down = create_sprite(path, r_down, p_down, scale);
    menu->volume_bar_up = create_sprite(path, r_up, p_up, scale);
}

void init_sound_bar_settings_menu(game_t *game)
{
    settings_menu_t *menu = game->assets->settings_menu;
    const char path[] = "assets/pictures/buttons/buttons.png";
    sfIntRect rect = init_rect(12, 10, 30, 18);
    sfIntRect r_down = init_rect(151, 24, 28, 32);
    sfIntRect r_up = init_rect(202, 24, 32, 32);
    sfVector2f pos = init_pos(1463, 417);
    sfVector2f p_down = init_pos(1418, 412);
    sfVector2f p_up = init_pos(1780, 412);
    sfVector2f scale_bar = {1.00, 0.75};
    sfVector2f scale = {0.80, 0.80};

    menu->sound_bar = malloc(sizeof(sfSprite *) * 11);
    for (int idx = 0; idx != 10; idx += 1) {
        menu->sound_bar[idx] = create_sprite(path, rect, pos, scale_bar);
        pos.x += 30;
    }
    menu->sound_bar[10] = NULL;
    menu->sound_bar_down = create_sprite(path, r_down, p_down, scale);
    menu->sound_bar_up = create_sprite(path, r_up, p_up, scale);
}
