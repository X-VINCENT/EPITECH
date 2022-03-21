/*
** EPITECH PROJECT, 2021
** my_rev_params
** File description:
** Function that displays its arguments in reverse order
*/

int main(int argc, char **argv)
{
    int i = 0;

    while (i < argc)
        i += 1;
    i -= 1;
    while (i >= 0) {
        my_putstr(argv[i]);
        my_putchar('\n');
        i -= 1;
    }
    return 0;
}
