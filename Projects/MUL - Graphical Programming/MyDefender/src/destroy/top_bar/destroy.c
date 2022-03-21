/*
** EPITECH PROJECT, 2022
** Destroy Top Bar for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void destroy_top_bar(top_bar_t *bar)
{
    destroy_sprite(bar->home_off);
    destroy_sprite(bar->maps_off);
    destroy_sprite(bar->plants_off);
    destroy_sprite(bar->stats_off);
    destroy_sprite(bar->howtoplay_off);
    destroy_sprite(bar->settings_off);
    destroy_sprite(bar->home_on);
    destroy_sprite(bar->maps_on);
    destroy_sprite(bar->plants_on);
    destroy_sprite(bar->stats_on);
    destroy_sprite(bar->howtoplay_on);
    destroy_sprite(bar->settings_on);
    free(bar);
}
