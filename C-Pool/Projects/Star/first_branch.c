/*
** EPITECH PROJECT, 2021
** first_branch
** File description:
** Function that displays the first branch of a star
*/

void my_putchar(char c);
void double_asterix_push_outside(int spaces_before, int spaces_inside);

void first_branch(int branch_size)
{
    int i = 0;
    int middle_space = 1;
    int r = 2 * branch_size + branch_size - 2;

    while (i < branch_size - 1) {
        double_asterix_push_outside(r - i, middle_space);
        middle_space += 2;
        i++;
    }
}
