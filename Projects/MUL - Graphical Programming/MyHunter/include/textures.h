/*
** EPITECH PROJECT, 2021
** Textures Structures for My Hunter
** File description:
** Xavier VINCENT
*/

#ifndef TEXTURES_H_
    #define TEXTURES_H_

    #include "my_hunter.h"

    typedef struct bg {
        sfTexture *tx_bg;
        sfSprite *bg;
    } bg_t;

    typedef struct bird_r {
        sfTexture *tx_bird;
        sfSprite *bird;
        sfVector2f base;
        sfVector2f scale;
        sfIntRect rect;
        int pos_x;
        int pos_y;
    } bird_r_t;

    typedef struct bird_l {
        sfTexture *tx_bird;
        sfSprite *bird;
        sfVector2f base;
        sfVector2f scale;
        sfIntRect rect;
        int pos_x;
        int pos_y;
    } bird_l_t;

    typedef struct textures {
        struct bg bg;
        struct bird_r bird_r;
        struct bird_l bird_l;
    } textures_t;

#endif /* !TEXTURES_H_ */
