/*
** EPITECH PROJECT, 2021
** Create Window gor CSFML
** File description:
** Xavier VINCENT
*/

#include "csfml.h"

sfRenderWindow *create_window(const char *title, int width, int height)
{
    sfVideoMode mode = {width, height, 32};
    sfUint32 style = sfClose | sfResize;
    sfContextSettings *settings = NULL;
    sfRenderWindow *window = sfRenderWindow_create(
        mode, title, style, settings);

    if (!window || !title)
        return NULL;
    sfRenderWindow_setFramerateLimit(window, 60);
    return window;
}

sfRenderWindow *set_icon_window(
    sfRenderWindow *window, const char *icon_path)
{
    const sfImage *image = sfImage_createFromFile(icon_path);
    const sfVector2u size = sfImage_getSize(image);
    const sfUint8 *pixels = sfImage_getPixelsPtr(image);

    if (!window || !icon_path || !image || !pixels)
        return NULL;
    sfRenderWindow_setIcon(window, size.x, size.y, pixels);
    return window;
}

void destroy_window(sfRenderWindow *window)
{
    if (!window)
        return;
    sfRenderWindow_destroy(window);
}
