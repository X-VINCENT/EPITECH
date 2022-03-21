/*
** EPITECH PROJECT, 2021
** Test file for function rush_file
** File description:
** Xavier VINCENT - Nathan MOINARD
*/

#include <criterion/criterion.h>

char *rush_file(int i, char *str, char *buff);

Test(rush_file, test_a_returned_str)
{
    int i = 0;
    char *str;
    char *buff = "o*****o";

    str = rush_file(i, str, buff);
    cr_assert_str_eq("[rush1-1] ", str);
}

Test(rush_file, test_a_returned_str_2)
{
    int i = 0;
    char *str;
    char *buff = "/*****\\";

    str = rush_file(i, str, buff);
    cr_assert_str_eq("[rush1-2] ", str);
}

Test(rush_file, test_a_returned_str3)
{
    int i = 0;
    char *str;
    char *buff = "********";

    str = rush_file(i, str, buff);
    cr_assert_str_eq("[rush1-2] ", str);
}

Test(rush_file, test_a_returned_str4)
{
    int i = 3;
    char *str;
    char *buff = "ABBA\n";

    str = rush_file(i, str, buff);
    cr_assert_str_eq("[rush1-3] ", str);
}
