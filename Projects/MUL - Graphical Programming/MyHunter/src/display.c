/*
** EPITECH PROJECT, 2021
** Display File for My Hunter
** File description:
** Xavier VINCENT
*/

#include "my_hunter.h"

data_myh_t display_background(data_myh_t data_myh)
{
    data_myh.resources.textures.bg.tx_bg = sfTexture_createFromFile(
        "assets/pictures/bg.jpg", NULL);
    data_myh.resources.textures.bg.bg = sfSprite_create();
    sfSprite_setTexture(data_myh.resources.textures.bg.bg,
        data_myh.resources.textures.bg.tx_bg, sfTrue);
    sfRenderWindow_drawSprite(data_myh.resources.window,
        data_myh.resources.textures.bg.bg, NULL);
}

data_myh_t display(data_myh_t data_myh)
{
    sfRenderWindow_clear(data_myh.resources.window, sfBlack);
    data_myh = display_background(data_myh);
    data_myh = display_birds(data_myh);
    sfRenderWindow_display(data_myh.resources.window);
    return data_myh;
}
