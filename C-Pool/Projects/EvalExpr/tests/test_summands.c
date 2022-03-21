/*
** EPITECH PROJECT, 2021
** Test file for summands function
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include <criterion/criterion.h>
#include "../include/my.h"

int go_next_number(char **str_ptr);
int my_strtol(char *str, char **endptdr);
int summands(char **str_ptr);

Test(summands, return_the_sum_of_a_str)
{
    int result = 0;
    char *str = "1 + 2 + 3";

    result = summands(&str);
    cr_assert_eq(result, 6);
}

Test(summands, return_the_sum_of_a_str_2)
{
    int result = 0;
    char *str = "134 + 2 - 3";

    result = summands(&str);
    cr_assert_eq(result, 133);
}

Test(minus, count_minus_in_go_next_number)
{
    int result = 0;
    char *str = "--";

    result = go_next_number(&str);
    cr_assert_eq(result, 1);
}

Test(minus, count_minus_in_go_next_number_2)
{
    int result = 0;
    char *str = "---";

    result = go_next_number(&str);
    cr_assert_eq(result, -1);
}

Test(summands, return_a_one_nb)
{
    int result = 0;
    char *str = "134";

    result = summands(&str);
    cr_assert_eq(result, 134);
}

Test(summands, return_a_empty_str)
{
    int result = 0;
    char *str = "";

    result = summands(&str);
    cr_assert_eq(result, 0);
}
