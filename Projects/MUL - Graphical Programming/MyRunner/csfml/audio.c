/*
** EPITECH PROJECT, 2021
** Audio for CSFML
** File description:
** Xavier VINCENT
*/

#include "csfml.h"

sfMusic *create_music(const char *music_path)
{
    sfMusic *music = sfMusic_createFromFile(music_path);

    if (!music)
        return NULL;
    sfMusic_setLoop(music, sfTrue);
    sfMusic_setVolume(music, 100.00);
    return music;
}

void play_music(sfMusic *music)
{
    if (!music)
        return;
    if (sfMusic_getStatus(music) != sfPlaying)
        sfMusic_play(music);
}

sfSound *create_sound(const char *sound_path)
{
    sfSoundBuffer *buffer = sfSoundBuffer_createFromFile(sound_path);
    sfSound *sound = sfSound_create();

    if (!sound || !buffer)
        return NULL;
    sfSound_setBuffer(sound, buffer);
    sfSound_setVolume(sound, 100.00);
    return sound;
}

void destroy_music(sfMusic *music)
{
    if (!music)
        return;
    sfMusic_destroy(music);
}

void destroy_sound(sfSound *sound)
{
    if (!sound)
        return;
    sfSound_destroy(sound);
}
