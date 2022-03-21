/*
** EPITECH PROJECT, 2021
** Help File for My Runner
** File description:
** Xavier VINCENT
*/

#include "antman.h"

int print_help(const char *help_path)
{
    char *help_msg = malloc(sizeof(char) * 1024);
    int fd = open(help_path, O_RDONLY);

    if (fd == -1) {
        my_printf("Invalid Help File\n");
        free(help_msg);
        close(fd);
        return ERROR;
    }
    read(fd, help_msg, 1024);
    my_printf(help_msg);
    free(help_msg);
    close(fd);
    return SUCCESS;
}
