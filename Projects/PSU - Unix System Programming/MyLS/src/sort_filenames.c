/*
** EPITECH PROJECT, 2021
** Sort Filenames File for My LS
** File description:
** Xavier VINCENT
*/

#include "my_ls.h"

char **swap_filenames(char **filenames, int j)
{
    char *tmp = malloc(sizeof(char) * 128);

    my_strcpy(tmp, filenames[j]);
    my_strcpy(filenames[j], filenames[j + 1]);
    my_strcpy(filenames[j + 1], tmp);
    free(tmp);
    return filenames;
}

char **sort_filenames(char **filenames, int size)
{
    for (int i = 0; i < size; i += 1) {
        for (int j = 0; j < size - 1 - i; j += 1) {
            filenames = (my_strcmp(filenames[j], filenames[j + 1]) == 1) ?
            swap_filenames(filenames, j) : filenames;
        }
    }
    return filenames;
}

char **reverse_sort_filenames(char **filenames, int size)
{
    for (int i = 0; i < size; i += 1) {
        for (int j = 0; j < size - 1 - i; j += 1) {
            filenames = (my_strcmp(filenames[j], filenames[j + 1]) == -1) ?
            swap_filenames(filenames, j) : filenames;
        }
    }
    return filenames;
}
