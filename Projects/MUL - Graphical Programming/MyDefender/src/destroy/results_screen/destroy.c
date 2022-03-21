/*
** EPITECH PROJECT, 2022
** Destroy Results Scren for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void destroy_results_screen(results_screen_t *screen)
{
    destroy_sprite(screen->win_bg);
    destroy_sprite(screen->loose_bg);
    destroy_text(screen->win_text);
    destroy_sound(screen->win_sound);
    destroy_sound(screen->loose_sound);
    free(screen);
}
