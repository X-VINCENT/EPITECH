/*
** EPITECH PROJECT, 2021
** Text for CSFML
** File description:
** Xavier VINCENT
*/

#include "csfml.h"

sfText *create_text(
    const char *font_path, sfColor color, int size, const char *string)
{
    sfFont *font = sfFont_createFromFile(font_path);
    sfText *text = sfText_create();

    if (!text || !font_path)
        return NULL;
    sfText_setFont(text, font);
    sfText_setColor(text, color);
    sfText_setCharacterSize(text, size);
    sfText_setString(text, string);
    return text;
}

void destroy_text(sfText *text)
{
    if (!text)
        return;
    sfText_destroy(text);
}
