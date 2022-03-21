/*
** EPITECH PROJECT, 2021
** Destroy Textures of My Hunter
** File description:
** Xavier VINCENT
*/

#include "my_hunter.h"

void destroy_textures(data_myh_t data_myh)
{
    sfSprite_destroy(data_myh.resources.textures.bird_r.bird);
    sfTexture_destroy(data_myh.resources.textures.bird_r.tx_bird);
    sfSprite_destroy(data_myh.resources.textures.bird_l.bird);
    sfTexture_destroy(data_myh.resources.textures.bird_l.tx_bird);
}
