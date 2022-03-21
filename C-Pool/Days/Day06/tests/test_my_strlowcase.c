/*
** EPITECH PROJECT, 2021
** test_my_strlowcase
** File description:
** Function that tests my_strlowcase
*/

#include <criterion/criterion.h>

char *my_strlowcase(char const *str);

Test(my_strlowcase, lowcase_the_characters_of_a_string)
{
    char str[] = "HELLOWORLD";
    
    cr_assert_str_eq(my_strlowcase(str), "helloworld");

}
