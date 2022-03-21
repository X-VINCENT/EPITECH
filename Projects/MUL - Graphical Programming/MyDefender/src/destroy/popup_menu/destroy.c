/*
** EPITECH PROJECT, 2022
** Destroy Popup Menu for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void destroy_popup_menu(popup_menu_t *menu)
{
    sfSprite_destroy(menu->popup);
    sfSprite_destroy(menu->yes_off);
    sfSprite_destroy(menu->yes_on);
    sfSprite_destroy(menu->no_off);
    sfSprite_destroy(menu->no_on);
    sfClock_destroy(menu->clock);
    free(menu);
}
