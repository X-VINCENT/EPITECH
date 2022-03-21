/*
** EPITECH PROJECT, 2021
** Task01
** File description:
** Function that displays a window
*/

#include <stdlib.h>
#include <SFML/Graphics.h>

int close_button(sfRenderWindow *window)
{
    sfEvent event;

    while (sfRenderWindow_pollEvent(window, &event)) {
            if (event.type == sfEvtClosed)
                sfRenderWindow_close(window);
    }
}

int main(int argc, char **argv)
{
    sfVideoMode mode = {3840, 2160, 32};
    sfRenderWindow *window;
    sfTexture *texture;
    sfSprite *sprite;

    window = sfRenderWindow_create(mode, "Landscape", sfResize | sfClose, NULL);
    if (!window)
        return EXIT_FAILURE;
    texture = sfTexture_createFromFile("picture.jpg", NULL);
    if (!texture)
        return EXIT_FAILURE;
    sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, sfTrue);
    while (sfRenderWindow_isOpen(window) && sfRenderWindow_hasFocus(window)) {
        close_button(window);
        sfRenderWindow_clear(window, sfBlack);
        sfRenderWindow_drawSprite(window, sprite, NULL);
        sfRenderWindow_display(window);
    }
    sfRenderWindow_destroy(window);
}
