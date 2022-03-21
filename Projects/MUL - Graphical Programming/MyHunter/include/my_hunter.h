/*
** EPITECH PROJECT, 2021
** Header File for my_hunter
** File description:
** Xavier VINCENT
*/

#ifndef MY_HUNTER_H_
    #define MY_HUNTER_H_

    #include <stdio.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include <stdarg.h>
    #include <SFML/Audio.h>
    #include <SFML/Graphics.h>
    #include "sounds.h"
    #include "textures.h"
    #include "resources.h"

typedef struct data_myh {
    struct resources resources;
    struct events events;
    struct loop loop;
} data_myh_t;

int check_display(char *environment);
int env(char **arge);
int print_help(void);
int my_hunter(void);
data_myh_t init_structs(data_myh_t data_myh);
data_myh_t init_window(data_myh_t data_myh);
data_myh_t init_music(data_myh_t data_myh);
data_myh_t init_shoot(data_myh_t data_myh);
data_myh_t init_kill(data_myh_t data_myh);
data_myh_t init_rect_bird_r(data_myh_t data_myh);
data_myh_t init_rect_bird_l(data_myh_t data_myh);
data_myh_t init_bird_r(data_myh_t data_myh);
data_myh_t init_bird_l(data_myh_t data_myh);
data_myh_t init_clock(data_myh_t data_myh);
data_myh_t anim_bird_r(data_myh_t data_myh, int offset, int max_value);
data_myh_t anim_bird_l(data_myh_t data_myh, int offset, int max_value);
data_myh_t move_bird_r(data_myh_t data_myh);
data_myh_t move_bird_l(data_myh_t data_myh);
data_myh_t analyse_events(data_myh_t data_myh);
data_myh_t manage_mouse_click(data_myh_t data_myh, sfMouseButtonEvent m_event);
data_myh_t display(data_myh_t data_myh);
data_myh_t display_background(data_myh_t data_myh);
data_myh_t display_birds(data_myh_t data_myh);
void destroy_sounds(data_myh_t data_myh);
void destroy_textures(data_myh_t data_myh);
void destroy_all(data_myh_t data_myh);

#endif /* !MY_HUNTER_H_ */
