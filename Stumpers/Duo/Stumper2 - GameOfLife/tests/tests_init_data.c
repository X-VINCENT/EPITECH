/*
** EPITECH PROJECT, 2022
** Tests Init Map Data
** File description:
** Xavier VINCENT - Alex AUBRY
*/

#include "gameoflife.h"
#include <criterion/criterion.h>

Test(init_data, map_path_NULL)
{
    cr_assert_eq(init_data(NULL), NULL);
}

Test(ckeck_map_lines, line_NULL)
{
    cr_assert_eq(check_map_lines(NULL), 84);
}

Test(get_map_lines, map_path_NULL)
{
    cr_assert_eq(get_map_lines(NULL), -1);
}

Test(get_map_col_sizes, map_path_NULL)
{
    cr_assert_eq(get_map_col_sizes(NULL), NULL);
}

Test(load_map, filepath_NULL_and_col_sizes_NULL)
{
    cr_assert_eq(load_map(NULL, 0, NULL), NULL);
}
