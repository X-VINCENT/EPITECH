/*
** EPITECH PROJECT, 2022
** Destroy Zombies for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void destroy_zombie(zombie_t *zombie)
{
    destroy_sprite(zombie->sprite);
    sfClock_destroy(zombie->clock_move);
    sfClock_destroy(zombie->clock_animate);
    destroy_text(zombie->health_text);
    free(zombie);
}
