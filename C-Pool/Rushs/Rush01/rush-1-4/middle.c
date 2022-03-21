/*
** EPITECH PROJECT, 2021
** MIDDLE
** File description:
** Function middle from square function
*/

void display(int nb, char letter);

void middle(char c, int x, int y)
{
    int i = 1;

    while (i <= y - 2) {
        if (x == 1) {
            display(1, c);
            display(1, '\n');
            i++;
        } else {
            display(1, c);
            display(x - 2, ' ');
            display(1, c);
            display(1, '\n');
            i++;
        }
    }
}
