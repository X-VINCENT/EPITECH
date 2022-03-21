/*
** EPITECH PROJECT, 2022
** Test Giantman For Giantman
** File description:
** Xavier VINCENT - Hugo DUBOIS
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "giantman.h"

Test(giantman, basic_giantman_empty_file)
{
    int returned_value = giantman("tests/.files/.empty_file", 1);

    cr_assert_eq(returned_value, SUCCESS);
}

Test(giantman, basic_giantman_fake_file, .init = cr_redirect_stderr)
{
    int returned_value = giantman("FAKE_FILE", 1);

    cr_assert_stderr_eq_str("File not found.\n");
    cr_assert_eq(returned_value, ERROR);
}

Test(giantman, basic_giantman_wrong_type)
{
    int returned_value = giantman("tests/.files/.file_ok", 10);

    cr_assert_eq(returned_value, ERROR);
}

Test(giantman, basic_giantman_folder, .init = cr_redirect_stderr)
{
    int returned_value = giantman("tests/.files/", 1);

    cr_assert_stderr_eq_str("Giantman can't decompress folder.\n");
    cr_assert_eq(returned_value, ERROR);
}

Test(giantman, basic_giantman_file_null)
{
    const char *file = NULL;
    int returned_value = giantman(file, 1);

    cr_assert_eq(returned_value, ERROR);
}

Test(load_unsigned_short_file, basic_load_unsigned_short_file_null_ptr)
{
    unsigned short *returned_data = load_unsigned_short_file(NULL);

    cr_assert_null(returned_data);
}

Test(load_unsigned_short_file,
    basic_load_unsigned_short_file_wrong_file, .init = cr_redirect_stderr)
{
    unsigned short *returned_data = load_unsigned_short_file("FAKE_FILE");

    cr_assert_stderr_eq_str("File not found.\n");
    cr_assert_null(returned_data);
}

Test(choose_algorithm, basic_choose_algorithm_null_ptr)
{
    int returned_value = choose_algorithm(NULL, 1);

    cr_assert_eq(returned_value, ERROR);
}

Test(choose_algorithm,
    basic_choose_algorithm_type_1, .init = cr_redirect_stdout)
{
    unsigned short *file_data = malloc(sizeof(unsigned short) * 6);
    file_data[0] = (unsigned short)'S';
    file_data[1] = (unsigned short)'A';
    file_data[2] = (unsigned short)'L';
    file_data[3] = (unsigned short)'U';
    file_data[4] = (unsigned short)'T';
    file_data[5] = (unsigned short)' ';
    file_data[6] = (unsigned short)128;
    file_data[7] = (unsigned short)130;
    file_data[8] = (unsigned short)'T';
    int returned_value = choose_algorithm(file_data, 1);

    cr_assert_stdout_eq_str("SALUT SALUT");
    cr_assert_eq(returned_value, SUCCESS);
    free(file_data);
}

Test(choose_algorithm,
    basic_choose_algorithm_type_2, .init = cr_redirect_stdout)
{
    unsigned short *file_data = malloc(sizeof(unsigned short) * 6);
    file_data[0] = (unsigned short)'S';
    file_data[1] = (unsigned short)'A';
    file_data[2] = (unsigned short)'L';
    file_data[3] = (unsigned short)'U';
    file_data[4] = (unsigned short)'T';
    file_data[5] = (unsigned short)' ';
    file_data[6] = (unsigned short)128;
    file_data[7] = (unsigned short)130;
    file_data[8] = (unsigned short)'T';
    int returned_value = choose_algorithm(file_data, 2);

    cr_assert_stdout_eq_str("SALUT SALUT");
    cr_assert_eq(returned_value, SUCCESS);
    free(file_data);
}

Test(choose_algorithm,
    basic_choose_algorithm_type_3, .init = cr_redirect_stdout)
{
    unsigned short *file_data = malloc(sizeof(unsigned short) * 6);
    file_data[0] = (unsigned short)'S';
    file_data[1] = (unsigned short)'A';
    file_data[2] = (unsigned short)'L';
    file_data[3] = (unsigned short)'U';
    file_data[4] = (unsigned short)'T';
    file_data[5] = (unsigned short)' ';
    file_data[6] = (unsigned short)128;
    file_data[7] = (unsigned short)130;
    file_data[8] = (unsigned short)'T';
    int returned_value = choose_algorithm(file_data, 3);

    cr_assert_stdout_eq_str("SALUT SALUT");
    cr_assert_eq(returned_value, SUCCESS);
    free(file_data);
}

Test(choose_algorithm,
    basic_choose_algorithm_type_false, .init = cr_redirect_stderr)
{
    unsigned short *file_data = malloc(sizeof(unsigned short) * 6);
    file_data[0] = (unsigned short)'S';
    file_data[1] = (unsigned short)'A';
    file_data[2] = (unsigned short)'L';
    file_data[3] = (unsigned short)'U';
    file_data[4] = (unsigned short)'T';
    file_data[5] = (unsigned short)' ';
    file_data[6] = (unsigned short)128;
    file_data[7] = (unsigned short)130;
    file_data[8] = (unsigned short)'T';
    int returned_value = choose_algorithm(file_data, 10);

    cr_assert_stderr_eq_str(
        "Invalid Type.\n\nCheck \"./giantman/giantman -h\"");
    cr_assert_eq(returned_value, ERROR);
    free(file_data);
}
