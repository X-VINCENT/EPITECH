/*
** EPITECH PROJECT, 2021
** Sprite for CSFML
** File description:
** Xavier VINCENT
*/

#include "csfml.h"

sfSprite *create_sprite(const char *texture_path, sfIntRect *rect,
    sfVector2f position, sfVector2f scale)
{
    sfSprite *sprite = sfSprite_create();
    sfTexture *texture = sfTexture_createFromFile(texture_path, NULL);

    if (!sprite || !texture)
        return NULL;
    sfSprite_setPosition(sprite, position);
    sfSprite_setScale(sprite, scale);
    sfSprite_setTexture(sprite, texture, sfFalse);
    sfSprite_setTextureRect(sprite, *rect);
    return sprite;
}

void move_sprite(sfSprite *sprite, float shift, int max_value)
{
    sfIntRect rect = sfSprite_getTextureRect(sprite);

    if (!sprite)
        return;
    if (rect.left >= max_value - shift)
        rect.left = 0;
    else
        rect.left += shift;
    sfSprite_setTextureRect(sprite, rect);
}

void set_sprite_scale(
    sfRenderWindow *window, sfEvent *event, sfSprite *sprite)
{
    sfIntRect s_rect = sfSprite_getTextureRect(sprite);
    sfVector2f scale = {
        event->size.width / s_rect.width,
        event->size.height / s_rect.height};

    if (!window || !event || !sprite)
        return;
    sfSprite_setScale(sprite, scale);
}

void destroy_sprite(sfSprite *sprite)
{
    if (!sprite)
        return;
    sfSprite_destroy(sprite);
}
