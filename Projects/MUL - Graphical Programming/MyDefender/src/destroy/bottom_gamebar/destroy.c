/*
** EPITECH PROJECT, 2022
** Destroy Bottom Gamebar for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void destroy_bottom_gamebar(bottom_gamebar_t *bar)
{
    destroy_sprite(bar->bar);
    destroy_text(bar->suns_available);
    for (int idx = 0; bar->plants[idx] != NULL; idx += 1)
        destroy_sprite(bar->plants[idx]);
    for (int idx = 0; bar->plants_price[idx] != NULL; idx += 1)
        destroy_text(bar->plants_price[idx]);
    destroy_sprite(bar->fertilizer);
    destroy_sprite(bar->transplanter);
    for (int idx = 0; bar->speed_button[idx] != NULL; idx += 1)
        destroy_sprite(bar->speed_button[idx]);
    destroy_sprite(bar->pause_button);
    sfClock_destroy(bar->clock);
    free(bar);
}
