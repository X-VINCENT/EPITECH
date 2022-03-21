/*
** EPITECH PROJECT, 2021
** Help File for My Runner
** File description:
** Xavier VINCENT
*/

#include "my_runner.h"

int print_help(void)
{
    char *help_msg = malloc(sizeof(char) * 1024);
    int fd = open("src/errors/.help", O_RDONLY);

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
