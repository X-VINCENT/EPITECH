/*
** EPITECH PROJECT, 2021
** test_my_revstr
** File description:
** Function to test my_revstr
*/

#include <criterion/criterion.h>

char *my_revstr(char *str);

Test(my_revstr, reverse_a_string)
{
    char str[14] = "Hello World !";

    my_revstr(str);
    cr_assert_str_eq(str, "! dlroW olleH");
}
