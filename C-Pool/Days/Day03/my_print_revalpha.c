/*
** EPITECH PROJECT, 2021
** my_print_revalpha
** File description:
** Writes alphabet in descending order
*/

int my_print_revalpha(void)
{
    int letter;

    letter = 'z';
    while (letter > 96) {
        my_putchar(letter);
        letter--;
    }
    write(1, '\n', 1);
    return (0);
}
