/*
** EPITECH PROJECT, 2021
** Errors Management File for My LS
** File description:
** Xavier VINCENT
*/

#include "my_ls.h"

void print_help(void)
{
    my_printf("Usage: my_ls [OPTION]... [FILE]...\n");
    my_printf("List informations about the FILEs ");
    my_printf("(the current directory by default).\n");
    my_printf("Sort entries alphabetically if -r is not specified.\n\n");
    my_printf("Mandatory arguments to long options are mandatory for short ");
    my_printf("options too.\n");
    my_printf("  -a          do not ignore entries starting with .\n");
    my_printf("  -d          list directories themselves not their contents\n");
    my_printf("  -l          use a long listing format\n");
    my_printf("  -r          reverse order while sorting\n");
    my_printf("  -R          list subdirectories recursively\n");
    my_printf("  -t          sort by time, newest first\n");
}

void check_paths(data_ls_t *data_ls)
{
    DIR *dir;

    for (int i = 0; data_ls->paths[i] != 0; i += 1) {
        dir = opendir(data_ls->paths[i]);
        if (!dir) {
            my_printf("my_ls: cannot access '%s': No such file or directory\n",
            data_ls->paths[i]);
            exit(ERROR_FILE);
        }
        closedir(dir);
    }
}
