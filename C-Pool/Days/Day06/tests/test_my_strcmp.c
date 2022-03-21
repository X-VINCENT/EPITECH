/*
** EPITECH PROJECT, 2021
** test_my_strcmp
** File description:
** Function that tests my_strcmp.c
*/

#include <criterion/criterion.h>

int my_strcmp(char const *s1, char const *s2);

Test(my_strcmp, return_occurence_between_full_strings)
{
    char s1[] = "Hello World";
    char s2[] = "Hello World";
    
    cr_assert_eq(my_strcmp(s1, s2), 0);
}

Test(my_strcmp, return_occurence_between_full_strings_2)
{
    char s1[] = "Hello World";
    char s2[] = "Hello War";

    cr_assert_eq(my_strcmp(s1, s2), 1);
}

Test(my_strcmp, return_occurence_between_full_strings_3)
{
    char s1[] = "Hello War";
    char s2[] = "Hello World";

    cr_assert_eq(my_strcmp(s1, s2), -1);
}
