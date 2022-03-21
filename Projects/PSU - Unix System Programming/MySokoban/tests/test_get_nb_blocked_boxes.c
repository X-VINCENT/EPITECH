/*
** EPITECH PROJECT, 2022
** Test Blocked Boxes for My Sokoban
** File description:
** Xavier VINCENT
*/

#include "my_sokoban.h"
#include <criterion/criterion.h>

Test(get_nb_blocked_boxes, NULL_DATA)
{
    cr_assert_eq(get_nb_blocked_boxes(NULL), -1);
}

Test(get_nb_blocked_boxes, BASIC)
{
    data_t *data = init_data("tests/.map/.map1");

    cr_assert_eq(get_nb_blocked_boxes(data), 4);
    destroy_data(data);
}
