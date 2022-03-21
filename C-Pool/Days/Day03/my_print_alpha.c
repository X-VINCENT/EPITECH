/*
** EPITECH PROJECT, 2021
** my_print_alpha
** File description:
** Function that return the lowercase alphabet in ascending order
*/

int my_print_alpha(void)
{
    int letter;

    letter = 'a';
    while (letter < 123) {
        my_putchar(letter);
        letter++;
    }
    write(1, '\n', 1);
}
