/*
** EPITECH PROJECT, 2021
** test_my_strupcase
** File description:
** Test for my_strupcase
*/

#include <criterion/criterion.h>

char *my_strupcase(char const *str);

Test(my_strupcase, upcase_the_caracters_of_a_string)
{
    char str[] = "helloworld";

    cr_assert_str_eq(my_strupcase(str), "HELLOWORLD");

}
