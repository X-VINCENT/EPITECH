/*
** EPITECH PROJECT, 2021
** my_compute_power_rec
** File description:
** Function my_compute_power_rec
*/

#include "my.h"

int my_compute_power_rec(int nb, int p)
{
    int result = 0;

    if (p == 0)
        return 1;
    if (p < 0)
        return 0;
    result = nb * my_compute_power_rec(nb, p - 1);
    return result;
}
