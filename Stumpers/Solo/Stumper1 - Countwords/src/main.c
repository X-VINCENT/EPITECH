/*
** EPITECH PROJECT, 2022
** Main File for Countwords
** File description:
** Xavier VINCENT
*/

#include "countwords.h"

int main(int argc, char **argv)
{
    int returned_value = 0;

    if (argc > 2)
        return 84;
    if (argc < 2) {
        printf("\n");
        return 0;
    }
    returned_value = countwords(argv[1]);
    return returned_value;
}
