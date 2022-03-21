/*
** EPITECH PROJECT, 2021
** second_branch
** File description:
** Function second_branch
*/

void my_putchar(char c);

void second_branch(int branch_size)
{
    int i = 1;
    int middle_space = 6 * branch_size - 5;

    while (i < branch_size) {
        number_of_spaces(i);
        my_putchar('*');
        number_of_spaces(middle_space);
        my_putchar('*');
        my_putchar('\n');
        middle_space -= 2;
        i++;
    }
}
