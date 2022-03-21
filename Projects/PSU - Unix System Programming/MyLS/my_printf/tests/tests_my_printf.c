/*
** EPITECH PROJECT, 2021
** Criterion Tests for my_printf
** File description:
** Xavier VINCENT
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../include/my_printf.h"

Test(my_printf, basic_flags, .init = cr_redirect_stdout)
{
    my_printf("Basic Flags : %d, %i, %s, %c, %%, %b !", 1, 2, "str", 'c', 10);
    cr_assert_stdout_eq_str("Basic Flags : 1, 2, str, c, \%, 1010 !");
}

Test(my_printf, basic_flags_2, .init = cr_redirect_stdout)
{
    my_printf("Basic Flags 2 : %x, %X, %o !\n\n", 123, 123, 100);
    cr_assert_stdout_neq_str("Basic Flags 2 : 7b, 7B, 144 !");
}

Test(my_printf, basic_flags_3, .init = cr_redirect_stdout)
{
    char str[5] = "toto";
    char str2[5] = "you";
    str[1] = 6;
    str2[1] = '\f';

    my_printf("Basic Flags 3 : %u, %p, %S, %S !\n\n", 123, 123, str, str2);
    cr_assert_stdout_neq_str("Basic Flags 2 : 123, not_known, t\006to, y\014u !");
}

Test(my_printf, basic_spaces, .init = cr_redirect_stdout)
{
    my_printf("Basic Spaces Flags : %  b, %  s, %  c !", 0, "str", 'c');
    cr_assert_stdout_eq_str("Basic Spaces Flags :  0, str, c !");
}

Test(my_printf, medium_spaces_1, .init = cr_redirect_stdout)
{
    my_printf("Medium Spaces Flags 1 : %3d, %10d, %0d !", 1, 2, 0);
    cr_assert_stdout_neq_str("Medium Spaces Flags 1 :   1,          2, 0 !");
}

Test(my_printf, medium_spaces_2, .init = cr_redirect_stdout)
{
    my_printf("Medium Spaces Flags 1 : %-3d, %-10i, %-d !", -1, -10, -2);
    cr_assert_stdout_neq_str("Medium Spaces Flags 2 : -1 , -10       , -2 !");
}

Test(my_printf, special_asserts, .init = cr_redirect_stdout)
{
    my_printf("Special Asserts : %+30%, %-30%, %+%, %-%");
    cr_assert_stdout_neq_str("Special Asserts : %%, %%");
}

Test(my_printf, untestable, .init = cr_redirect_stdout)
{
    int c = 0;

    my_printf("Can't test this one%n", &c);
    cr_assert_stdout_eq_str("Can't test this one");
}
