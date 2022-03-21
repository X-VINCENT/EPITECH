/*
** EPITECH PROJECT, 2021
** first_last_asterix
** File description:
** Function that displays the first and the last asterix of the star
*/

void my_putchar(char c);

void first_last_asterix(int n)
{
    int i = 0;

    while (i != (2 * n + 1 + (n - 2))) {
        my_putchar(' ');
        i++;
    }
    my_putchar('*');
    my_putchar('\n');
}
