/*
** EPITECH PROJECT, 2021
** my_print_comb
** File description:
** Function "my_print_comb"
*/

int my_print_number(int x, int y, int z)
{
    if (x == 55 && y == 56 && z == 57) {
        my_putchar(x);
        my_putchar(y);
        my_putchar(z);
    } else {
        my_putchar(x);
        my_putchar(y);
        my_putchar(z);
        my_putchar(',');
        my_putchar(' ');
    }
}

int my_print_comb(void)
{
    int x = 48;
    int y = 49;
    int z = 50;

    while (x <= 55) {
        my_print_number(x, y, z);
        z++;
        if (z > 57) {
            y++;
            z = y+1;
        }
        if (y > 56) {
            x++;
            y = x+1;
            z = y+1;
        }
    }
    my_putchar('\n');
}
