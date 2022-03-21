/*
** EPITECH PROJECT, 2022
** Destroy Plants Menu for My Defender
** File description:
** Xavier VINCENT  - Max PEIXOTO
*/

#include "my_defender.h"

void destroy_plants_menu(plants_menu_t *menu)
{
    destroy_sprite(menu->bg);
    destroy_cards_plants_menu(menu);
    free(menu->plants_cards_status);
    free(menu->zombies_cards_status);
    free(menu);
}

void destroy_cards_plants_menu(plants_menu_t *menu)
{
    for (int idx = 0; menu->plants_off[idx] != NULL; idx += 1)
        destroy_sprite(menu->plants_off[idx]);
    free(menu->plants_off);
    for (int idx = 0; menu->plants_on[idx] != NULL; idx += 1)
        destroy_sprite(menu->plants_on[idx]);
    free(menu->plants_on);
    for (int idx = 0; menu->zombies_off[idx] != NULL; idx += 1)
        destroy_sprite(menu->zombies_off[idx]);
    free(menu->zombies_off);
    for (int idx = 0; menu->zombies_on[idx] != NULL; idx += 1)
        destroy_sprite(menu->zombies_on[idx]);
    free(menu->zombies_on);
}
