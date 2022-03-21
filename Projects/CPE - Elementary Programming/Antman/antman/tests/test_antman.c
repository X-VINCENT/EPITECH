/*
** EPITECH PROJECT, 2022
** Test Antman For Antman
** File description:
** Xavier VINCENT - Hugo DUBOIS
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "antman.h"

Test(antman, basic_antman_everything_ok)
{
    int returned_value = antman("tests/.files/.file_ok", 1);

    cr_assert_eq(returned_value, SUCCESS);
}

Test(antman, basic_antman_empty_file)
{
    int returned_value = antman("tests/.files/.empty_file", 1);

    cr_assert_eq(returned_value, SUCCESS);
}

Test(antman, basic_antman_fake_file, .init = cr_redirect_stderr)
{
    int returned_value = antman("FAKE_FILE", 1);

    cr_assert_stderr_eq_str("File not found.\n");
    cr_assert_eq(returned_value, ERROR);
}

Test(antman, basic_antman_wrong_type)
{
    int returned_value = antman("tests/.files/.file_ok", 10);

    cr_assert_eq(returned_value, ERROR);
}

Test(antman, basic_antman_folder, .init = cr_redirect_stderr)
{
    int returned_value = antman("tests/.files/", 1);

    cr_assert_stderr_eq_str("Antman can't compress folder.\n");
    cr_assert_eq(returned_value, ERROR);
}

Test(antman, basic_antman_file_null)
{
    const char *file = NULL;
    int returned_value = antman(file, 1);

    cr_assert_eq(returned_value, ERROR);
}

Test(choose_algorithm, basic_choose_algorithm_null_ptr)
{
    int returned_value = choose_algorithm(NULL, 1);

    cr_assert_eq(returned_value, ERROR);
}

Test(choose_algorithm, basic_choose_algorithm_type_1)
{
    int returned_value = choose_algorithm("TEST", 1);

    cr_assert_eq(returned_value, SUCCESS);
}

Test(choose_algorithm, basic_choose_algorithm_type_2)
{
    int returned_value = choose_algorithm("TEST", 2);

    cr_assert_eq(returned_value, SUCCESS);
}

Test(choose_algorithm, basic_choose_algorithm_type_3)
{
    int returned_value = choose_algorithm("TEST", 3);

    cr_assert_eq(returned_value, SUCCESS);
}

Test(choose_algorithm,
    basic_choose_algorithm_type_false, .init = cr_redirect_stderr)
{
    int returned_value = choose_algorithm("TEST", 10);

    cr_assert_stderr_eq_str("Invalid Type.\n\nCheck \"./antman/antman -h\"");
    cr_assert_eq(returned_value, ERROR);
}
