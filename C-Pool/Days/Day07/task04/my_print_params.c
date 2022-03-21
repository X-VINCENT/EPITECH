/*
** EPITECH PROJECT, 2021
** my_print_params
** File description:
** Function that displays its arguments
*/

void my_putchar(char c);
char *my_putstr(char *str);

int main(int argc, char **argv)
{
    int i = 0;

    while (i < argc) {
        my_putstr(argv[i]);
        my_putchar('\n');
        i += 1;
    }
    return 0;
}
