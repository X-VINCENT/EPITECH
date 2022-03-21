/*
** EPITECH PROJECT, 2021
** Sort Paths File for My LS
** File description:
** Xavier VINCENT
*/

#include "my_ls.h"

void swap_paths(data_ls_t *data_ls, int j)
{
    char *tmp = malloc(sizeof(char) * 128);

    my_strcpy(tmp, data_ls->paths[j]);
    my_strcpy(data_ls->paths[j], data_ls->paths[j + 1]);
    my_strcpy(data_ls->paths[j + 1], tmp);
    free(tmp);
}

void sort_paths(data_ls_t *data_ls)
{
    for (int i = 0; i < data_ls->nb_paths; i += 1)
        for (int j = 0; j < data_ls->nb_paths - 1 - i; j += 1)
            (my_strcmp(data_ls->paths[j], data_ls->paths[j + 1]) == 1) ?
            swap_paths(data_ls, j) : 0;
}

void reverse_sort_paths(data_ls_t *data_ls)
{
    for (int i = 0; i < data_ls->nb_paths; i += 1)
        for (int j = 0; j < data_ls->nb_paths - 1 - i; j += 1)
            (my_strcmp(data_ls->paths[j], data_ls->paths[j + 1]) == -1) ?
            swap_paths(data_ls, j) : 0;
}
