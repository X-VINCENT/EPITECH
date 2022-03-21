/*
** EPITECH PROJECT, 2022
** Destroy Settings Menu for My Runner
** File description:
** Xavier VINCENT
*/

#include "my_runner.h"

void destroy_settings_menu(settings_menu_t *settings_menu)
{
    if (!settings_menu)
        return;
    destroy_sprite(settings_menu->bg);
    sfText_destroy(settings_menu->text_settings);
    sfText_destroy(settings_menu->text_res);
    destroy_sprite(settings_menu->res_1);
    destroy_sprite(settings_menu->res_2);
    destroy_sprite(settings_menu->res_3);
    destroy_sprite(settings_menu->fps_1);
    destroy_sprite(settings_menu->fps_2);
    destroy_sprite(settings_menu->fps_3);
    destroy_sprite(settings_menu->back);
    sfClock_destroy(settings_menu->clock);
    free(settings_menu);
}
