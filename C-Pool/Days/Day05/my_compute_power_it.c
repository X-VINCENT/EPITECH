/*
** EPITECH PROJECT, 2021
** my_compute_power_it
** File description:
** Function my_compute_power_it
*/

int my_compute_power_it(int nb, int p)
{
    int i = 1;
    int result = nb;

    if (p == 0)
        return (1);
    if (p < 0) {
        return (0);
    } else {
        while (i != p) {
            result = result * nb;
            i++;
        }
        return (result);
    }
}
