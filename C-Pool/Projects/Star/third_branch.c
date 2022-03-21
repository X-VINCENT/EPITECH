/*
** EPITECH PROJECT, 2021
** third_branch
** File description:
** Function third_branch
*/

void my_putchar(char c);
void number_of_spaces(int n);

void third_branch(int branch_size)
{
    int i = branch_size - 1;
    int middle_space = 4 * branch_size - 1;

    while (i >= 1) {
        number_of_spaces(i);
        my_putchar('*');
        number_of_spaces(middle_space);
        my_putchar('*');
        my_putchar('\n');
        middle_space += 2;
        i--;
    }
}
