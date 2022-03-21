/*
** EPITECH PROJECT, 2022
** Main
** File description:
** Xavier VINCENT - Alex AUBRY
*/

#include "gameoflife.h"

int main(const int argc, const char **argv)
{
    int iterations = 0;

    if (!argv)
        return ERROR;
    if (argc != 3)
        return ERROR;
    if ((iterations = my_getnbr(argv[2])) == ERROR)
	return ERROR;
    if (gameoflife(argv[1], iterations) == ERROR)
	return ERROR;
    return SUCCESS;
}
