/*
** EPITECH PROJECT, 2022
** Test Check File for My Runner
** File description:
** Xavier VINCENT
*/

#include <criterion/criterion.h>
#include "my_runner.h"

Test(check_assets, basic_check_assets)
{
    int returned_value = check_assets();

    cr_assert_eq(returned_value, SUCCESS);
}

Test(check_parallax, basic_check_parallax)
{
    int returned_value = check_parallax();

    cr_assert_eq(returned_value, 0);
}

Test(check_pictures, basic_check_pictures)
{
    int returned_value = check_pictures();

    cr_assert_eq(returned_value, 0);
}

Test(check_sounds, basic_check_sounds)
{
    int returned_value = check_sounds();

    cr_assert_eq(returned_value, 0);
}

Test(is_file, basic_is_file_true)
{
    int returned_value = is_file("assets/sounds/win.ogg");

    cr_assert_eq(returned_value, SUCCESS);
}

Test(is_file, basic_is_file_false)
{
    int returned_value = is_file("fake.png");

    cr_assert_eq(returned_value, 1);
}

Test(is_file, basic_is_file_null)
{
    int returned_value = is_file(NULL);

    cr_assert_eq(returned_value, 1);
}