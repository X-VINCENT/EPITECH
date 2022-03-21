/*
** EPITECH PROJECT, 2021
** Test my_strstr
** File description:
** Function that tests my_strstr
*/

#include <criterion/criterion.h>
#include <stdlib.h>

char *my_strstr(char *str, char const *to_find);

Test(my_strstr, return_pointer_of_a_string_with_occurence)
{
    char str[] = "HelloWORLD";
    char to_find[] = "OR";
    char *test;

    test = my_strstr(str, to_find);    
    cr_assert_str_eq(test, "ORLD");
}

Test(my_strstr, return_pointer_of_a_string_with_occurence_2)
{
    char str[] = "HelloWord";
    char to_find[] = "ab";

    cr_assert_eq(my_strstr(str, to_find), NULL);
}
