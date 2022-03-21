/*
** EPITECH PROJECT, 2021
** Clock for CSFML
** File description:
** Xavier VINCENT
*/

#include "csfml.h"

void set_time_to_wait(float time_in_sec)
{
    sfClock *clock = sfClock_create();
    float elapsed_time = sfTime_asSeconds(sfClock_getElapsedTime(clock));

    if (!clock)
        return;
    while (elapsed_time < time_in_sec)
        elapsed_time = sfTime_asSeconds(sfClock_getElapsedTime(clock));
    sfClock_destroy(clock);
}
