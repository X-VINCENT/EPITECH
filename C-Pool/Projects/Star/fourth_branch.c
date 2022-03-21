/*
** EPITECH PROJECT, 2021
** fourth_branch
** File description:
** Function fourth_branch
*/

void my_putchar(char c);
void number_of_spaces(int n);

void fourth_branch(int branch_size)
{
    int i = 2 * branch_size;
    int middle_space = 2 * branch_size - 3;

    while (i < (3 * branch_size - 1)) {
        number_of_spaces(i);
        my_putchar('*');
        number_of_spaces(middle_space);
        my_putchar('*');
        my_putchar('\n');
        middle_space -= 2;
        i++;
    }
}
