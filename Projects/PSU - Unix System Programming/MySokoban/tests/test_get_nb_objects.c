/*
** EPITECH PROJECT, 2022
** Test Get Nb Objects for My Sokoban
** File description:
** Xavier VINCENT
*/

#include "my_sokoban.h"
#include <criterion/criterion.h>

Test(get_nb_objects, NULL_1)
{
    cr_assert_eq(get_nb_objects(NULL, "TEST"), ERROR);
}

Test(get_nb_objects, NULL_2)
{
    map_data_t *map_data = malloc(sizeof(map_data_t));

    cr_assert_eq(get_nb_objects(map_data, NULL), ERROR);
    destroy_map_data(map_data);
}

Test(get_nb_objects, BASIC)
{
    map_data_t *map_data = malloc(sizeof(map_data_t));

    cr_assert_eq(get_nb_objects(
        map_data, my_load_file_in_mem("tests/.map/.map1")), SUCCESS);
    cr_assert_eq(map_data->nb_boxes, 5);
    cr_assert_eq(map_data->nb_objectives, 1);
    destroy_map_data(map_data);
}
