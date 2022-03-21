/*
** EPITECH PROJECT, 2021
** Rush 1_1
** File description:
** Function that displays a square or a rectangle
*/

const char *display_error(void);
void top_bottom(char a, char b, char c, int x);
void middle(char c, int x, int y);

void rush(int x, int y)
{
    char a = 'o';
    char b = '-';
    char c = '|';

    if (x > 0 && y > 1) {
        top_bottom(a, b, a, x);
        middle(c, x, y);
        top_bottom(a, b, a, x);
    } else if (y == 1 && x > 0) {
        top_bottom(a, b, a, x);
    } else {
        display_error();
    }
}
