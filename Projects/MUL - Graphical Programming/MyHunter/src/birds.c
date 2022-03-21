/*
** EPITECH PROJECT, 2021
** Manage Birds in My Hunter
** File description:
** Xavier VINCENT
*/

#include "my_hunter.h"

data_myh_t anim_bird_r(data_myh_t data_myh, int offset, int max_value)
{
    if (data_myh.resources.textures.bird_r.rect.left <= max_value - offset)
        data_myh.resources.textures.bird_r.rect.left += offset;
    else
        data_myh.resources.textures.bird_r.rect.left = 0;
    return data_myh;
}

data_myh_t move_bird_r(data_myh_t data_myh)
{
    if (data_myh.resources.textures.bird_r.base.x >= 0 &&
        data_myh.resources.textures.bird_r.base.x != 3839) {
        data_myh.resources.textures.bird_r.base.x -= 75;
        data_myh.resources.textures.bird_r.pos_x =
        data_myh.resources.textures.bird_r.base.x;
    } else {
        data_myh.resources.textures.bird_r.base.x = 3840;
        data_myh.resources.textures.bird_r.base.y = rand() % 1440 + 72;
        data_myh.resources.textures.bird_r.pos_y =
        data_myh.resources.textures.bird_r.base.y;
    }
    return data_myh;
}

data_myh_t anim_bird_l(data_myh_t data_myh, int offset, int max_value)
{
    if (data_myh.resources.textures.bird_l.rect.left <= max_value - offset)
        data_myh.resources.textures.bird_l.rect.left += offset;
    else
        data_myh.resources.textures.bird_l.rect.left = 460;
    return data_myh;
}

data_myh_t move_bird_l(data_myh_t data_myh)
{
    if (data_myh.resources.textures.bird_l.base.x <= 3840 &&
        data_myh.resources.textures.bird_l.base.x != -131) {
        data_myh.resources.textures.bird_l.base.x += 75;
        data_myh.resources.textures.bird_l.pos_x =
        data_myh.resources.textures.bird_l.base.x;
    } else {
        data_myh.resources.textures.bird_l.base.x = -49;
        data_myh.resources.textures.bird_l.base.y = rand() % 1440 + 72;
        data_myh.resources.textures.bird_l.pos_y =
        data_myh.resources.textures.bird_l.base.y;
    }
    return data_myh;
}

data_myh_t display_birds(data_myh_t data_myh)
{
    data_myh = init_bird_r(data_myh);
    data_myh = init_bird_l(data_myh);
    data_myh = init_clock(data_myh);
    if (data_myh.loop.seconds >= data_myh.loop.i) {
        data_myh = anim_bird_r(data_myh, 50, 294);
        data_myh = anim_bird_l(data_myh, 50, 754);
        data_myh.loop.i += 0.05;
    }
    data_myh = move_bird_r(data_myh);
    data_myh = move_bird_l(data_myh);
    sfRenderWindow_drawSprite(data_myh.resources.window,
        data_myh.resources.textures.bird_r.bird, NULL);
    sfRenderWindow_drawSprite(data_myh.resources.window,
        data_myh.resources.textures.bird_l.bird, NULL);
    return data_myh;
}
