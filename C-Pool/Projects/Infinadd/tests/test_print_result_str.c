/*
** EPITECH PROJECT, 2021
** Test for print_result_str function
** File description:
** Test
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../include/my.h"

void redirect_all_stdout(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

int print_result_str(int i, int ret, char *result_str);

Test(print_result_str, test_the_printed_str, .init = redirect_all_stdout)
{
    int i = 4;
    int ret = 0;

    print_result_str(i, ret, "1234");
    cr_assert_stdout_eq_str("1234\n");
}
