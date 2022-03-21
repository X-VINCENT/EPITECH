/*
** EPITECH PROJECT, 2021
** My LS File for My LS
** File description:
** Xavier VINCENT
*/

#include "my_ls.h"

void ls_flags(data_ls_t *data_ls, int i)
{
    if (data_ls->f_l == 1) {
        ls_l(data_ls, i);
        return;
    }
    if (data_ls->f_d == 1) {
        ls_d(data_ls, i);
        return;
    }
    if (data_ls->f_r == 1) {
        ls_r(data_ls, i);
        return;
    }
    if (data_ls->f_a == 1) {
        ls_a(data_ls, i);
        return;
    }
}

void my_ls(data_ls_t *data_ls)
{
    DIR *dir;

    sort_paths(data_ls);
    if (data_ls->f_r == 1)
        reverse_sort_paths(data_ls);
    for (int i = 0; data_ls->paths[i]; i += 1) {
        if (data_ls->f_a == 0 && data_ls->f_br == 0 &&
            data_ls->f_d == 0 && data_ls->f_l == 0 && data_ls->f_r == 0)
            ls(data_ls, i);
        else
            ls_flags(data_ls, i);
    }
}
