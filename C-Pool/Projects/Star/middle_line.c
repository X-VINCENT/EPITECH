/*
** EPITECH PROJECT, 2021
** middle_line
** File description:
** Function middle_line
*/

void my_putchar(char c);
number_of_spaces(int n);

void middle_line(int branch_size)
{
    int middle_space = 4 * branch_size - 3;

    number_of_spaces(branch_size);
    my_putchar('*');
    number_of_spaces(middle_space);
    my_putchar('*');
    my_putchar('\n');
}
