/*
** EPITECH PROJECT, 2021
** Init Display for My Hunter
** File description:
** Xavier VINCENT
*/

#include "my_hunter.h"

data_myh_t init_window(data_myh_t data_myh)
{
    sfVideoMode mode = {3840, 2160, 32};
    data_myh.resources.window = sfRenderWindow_create(
        mode, "My Hunter", sfResize | sfClose, NULL);
    sfRenderWindow_setFramerateLimit(data_myh.resources.window, 60);
    return data_myh;
}

data_myh_t init_clock(data_myh_t data_myh)
{
    data_myh.loop.time = sfClock_getElapsedTime(data_myh.loop.clock);
    data_myh.loop.seconds = sfTime_asSeconds(data_myh.loop.time);
    return data_myh;
}

data_myh_t init_structs(data_myh_t data_myh)
{
    data_myh = init_window(data_myh);
    data_myh = init_music(data_myh);
    data_myh = init_shoot(data_myh);
    data_myh = init_kill(data_myh);
    data_myh = init_bird_r(data_myh);
    data_myh = init_bird_l(data_myh);
    data_myh = init_rect_bird_r(data_myh);
    data_myh = init_rect_bird_l(data_myh);
    data_myh.loop.clock = sfClock_create();
    return data_myh;
}
