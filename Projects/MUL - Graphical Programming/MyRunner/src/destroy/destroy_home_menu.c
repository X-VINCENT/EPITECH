/*
** EPITECH PROJECT, 2021
** Destroy Home Menu for My runner
** File description:
** Xavier VINCENT
*/

#include "my_runner.h"

void destroy_home_menu(home_menu_t *home_menu)
{
    if (!home_menu)
        return;
    destroy_sprite(home_menu->bg);
    sfText_destroy(home_menu->my_runner);
    sfText_destroy(home_menu->best_score);
    sfText_destroy(home_menu->creator);
    destroy_sprite(home_menu->play);
    destroy_sprite(home_menu->quit);
    destroy_sprite(home_menu->settings);
    destroy_sprite(home_menu->mute);
    destroy_sprite(home_menu->unmute);
    destroy_sprite(home_menu->quit);
    sfMusic_destroy(home_menu->music);
    sfClock_destroy(home_menu->clock);
    free(home_menu);
}
