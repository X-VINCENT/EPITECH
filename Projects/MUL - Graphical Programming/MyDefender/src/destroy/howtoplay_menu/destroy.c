/*
** EPITECH PROJECT, 2022
** Destroy HowToPlay Menu for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void destroy_howtoplay_menu(howtoplay_menu_t *menu)
{
    destroy_sprite(menu->bg);
    sfClock_destroy(menu->clock);
    free(menu);
}
