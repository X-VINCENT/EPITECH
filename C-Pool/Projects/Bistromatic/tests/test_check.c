/*
** EPITECH PROJECT, 2021
** Test File for Bistromatic Checks Error Function
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../include/bistromatic.h"

void redirect_all_stdout(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(check_ops, exit_code, .init=redirect_all_stdout)
{
    char *ops = "()+-*/%";

    check_ops(ops);
    cr_assert_stdout_neq_str("", "");
}

Test(check_ops, exit_code_2, .init=redirect_all_stdout)
{
    char *ops = "()+-*/%[";

    check_ops(ops);
    cr_assert_stdout_eq_str(SYNTAX_ERROR_MSG, "");
}

Test(check_ops, exit_code_3, .init=redirect_all_stdout)
{
    char *ops = "()+--/%";

    check_ops(ops);
    cr_assert_stdout_eq_str(SYNTAX_ERROR_MSG, "");
}

Test(check_base, exit_code_4, .init=redirect_all_stdout)
{
    char *base = "0123456789";
    char *ops = "()+-*/%";

    check_base(base, ops);
    cr_assert_stdout_neq_str("", "");
}

Test(check_base, exit_code_5, .init=redirect_all_stdout)
{
    char *base = "0";
    char *ops = "()+-*/%";

    check_base(base, ops);
    cr_assert_stdout_eq_str(SYNTAX_ERROR_MSG, "");
}

Test(check_expr, exit_code_6, .init=redirect_all_stdout)
{
    char *expr = "3+5";
    int size = 3;

    check_expr(expr, size);
    cr_assert_stdout_neq_str("", "");
}

Test(check_expr, exit_code_7, .init=redirect_all_stdout)
{
    char *expr = "";
    int size = 0;

    check_expr(expr, size);
    cr_assert_stdout_eq_str(SYNTAX_ERROR_MSG, "");
}

Test(check_expr, exit_code_8, .init=redirect_all_stdout)
{
    char *expr = "3+5";
    int size = 0;

    check_expr(expr, size);
    cr_assert_stdout_eq_str(SYNTAX_ERROR_MSG, "");
}

Test(check_expr, exit_code_9, .init=redirect_all_stdout)
{
    char *expr = "3+5";
    int size = 5;

    check_expr(expr, size);
    cr_assert_stdout_eq_str(SYNTAX_ERROR_MSG, "");
}

Test(check_expr, exit_code_10, .init=redirect_all_stdout)
{
    char *expr = "(3)+(5)";
    int size = 7;

    check_expr(expr, size);
    cr_assert_stdout_neq_str("", "");
}

Test(check_expr, exit_code_11, .init=redirect_all_stdout)
{
    char *expr = ")(3)+(5)";
    int size = 8;

    check_expr(expr, size);
    cr_assert_stdout_eq_str(SYNTAX_ERROR_MSG, "");
}

Test(check_expr, exit_code_12, .init=redirect_all_stdout)
{
    char *expr = "(3))+(5)";
    int size = 8;

    check_expr(expr, size);
    cr_assert_stdout_eq_str(SYNTAX_ERROR_MSG, "");
}

Test(check_div_by_o, exit_code_13, .init=redirect_all_stdout)
{
    char *expr = "3/1";

    check_div_by_o(expr);
    cr_assert_stdout_neq_str("", "");
}

Test(check_div_by_o, exit_code_14, .init=redirect_all_stdout)
{
    char *expr = "3/0";

    check_div_by_o(expr);
    cr_assert_stdout_eq_str(DIVBY0_ERROR_MSG, "");
}

Test(check_div_by_o, exit_code_15, .init=redirect_all_stdout)
{
    char *expr = "3%1";

    check_div_by_o(expr);
    cr_assert_stdout_neq_str("", "");
}

Test(check_div_by_o, exit_code_16, .init=redirect_all_stdout)
{
    char *expr = "3%0";

    check_div_by_o(expr);
    cr_assert_stdout_neq_str("", "");
}
