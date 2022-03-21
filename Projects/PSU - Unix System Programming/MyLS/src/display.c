/*
** EPITECH PROJECT, 2021
** Display File for My LS
** File description:
** Xavier VINCENT
*/

#include "my_ls.h"

void ls(data_ls_t *data_ls, int i)
{
    if (data_ls->paths[1] != 0)
        my_printf("%s:\n", data_ls->paths[i]);
    basic_ls_none(data_ls->paths[i]);
    my_printf("\n");
    if (data_ls->paths[i + 1] != 0)
        my_printf("\n");
}

void ls_a(data_ls_t *data_ls, int i)
{
    if (data_ls->paths[1] != 0)
        my_printf("%s:\n", data_ls->paths[i]);
    basic_ls_a(data_ls->paths[i]);
    my_printf("\n");
    if (data_ls->paths[i + 1] != 0)
        my_printf("\n");
}

void ls_l(data_ls_t *data_ls, int i)
{
    if (data_ls->paths[1] != 0)
        my_printf("%s:\n", data_ls->paths[i]);
    basic_ls_l(data_ls->paths[i]);
    if (data_ls->paths[i + 1] != 0)
        my_printf("\n");
}

void ls_d(data_ls_t *data_ls, int i)
{
    char *d_flag = (data_ls->paths[i + 1] != 0) ? "  " : "\n";

    my_printf("%s", data_ls->paths[i]);
    my_printf("%s", d_flag);
}

void ls_r(data_ls_t *data_ls, int i)
{
    if (data_ls->paths[1] != 0)
        my_printf("%s:\n", data_ls->paths[i]);
    basic_ls_r(data_ls->paths[i]);
    my_printf("\n");
    if (data_ls->paths[i + 1] != 0)
        my_printf("\n");
}
