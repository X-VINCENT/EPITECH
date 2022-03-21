/*
** EPITECH PROJECT, 2021
** My Hunter Project
** File description:
** Xavier VINCENT
*/

#include "my_hunter.h"

int my_hunter(void)
{
    data_myh_t data_myh;

    data_myh = init_structs(data_myh);
    if (!data_myh.resources.window)
        return 84;
    while (sfRenderWindow_isOpen(data_myh.resources.window)) {
        data_myh = analyse_events(data_myh);
        data_myh = display(data_myh);
    }
    destroy_all(data_myh);
    return 0;
}
