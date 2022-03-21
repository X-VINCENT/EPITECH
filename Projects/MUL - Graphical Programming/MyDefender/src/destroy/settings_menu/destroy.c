/*
** EPITECH PROJECT, 2022
** Destroy Settings Menu for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void destroy_settings_menu(settings_menu_t *menu)
{
    destroy_sprite(menu->bg);
    sfClock_destroy(menu->clock);
    destroy_bars_settings_menu(menu);
    destroy_fps_settings_menu(menu);
    destroy_res_settings_menu(menu);
    free(menu);
}

void destroy_bars_settings_menu(settings_menu_t *menu)
{
    for (int idx = 0; menu->volume_bar[idx] != NULL; idx += 1)
        destroy_sprite(menu->volume_bar[idx]);
    free(menu->volume_bar);
    destroy_sprite(menu->volume_bar_down);
    destroy_sprite(menu->volume_bar_up);
    for (int idx = 0; menu->sound_bar[idx] != NULL; idx += 1)
        destroy_sprite(menu->sound_bar[idx]);
    free(menu->sound_bar);
    destroy_sprite(menu->sound_bar_down);
    destroy_sprite(menu->sound_bar_up);
}

void destroy_fps_settings_menu(settings_menu_t *menu)
{
    for (int idx = 0; menu->fps[idx] != NULL; idx += 1)
        destroy_text(menu->fps[idx]);
    free(menu->fps);
    destroy_sprite(menu->fps_left);
    destroy_sprite(menu->fps_right);
}

void destroy_res_settings_menu(settings_menu_t *menu)
{
    for (int idx = 0; menu->res[idx] != NULL; idx += 1)
        destroy_text(menu->res[idx]);
    free(menu->res);
    destroy_sprite(menu->res_left);
    destroy_sprite(menu->res_right);
}
