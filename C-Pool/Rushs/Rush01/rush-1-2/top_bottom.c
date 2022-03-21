/*
** EPITECH PROJECT, 2021
** top_bottom
** File description:
** Function that displays the top and the bottom
*/

void display(int nb, char letter);

void top_bottom(char a, char b, char c, int x)
{
    if (x == 1) {
        display(1, b);
        display(1, '\n');
    } else {
        display(1, a);
        display(x - 2, b);
        display(1, c);
        display(1, '\n');
    }
}
