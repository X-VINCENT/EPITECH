/*
** EPITECH PROJECT, 2022
** Destroy Results Menu for My Runner
** File description:
** Xavier VINCENT
*/

#include "my_runner.h"

void destroy_results_menu(results_menu_t *results_menu)
{
    if (!results_menu)
        return;
    destroy_sprite(results_menu->bg);
    sfText_destroy(results_menu->win);
    sfText_destroy(results_menu->loose);
    destroy_sprite(results_menu->play);
    destroy_sprite(results_menu->quit);
    destroy_sprite(results_menu->settings);
    sfText_destroy(results_menu->score);
    sfText_destroy(results_menu->best_score);
    destroy_sprite(results_menu->mute);
    destroy_sprite(results_menu->unmute);
    sfSound_destroy(results_menu->win_sound);
    sfSound_destroy(results_menu->loose_sound);
    sfClock_destroy(results_menu->clock);
    free(results_menu);
}
