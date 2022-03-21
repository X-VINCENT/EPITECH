/*
** EPITECH PROJECT, 2022
** Init Results Menu 2 for My Runner
** File description:
** Xavier VINCENT
*/

#include "my_runner.h"

void init_buttons_results_menu(results_menu_t *results_menu)
{
    const char path[] = "assets/pictures/buttons/buttons.png";
    sfIntRect *rect_play = init_rect(159, 102, 335, 132);
    sfIntRect *rect_quit = init_rect(159, 958, 335, 132);
    sfVector2f pos_play = {960.00, 550.00};
    sfVector2f pos_quit = {960.00, 750.00};
    sfVector2f origin = {167.50, 66.00};
    sfVector2f scale = {1.00, 1.00};

    if (!results_menu)
        return;
    results_menu->play = create_sprite(path, rect_play, pos_play, scale);
    results_menu->quit = create_sprite(path, rect_quit, pos_quit, scale);
    sfSprite_setOrigin(results_menu->play, origin);
    sfSprite_setOrigin(results_menu->quit, origin);
    free(rect_play);
    free(rect_quit);
}

void init_buttons_2_results_menu(results_menu_t *results_menu)
{
    const char path[] = "assets/pictures/buttons/buttons.png";
    sfIntRect *rect_settings = init_rect(641, 620, 153, 124);
    sfIntRect *rect_mute = init_rect(641, 447, 153, 124);
    sfIntRect *rect_unmute = init_rect(887, 452, 153, 124);
    sfVector2f pos_settings = {10.00, 1070.00};
    sfVector2f pos_mute = {1910.00, 10.00};
    sfVector2f origin_settings = {0.00, 124.00};
    sfVector2f origin_mute = {153.00, 0.00};
    sfVector2f scale = {0.50, 0.50};

    results_menu->settings = create_sprite(
        path, rect_settings, pos_settings, scale);
    results_menu->mute = create_sprite(path, rect_mute, pos_mute, scale);
    results_menu->unmute = create_sprite(path, rect_unmute, pos_mute, scale);
    sfSprite_setOrigin(results_menu->settings, origin_settings);
    sfSprite_setOrigin(results_menu->mute, origin_mute);
    sfSprite_setOrigin(results_menu->unmute, origin_mute);
    free(rect_settings);
    free(rect_mute);
    free(rect_unmute);
}

void init_sounds_results_menu(results_menu_t *results_menu)
{
    results_menu->win_sound = create_sound("assets/sounds/win.ogg");
    results_menu->loose_sound = create_sound("assets/sounds/loose.ogg");
}
