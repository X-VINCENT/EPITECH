/*
** EPITECH PROJECT, 2021
** CSFML Header
** File description:
** Xavier VINCENT
*/

#ifndef CSFML_H_
    #define CSFML_H_

    #include <stdlib.h>
    #include <SFML/Audio.h>
    #include <SFML/Graphics.h>

// Audio
sfMusic *create_music(const char *music_path);
void play_music(sfMusic *music);
sfSound *create_sound(const char *sound_path);
void destroy_music(sfMusic *music);
void destroy_sound(sfSound *sound);

// Clock
void set_time_to_wait(float time_in_sec);

//Init
sfIntRect *init_rect(int left, int top, int width, int height);
sfVector2f init_pos(int x, int y);

// Sprite
sfSprite *create_sprite(const char *texture_path, sfIntRect *rect,
    sfVector2f position, sfVector2f scale);
void move_sprite(sfSprite *sprite, float shift, int max_value);
void set_sprite_scale(
    sfRenderWindow *window, sfEvent *event, sfSprite *sprite);
void destroy_sprite(sfSprite *sprite);

// Text
sfText *create_text(
    const char *font_path, sfColor color, int size, const char *string);
void destroy_text(sfText *text);

// Window
sfRenderWindow *create_window(const char *title, int width, int height);
sfRenderWindow *set_icon_window(
    sfRenderWindow *window, const char *icon_path);
void destroy_window(sfRenderWindow *window);

#endif /* !CSFML_H_ */
