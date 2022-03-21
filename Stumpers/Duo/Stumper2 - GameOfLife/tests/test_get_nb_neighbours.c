/*
** EPITECH PROJECT, 2022
** Test Get Nb Neighbours
** File description:
** Xavier VINCENT - Alex AUBRY
*/

#include "gameoflife.h"
#include <criterion/criterion.h>

Test(get_nb_neighbours, MAP_NULL)
{
    int returned_value = get_nb_neighbours(NULL, 1, 1);

    cr_assert_eq(returned_value, -1);
}

Test(get_nb_neighbours, BAD_X_VALUE)
{
    int returned_value = 0;
    char *map[] = {"X....X", "...X..", NULL};

    returned_value = get_nb_neighbours(map, -1, 1);
    cr_assert_eq(returned_value, -1);
}

Test(get_nb_neighbours, BAD_Y_VALUE)
{
    int returned_value = 0;
    char *map[] = {"X....X","...X..", NULL};

    returned_value = get_nb_neighbours(map, 1, -1);
    cr_assert_eq(returned_value, -1);
}

Test(get_nb_neighbours, BASIC_MAP)
{
    int returned_value = 0;
    char *map[] = {"X..X", "X.X.", "X.X.X", NULL};

    returned_value = get_nb_neighbours(map, 1, 1);
    cr_assert_eq(returned_value, 5);
}

Test(get_nb_neighbours_top, MAP_NULL)
{
    int returned_value = get_nb_neighbours_top(NULL, 1, 1);

    cr_assert_eq(returned_value, -1);
}

Test(get_nb_neighbours_top, BAD_X_VALUE)
{
    int returned_value = 0;
    char *map[] = {"...XX.", "..X.XX", NULL};

    returned_value = get_nb_neighbours_top(map, -1, 1);
    cr_assert_eq(returned_value, 0);
}

Test(get_nb_neighbours_top, BAD_Y_VALUE)
{
    int returned_value = 0;
    char *map[] = {"..XX..", "XX..XX", NULL};

    returned_value = get_nb_neighbours_top(map, 1, -1);
    cr_assert_eq(returned_value, 0);
}
