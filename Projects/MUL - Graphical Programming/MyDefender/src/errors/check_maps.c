/*
** EPITECH PROJECT, 2022
** Check Maps for My Defender
** File description:
** Xavier VINCENT  -  Max PEIXOTO
*/

#include "my_defender.h"

int check_maps(void)
{
    int error = 0;

    error += is_file("assets/maps/map1");
    error += is_file("assets/maps/map2");
    error += is_file("assets/maps/map3");
    error += is_file("assets/maps/map4");
    error += is_file("assets/maps/map5");
    return error;
}
