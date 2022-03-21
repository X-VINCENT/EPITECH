/*
** EPITECH PROJECT, 2022
** Test Check Map for My Runner
** File description:
** Xavier VINCENT
*/

#include <criterion/criterion.h>
#include "my_runner.h"

Test(check_map, basic_check_map_valid)
{
    int returned_value = check_map(".legend");

    cr_assert_eq(returned_value, SUCCESS);
}

Test(check_map, basic_check_map_invalid)
{
    int returned_value = check_map(".fake");

    cr_assert_eq(returned_value, ERROR);
}

Test(check_map, basic_check_map_null)
{
    int returned_value = check_map(NULL);

    cr_assert_eq(returned_value, ERROR);
}
