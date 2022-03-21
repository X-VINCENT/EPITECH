/*
** EPITECH PROJECT, 2021
** Init Birds for My Hunter
** File description:
** Xavier VINCENT
*/

#include "my_hunter.h"

data_myh_t init_bird_r(data_myh_t data_myh)
{
    data_myh.resources.textures.bird_r.bird = sfSprite_create();
    data_myh.resources.textures.bird_r.base.x;
    data_myh.resources.textures.bird_r.base.y;
    data_myh.resources.textures.bird_r.scale.x = 4;
    data_myh.resources.textures.bird_r.scale.y = 4;
    data_myh.resources.textures.bird_r.tx_bird = sfTexture_createFromFile(
        "assets/pictures/bird_right.png", NULL);
    sfSprite_setPosition(data_myh.resources.textures.bird_r.bird,
        data_myh.resources.textures.bird_r.base);
    sfSprite_setScale(data_myh.resources.textures.bird_r.bird,
        data_myh.resources.textures.bird_r.scale);
    sfSprite_setTexture(data_myh.resources.textures.bird_r.bird,
        data_myh.resources.textures.bird_r.tx_bird, sfTrue);
    sfSprite_setTextureRect(data_myh.resources.textures.bird_r.bird,
        data_myh.resources.textures.bird_r.rect);
    return data_myh;
}

data_myh_t init_rect_bird_r(data_myh_t data_myh)
{
    data_myh.resources.textures.bird_r.rect.top = 49;
    data_myh.resources.textures.bird_r.rect.left = 0;
    data_myh.resources.textures.bird_r.rect.width = 49;
    data_myh.resources.textures.bird_r.rect.height = 56;
    return data_myh;
}

data_myh_t init_bird_l(data_myh_t data_myh)
{
    data_myh.resources.textures.bird_l.bird = sfSprite_create();
    data_myh.resources.textures.bird_l.base.x;
    data_myh.resources.textures.bird_l.base.y;
    data_myh.resources.textures.bird_l.scale.x = 4;
    data_myh.resources.textures.bird_l.scale.y = 4;
    data_myh.resources.textures.bird_l.tx_bird = sfTexture_createFromFile(
        "assets/pictures/bird_left.png", NULL);
    sfSprite_setPosition(data_myh.resources.textures.bird_l.bird,
        data_myh.resources.textures.bird_l.base);
    sfSprite_setScale(data_myh.resources.textures.bird_l.bird,
        data_myh.resources.textures.bird_l.scale);
    sfSprite_setTexture(data_myh.resources.textures.bird_l.bird,
        data_myh.resources.textures.bird_l.tx_bird, sfTrue);
    sfSprite_setTextureRect(data_myh.resources.textures.bird_l.bird,
        data_myh.resources.textures.bird_l.rect);
    return data_myh;
}

data_myh_t init_rect_bird_l(data_myh_t data_myh)
{
    data_myh.resources.textures.bird_l.rect.top = 49;
    data_myh.resources.textures.bird_l.rect.left = 460;
    data_myh.resources.textures.bird_l.rect.width = 49;
    data_myh.resources.textures.bird_l.rect.height = 56;
    return data_myh;
}
