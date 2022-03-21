/*
** EPITECH PROJECT, 2021
** Test the rush3 function
** File description:
** Xavier VINCENT - Nathan MOINARD
*/

#include <criterion/criterion.h>

int rush3(char *buff);

Test(rush3, test_if_rush3_works)
{
    int returned_value = 0;
    char *buff = "********";

    returned_value = rush3(buff);
    cr_assert_eq(0, returned_value);
}

Test(rush3, test_if_rush3_works_2)
{
    int returned_value = 0;
    char *buff = "ABBBA\nB   B\nABBBA\n";

    returned_value = rush3(buff);
    cr_assert_eq(0, returned_value);
}

Test(rush3, test_if_rush3_works_3)
{
    int returned_value = 0;
    char *buff = "ABBBC\nB   B\nABBBC";

    returned_value = rush3(buff);
    cr_assert_eq(0, returned_value);
}

Test(rush3, test_if_rush3_works_4)
{
    int returned_value = 0;
    char *buff = "BBBBB\n";

    returned_value = rush3(buff);
    cr_assert_eq(0, returned_value);
}

Test(rush3, test_if_rush3_works5)
{
    int returned_value = 0;
    char *buff = "*\n*\n";

    returned_value = rush3(buff);
    cr_assert_eq(0, returned_value);
}
