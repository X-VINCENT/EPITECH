/*
** EPITECH PROJECT, 2021
** Main File for My Ls
** File description:
** Xavier VINCENT
*/

#include "my_ls.h"

int main(int argc, char **argv)
{
    data_ls_t data_ls;

    if (argc == 1) {
        basic_ls_none("./");
        my_printf("\n");
        return SUCCESS;
    }
    if (argc == 2 && !(my_strcmp(argv[1], "--help"))) {
        print_help();
        return SUCCESS;
    }
    init_struct(&data_ls);
    init_flags(&data_ls, argv);
    init_paths(&data_ls, argv);
    check_paths(&data_ls);
    my_ls(&data_ls);
    return SUCCESS;
}
