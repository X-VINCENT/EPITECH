/*
** EPITECH PROJECT, 2021
** my_print_comb2
** File description:
** Function 'my_print_comb2'
*/

int my_print_nbr(int a, int b, int c, int d)
{
    if (d == 58) {
    } else if (a == 57 && b == 56) {
        my_putchar(a);
        my_putchar(b);
        my_putchar(' ');
        my_putchar(c);
        my_putchar(d);
        my_putchar('\n');
    } else {
        my_putchar(a);
        my_putchar(b);
        my_putchar(' ');
        my_putchar(c);
        my_putchar(d);
        my_putchar(',');
        my_putchar(' ');
    }
}

int my_print_comb2(void)
{
    int a = 48;
    int b = 48;
    int c = 48;
    int d = 49;

    while_function(a, b, c, d);
}

int while_function(int a, int b, int c, int d)
{
    while (a <= 57 && b <= 57) {
        my_print_nbr(a, b, c, d);
        if (++d > 57) {
            c++;
            d = 48;
	}
        if (c > 57) {
            b++;
            c = a;
            d = b + 1;
	}
        if (b > 57) {
            a++;
            b = 48;
            c++;
            d = b + 1;
        }
        if (a > 57) b = b - 2;
    }
}
