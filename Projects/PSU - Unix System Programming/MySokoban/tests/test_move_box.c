/*
** EPITECH PROJECT, 2022
** Test Move Box for My Sokoban
** File description:
** Xavier VINCENT
*/

#include "my_sokoban.h"
#include <criterion/criterion.h>

Test(move_box_up, BASIC_UP)
{
    data_t *data = init_data("tests/.map/.move_box/.move_box_up");

    move_box_up(data, data->player->x, data->player->y);
    cr_assert_eq(data->boxes[0]->x, 4);
    cr_assert_eq(data->boxes[0]->y, 2);
    destroy_data(data);
}

Test(move_box_up, BASIC_UP_OBJ)
{
    data_t *data = init_data("tests/.map/.move_box/.move_box_up_obj");

    move_box_up(data, data->player->x, data->player->y);
    cr_assert_eq(data->boxes[0]->x, 4);
    cr_assert_eq(data->boxes[0]->y, 2);
    destroy_data(data);
}

Test(move_box_down, BASIC_DOWN)
{
    data_t *data = init_data("tests/.map/.move_box/.move_box_down");

    move_box_down(data, data->player->x, data->player->y);
    cr_assert_eq(data->boxes[0]->x, 4);
    cr_assert_eq(data->boxes[0]->y, 4);
    destroy_data(data);
}

Test(move_box_down, BASIC_DOWN_OBJ)
{
    data_t *data = init_data("tests/.map/.move_box/.move_box_down_obj");

    move_box_down(data, data->player->x, data->player->y);
    cr_assert_eq(data->boxes[0]->x, 4);
    cr_assert_eq(data->boxes[0]->y, 4);
    destroy_data(data);
}

Test(move_box_left, BASIC_LEFT)
{
    data_t *data = init_data("tests/.map/.move_box/.move_box_left");

    move_box_left(data, data->player->x, data->player->y);
    cr_assert_eq(data->boxes[0]->x, 3);
    cr_assert_eq(data->boxes[0]->y, 3);
    destroy_data(data);
}

Test(move_box_left, BASIC_LEFT_OBJ)
{
    data_t *data = init_data("tests/.map/.move_box/.move_box_left_obj");

    move_box_left(data, data->player->x, data->player->y);
    cr_assert_eq(data->boxes[0]->x, 3);
    cr_assert_eq(data->boxes[0]->y, 3);
    destroy_data(data);
}

Test(move_box_right, BASIC_RIGHT)
{
    data_t *data = init_data("tests/.map/.move_box/.move_box_right");

    move_box_right(data, data->player->x, data->player->y);
    cr_assert_eq(data->boxes[0]->x, 5);
    cr_assert_eq(data->boxes[0]->y, 3);
    destroy_data(data);
}

Test(move_box_right, BASIC_RIGHT_OBJ)
{
    data_t *data = init_data("tests/.map/.move_box/.move_box_right_obj");

    move_box_right(data, data->player->x, data->player->y);
    cr_assert_eq(data->boxes[0]->x, 5);
    cr_assert_eq(data->boxes[0]->y, 3);
    destroy_data(data);
}
