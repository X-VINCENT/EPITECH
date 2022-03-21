/*
** EPITECH PROJECT, 2021
** double_asterix_push_outside
** File description:
** Function that display some asterix
*/

void my_putchar(char c);

void double_asterix_push_outside(int spaces_before, int spaces_inside)
{
    int i = 0;

    if (spaces_inside > 0) {
        while (i != spaces_before) {
            my_putchar(' ');
            i++;
        }
        my_putchar('*');
        i = 1;
        while (i <= spaces_inside) {
            my_putchar(' ');
            i++;
        }
        my_putchar('*');
        my_putchar('\n');
    } else {
        my_putchar('\n');
    }
}
