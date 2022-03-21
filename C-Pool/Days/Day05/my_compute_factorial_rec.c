/*
** EPITECH PROJECT, 2021
** my_compute_factorial_rec
** File description:
** Function my_compute_factorial_rec
*/

int my_compute_factorial_rec(int nb)
{
    int result;

    if (nb < 0 || nb >= 13)
        return (0);
    if (nb == 0)
        return (1);
    result = nb * my_compute_factorial_rec(nb - 1);
    return (result);
}
