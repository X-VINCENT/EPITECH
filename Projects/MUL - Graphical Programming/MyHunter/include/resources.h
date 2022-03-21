/*
** EPITECH PROJECT, 2021
** Resources Structures for My Hunter
** File description:
** Xavier VINCENT
*/

#ifndef RESOURCES_H_
    #define RESOURCES_H_

    #include "my_hunter.h"

    typedef struct resources {
        sfRenderWindow *window;
        struct sounds sounds;
        struct textures textures;
    } resources_t;

    typedef struct events {
        sfEvent event;
        sfMouseButtonEvent m_event;
    } events_t;

    typedef struct loop {
        sfClock *clock;
        sfTime time;
        float seconds;
        float i;
    } loop_t;

#endif /* !RESOURCES_H_ */
