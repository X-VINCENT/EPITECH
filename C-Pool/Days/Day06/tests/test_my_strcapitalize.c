/*
** EPITECH PROJECT, 2021
** test_mystrcapitalize
** File description:
** Function to tests my_strcapitalize
*/

#include <criterion/criterion.h>

char *my_strcapitalize(char *str);

Test(my_strcapitalize, return_a_string_uppercased_on_first_letters)
{
    char str[47] = "hey, how are you? 42WORds forty-two; fifty+one";

    my_strcapitalize(str);
    cr_assert_str_eq(str, "Hey, How Are You? 42words Forty-Two; Fifty+One");
}
