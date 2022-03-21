/*
** EPITECH PROJECT, 2021
** numebr_of_spaces
** File description:
** Function that displays some spaces
*/

void my_putchar(char c);

void number_of_spaces(int n)
{
    int i = 0;

    while (i != n) {
        my_putchar(' ');
        i++;
    }
}
