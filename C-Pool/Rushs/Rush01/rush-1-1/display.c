/*
** EPITECH PROJECT, 2021
** display
** File description:
** Function that display a letter
*/

void my_putchar(char c);

void display(int nb, char letter)
{
    for (int i = 1; i <= nb; i++) {
        my_putchar(letter);
    }
}
