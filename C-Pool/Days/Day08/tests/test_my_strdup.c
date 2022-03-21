/*
** EPITECH PROJECT, 2021
** test_my_strdup
** File description:
** Function that tests my_strdup
*/

#include <criterion/criterion.h>

char *my_strdup(char const *src);

Test(my_strdup, allocate_memory_and_copies_a_string)
{
    char src[] = "This is a very long test to test my function";
    char *str;

    str = my_strdup(src);
    cr_assert_str_eq(str, "This is a very long test to test my function");
}
