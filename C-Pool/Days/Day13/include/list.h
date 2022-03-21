/*
** EPITECH PROJECT, 2021
** list.h
** File description:
** Header list
*/

#ifndef LIST_H_
    #define LIST_H_

typedef struct framebuffer {
    int x = 800;
    int y = 600;

    char *pixel_arr[x * y];
} framebuffer_t;
#endif
