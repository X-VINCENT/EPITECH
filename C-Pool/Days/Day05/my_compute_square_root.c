/*
** EPITECH PROJECT, 2021
** my_compute_square_root
** File description:
** Function my_compute_square_root
*/

int my_compute_square_root(int nb)
{
    int i = 0;
    int j;

    while (j != nb) {
        if (i > 46340) {
            return (0);
        } else {
            i++;
            j = i * i;
        }
    }
    return (i);
}
