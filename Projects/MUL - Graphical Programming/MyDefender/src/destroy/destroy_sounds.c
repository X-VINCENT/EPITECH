/*
** EPITECH PROJECT, 2022
** Destroy for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void destroy_sounds(sounds_t *sounds) {
    destroy_sound(sounds->menu);
    destroy_sound(sounds->plant);
    destroy_sound(sounds->score);
    destroy_sound(sounds->transplanter);
    free(sounds);
}
