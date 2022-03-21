/*
** EPITECH PROJECT, 2021
** test_my_strncmp
** File description:
** Function that tests my_strncmp.c
*/

#include <criterion/criterion.h>

int my_strncmp(char const *s1, char const *s2, int n);

Test(my_strncmp, return_occurence_betwenn_strings)
{
    char s1[] = "Hello World";
    char s2[] = "Hello War";
    
    cr_assert_eq(my_strncmp(s1, s2, 5), 0);
}

Test(my_strncmp, return_occurence_betwenn_strings_2)
{
    char s1[] = "Hello World";
    char s2[] = "Hello War";

    cr_assert_eq(my_strncmp(s1, s2, 9), 1);
}

Test(my_strncmp, return_occurence_betwenn_strings_3)
{
    char s1[] = "Hello War";
    char s2[] = "Hello World";

    cr_assert_eq(my_strncmp(s1, s2, 9), -1);
}
