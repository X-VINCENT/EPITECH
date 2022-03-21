/*
** EPITECH PROJECT, 2021
** Destroy Sounds of My Hunter
** File description:
** Xavier VINCENT
*/

#include "my_hunter.h"

void destroy_sounds(data_myh_t data_myh)
{
    sfMusic_destroy(data_myh.resources.sounds.music);
    sfSound_destroy(data_myh.resources.sounds.shoot);
    sfSound_destroy(data_myh.resources.sounds.kill);
}
