/*
** EPITECH PROJECT, 2021
** test_my_strcpy
** File description:
** Function that tests my_strcpy
*/

#include <criterion/criterion.h>

char *my_strcpy(char *dest, char const *src);

Test(my_strcpy, copie_a_string_into_another)
{
    char dest[13] = {0};

    my_strcpy(dest, "Hello World");
    cr_assert_str_eq(dest, "Hello World");
}
