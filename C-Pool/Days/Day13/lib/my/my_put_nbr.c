/*
** EPITECH PROJECT, 2021
** my_put_nbr
** File description:
** Function my_put_nbr
*/

void my_putchar(char c);

int my_put_nbr(int nb)
{
    int modulo = 0;

    if (nb < 0) {
        nb = nb * (-1);
    }
    if (nb >= 1 && nb <= 9) {
        my_putchar(48 + nb);
    } else {
        modulo = (nb % 10);
        nb = (nb - modulo) / 10;
        my_put_nbr(nb);
        my_putchar(48 + modulo);
    }
}
