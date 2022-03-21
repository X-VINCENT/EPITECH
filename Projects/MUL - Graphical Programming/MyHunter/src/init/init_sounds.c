/*
** EPITECH PROJECT, 2021
** Init Sounds for My Hunter
** File description:
** Xavier VINCENT
*/

#include "my_hunter.h"

data_myh_t init_music(data_myh_t data_myh)
{
    data_myh.resources.sounds.music = sfMusic_createFromFile(
        "assets/sounds/bg_music.wav");
    sfMusic_setLoop(data_myh.resources.sounds.music, sfTrue);
    sfMusic_play(data_myh.resources.sounds.music);
    return data_myh;
}

data_myh_t init_shoot(data_myh_t data_myh)
{
    data_myh.resources.sounds.shoot_buff = sfSoundBuffer_createFromFile(
        "assets/sounds/shoot.wav");
    data_myh.resources.sounds.shoot = sfSound_create();
    sfSound_setBuffer(data_myh.resources.sounds.shoot,
        data_myh.resources.sounds.shoot_buff);
    return data_myh;
}

data_myh_t init_kill(data_myh_t data_myh)
{
    data_myh.resources.sounds.kill_buff = sfSoundBuffer_createFromFile(
        "assets/sounds/kill.wav");
    data_myh.resources.sounds.kill = sfSound_create();
    sfSound_setBuffer(data_myh.resources.sounds.kill,
        data_myh.resources.sounds.kill_buff);
    return data_myh;
}
