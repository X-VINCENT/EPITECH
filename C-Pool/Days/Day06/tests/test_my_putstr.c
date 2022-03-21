/*
** EPITECH PROJECT, 2021
** test_my_putstr
** File description:
** Function that tests my_putstr
*/

#include <criterion/criterion.h>

char *my_putstr(char *str);

Test(my_putstr, display_a_string)
{
    char str[14] = "Hello World !";

    my_putstr(str);
    cr_assert_str_eq(str, "Hello World !");
}
