/*
** EPITECH PROJECT, 2021
** Task01
** File description:
** Function that displays a window
*/

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
    sfVideoMode mode = {800, 600, 32};
    sfRenderWindow *window;

    window = sfRenderWindow_create(mode, argv[1], sfResize | sfClose, NULL);
    while (sfRenderWindow_isOpen(window) && sfRenderWindow_hasFocus(window)) {
        close_button(window);
         sfRenderWindow_clear(window, sfBlack);
        sfRenderWindow_display(window);
    }
    sfRenderWindow_destroy(window);
}
