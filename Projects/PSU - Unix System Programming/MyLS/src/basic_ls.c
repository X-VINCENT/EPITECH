/*
** EPITECH PROJECT, 2021
** Basic LS File for My LS
** File description:
** Xavier VINCENT
*/

#include "my_ls.h"

void basic_ls_none(char const *path)
{
    char **filenames = malloc(sizeof(char *) * 128);
    DIR *dir = opendir(path);
    struct dirent *dirent;
    int i = 0;

    while (dirent = readdir(dir))
        if (dirent->d_name[0] != '.') {
            filenames[i] = dirent->d_name;
            i += 1;
        }
    filenames = sort_filenames(filenames, i);
    for (int j = 0; j < i; j += 1)
        my_printf("%s  ", filenames[j]);
    free(filenames);
    closedir(dir);
}

void basic_ls_a(char const *path)
{
    char **filenames = malloc(sizeof(char *) * 128);
    DIR *dir = opendir(path);
    struct dirent *dirent;
    int i = 0;

    while (dirent = readdir(dir)) {
        filenames[i] = dirent->d_name;
        i += 1;
    }
    filenames = sort_filenames(filenames, i);
    for (int j = 0; j < i; j += 1)
        my_printf("%s  ", filenames[j]);
    free(filenames);
    closedir(dir);
}

void basic_ls_r(char *path)
{
    char **filenames = malloc(sizeof(char *) * 128);
    DIR *dir = opendir(path);
    struct dirent *dirent;
    int i = 0;

    while (dirent = readdir(dir)) {
        if (dirent->d_name[0] != '.') {
            filenames[i] = dirent->d_name;
            i += 1;
        }
    }
    filenames = reverse_sort_filenames(filenames, i);
    for (int j = 0; j < i; j += 1)
        my_printf("%s  ", filenames[j]);
    free(filenames);
    closedir(dir);
}
