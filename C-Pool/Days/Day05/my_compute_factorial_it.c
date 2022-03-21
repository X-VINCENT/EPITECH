/*
** EPITECH PROJECT, 2021
** my_compute_factorial_it.c
** File description:
** Function my_compute_factorial_it.c
*/

int my_compute_factorial_it(int nb)
{
    int i = 1;
    int result = 1;

    if (nb < 0 || nb >= 13) {
        return (0);
    }
    if (nb == 0) {
        return (1);
    } else {
        while (i <= nb) {
            result = result * i;
            i++;
        }
    }
    return (result);
}
