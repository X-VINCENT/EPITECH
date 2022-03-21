/*
** EPITECH PROJECT, 2022
** Test LZW2 for Antman
** File description:
** Xavier VINCENT - Hugo DUBOIS
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "antman.h"

Test(print_and_free, basic_print_and_free_null_ptr_dictionnary)
{
    int returned_value = print_and_free(NULL, "STR");

    cr_assert_eq(returned_value, ERROR);
}

Test(print_and_free, basic_print_and_free_null_ptr_str)
{
    char **dictionnary = init_dictionnary(128);
    int returned_value = print_and_free(dictionnary, NULL);

    cr_assert_eq(returned_value, ERROR);
    free(dictionnary);
}

Test(print_and_free, basic_print_and_free)
{
    char **dictionnary = init_dictionnary(128);
    char *str = my_strcpy("STR");
    int returned_value = print_and_free(dictionnary, str);

    cr_assert_eq(returned_value, SUCCESS);
}
