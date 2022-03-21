/*
** EPITECH PROJECT, 2021
** my_print_digits
** File description:
** Function that write all the digits in ascending order
*/

int my_print_digits(void)
{
    int digit;

    digit = '0';
    while (digit != ':') {
        my_putchar(digit);
        digit++;
    }
    write(1, '\n', 1);
}
