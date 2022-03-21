/*
** EPITECH PROJECT, 2021
** Init Struct for My LS
** File description:
** Xavier VINCENT
*/

#include "my_ls.h"

void init_struct(data_ls_t *data_ls)
{
    data_ls->f_a = 0;
    data_ls->f_l = 0;
    data_ls->f_br = 0;
    data_ls->f_d = 0;
    data_ls->f_r = 0;
    data_ls->f_t = 0;
    data_ls->nb_paths = 0;
    data_ls->paths = malloc(sizeof(char *) * 128);
    data_ls->paths[0] = ".";
}

void check_flag(data_ls_t *data_ls, char *flag)
{
    for (int i = 1; flag[i] != '\0'; i += 1) {
        data_ls->f_a = (flag[i] == 'a') ? 1 : data_ls->f_a;
        data_ls->f_l = (flag[i] == 'l') ? 1 : data_ls->f_l;
        data_ls->f_br = (flag[i] == 'R') ? 1 : data_ls->f_br;
        data_ls->f_d = (flag[i] == 'd') ? 1 : data_ls->f_d;
        data_ls->f_r = (flag[i] == 'r') ? 1 : data_ls->f_r;
        data_ls->f_t = (flag[i] == 't') ? 1 : data_ls->f_t;
    }
}

void init_flags(data_ls_t *data_ls, char **argv)
{
    for (int i = 1; argv[i] != 0; i += 1)
        if (argv[i][0] == '-')
            check_flag(data_ls, argv[i]);
}

void init_paths(data_ls_t *data_ls, char **argv)
{
    int j = 1;

    for (int i = 1; argv[i] != 0; i += 1)
        if (argv[i][0] != '-') {
            data_ls->paths[i - j] = malloc(my_strlen(argv[i] + 1));
            data_ls->paths[i - j] = my_strcpy(data_ls->paths[i - j], argv[i]);
            data_ls->nb_paths += 1;
        } else
            j += 1;
}
