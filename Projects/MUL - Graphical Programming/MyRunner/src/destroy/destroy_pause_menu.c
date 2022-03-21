/*
** EPITECH PROJECT, 2021
** Destroy pause Menu for My runner
** File description:
** Xavier VINCENT
*/

#include "my_runner.h"

void destroy_pause_menu(pause_menu_t *pause_menu)
{
    if (!pause_menu)
        return;
    destroy_sprite(pause_menu->bg);
    sfText_destroy(pause_menu->pause);
    sfText_destroy(pause_menu->score);
    sfText_destroy(pause_menu->creator);
    destroy_sprite(pause_menu->play);
    destroy_sprite(pause_menu->quit);
    destroy_sprite(pause_menu->restart);
    destroy_sprite(pause_menu->mute);
    destroy_sprite(pause_menu->unmute);
    sfSound_destroy(pause_menu->open_pause_menu);
    sfClock_destroy(pause_menu->clock);
    free(pause_menu);
}
