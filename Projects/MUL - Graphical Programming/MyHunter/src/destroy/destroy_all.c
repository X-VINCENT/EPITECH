/*
** EPITECH PROJECT, 2021
** Destroy for my_hunter
** File description:
** Xavier VINCENT
*/

#include "my_hunter.h"

void destroy_all(data_myh_t data_myh)
{
    destroy_sounds(data_myh);
    destroy_textures(data_myh);
    sfRenderWindow_destroy(data_myh.resources.window);
}
