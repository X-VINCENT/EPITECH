/*
** EPITECH PROJECT, 2022
** Destroy Start Menu for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void destroy_start_menu(start_menu_t *menu)
{
    destroy_sprite(menu->bg);
    destroy_sprite(menu->play);
    destroy_sprite(menu->quit);
    destroy_music(menu->music);
    sfClock_destroy(menu->clock);
    free(menu);
}
