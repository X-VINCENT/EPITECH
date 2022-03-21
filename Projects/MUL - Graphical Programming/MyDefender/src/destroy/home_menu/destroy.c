/*
** EPITECH PROJECT, 2022
** Destroy Home Menu for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void destroy_home_menu(home_menu_t *menu)
{
    destroy_sprite(menu->bg);
    destroy_music(menu->music);
    sfClock_destroy(menu->clock);
    destroy_cards_home_menu(menu);
    free(menu);
}

void destroy_cards_home_menu(home_menu_t *menu)
{
    destroy_sprite(menu->maps_off);
    destroy_sprite(menu->maps_on);
    destroy_sprite(menu->plants);
    destroy_sprite(menu->zombies);
    destroy_sprite(menu->stats_off);
    destroy_sprite(menu->stats_on);
    destroy_sprite(menu->settings_off);
    destroy_sprite(menu->settings_on);
    destroy_sprite(menu->howtoplay_off);
    destroy_sprite(menu->howtoplay_on);
}
