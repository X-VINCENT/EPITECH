/*
** EPITECH PROJECT, 2022
** Destroy Maps Menu for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void destroy_maps_menu(maps_menu_t *menu)
{
    destroy_sprite(menu->bg);
    for (int idx = 0; menu->maps_off[idx] != NULL; idx += 1)
        destroy_sprite(menu->maps_off[idx]);
    free(menu->maps_off);
    for (int idx = 0; menu->maps_on[idx] != NULL; idx += 1)
        destroy_sprite(menu->maps_on[idx]);
    free(menu->maps_on);
    free(menu->cards_status);
    free(menu);
}
