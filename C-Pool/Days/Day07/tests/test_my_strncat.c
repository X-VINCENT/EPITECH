/*
** EPITECH PROJECT, 2021
** test_my_strncat
** File description:
** Function that tests my_strncat
*/

#include <criterion/criterion.h>

char *my_strncat(char *dest, char const *src, int nb);

Test(my_strncat, concatenates_two_strings_n)
{
    char dest[100] = "Hello";
    char src[] = " World !";

    my_strncat(dest, src, 6);
    cr_assert_str_eq(dest, "Hello World");
}
