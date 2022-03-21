/*
** EPITECH PROJECT, 2021
** Sounds Structures for My Hunter
** File description:
** Xavier VINCENT
*/

#ifndef SOUNDS_H_
    #define SOUNDS_H_

    #include "my_hunter.h"

    typedef struct sounds {
        sfMusic *music;
        sfSound *shoot;
        sfSound *kill;
        sfSoundBuffer *shoot_buff;
        sfSoundBuffer *kill_buff;
    } sounds_t;

#endif /* !SOUNDS_H_ */
