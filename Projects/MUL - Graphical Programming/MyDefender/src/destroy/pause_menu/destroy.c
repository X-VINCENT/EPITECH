/*
** EPITECH PROJECT, 2022
** Destroy Pause Menu for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void destroy_pause_menu(pause_menu_t *menu)
{
    destroy_sprite(menu->bg);
    destroy_buttons_pause_menu(menu);
    free(menu->buttons_status);
    sfClock_destroy(menu->clock);
}

void destroy_buttons_pause_menu(pause_menu_t *menu)
{
    for (int idx = 0; menu->buttons_off[idx] != NULL; idx += 1)
        destroy_sprite(menu->buttons_off[idx]);
    free(menu->buttons_off);
    for (int idx = 0; menu->buttons_on[idx] != NULL; idx += 1)
        destroy_sprite(menu->buttons_on[idx]);
    free(menu->buttons_on);
}
