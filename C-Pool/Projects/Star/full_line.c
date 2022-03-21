/*
** EPITECH PROJECT, 2021
** full_line
** File description:
** Function full_line
*/

void my_putchar(char c);

void full_line(int size)
{
    int i = 0;
    int nb_of_asterix = 2 * size;
    int nb_of_spaces = 2 * size - 3;

    while (i <= nb_of_asterix) {
        my_putchar('*');
        i++;
    }
    i = 0;
    while (i < nb_of_spaces) {
        my_putchar(' ');
        i++;
    }
    i = 0;
    while (i <= nb_of_asterix) {
        my_putchar('*');
        i++;
    }
    my_putchar('\n');
}
