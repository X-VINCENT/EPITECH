/*
** EPITECH PROJECT, 2021
** test_my_strcat
** File description:
** Function that tests my_strcat
*/

#include <criterion/criterion.h>

char *my_strcat(char *dest, char const *src);

Test(my_strcat, concatenates_two_strings)
{
    char dest[100] = "Hello";
    char src[] = " World !";

    my_strcat(dest, src);
    cr_assert_str_eq(dest, "Hello World !");
}
