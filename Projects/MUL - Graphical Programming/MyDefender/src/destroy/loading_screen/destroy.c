/*
** EPITECH PROJECT, 2022
** Destroy Loading Screen for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void destroy_loading_screen(loading_screen_t *screen)
{
    destroy_sprite(screen->bg);
    free(screen);
}
