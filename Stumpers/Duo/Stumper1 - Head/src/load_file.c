/*
** EPITECH PROJECT, 2022
** Tools
** File description:
** Xavier VINCENT
*/

#include "head.h"

int get_file_nb_of_lines(const char *filename)
{
    char *buff = NULL;
    int nb_lines = 0;

    if (!filename)
        return -1;
    if (!(buff = load_file_in_mem(filename)))
        return -1;
    for (int idx = 0; buff[idx] != '\0'; idx += 1) {
        if (buff[idx] == '\n') {
            nb_lines += 1;
        }
    }
    free(buff);
    return nb_lines;
}

char *load_file_in_mem(const char *filename)
{
    int fd = 0;
    char *buff = NULL;
    int nb_chars = 2000000000;

    if (!filename)
        return NULL;    
    if ((fd = open(filename, O_RDONLY)) == -1) {
        my_puterror("head: cannot open '");
        my_puterror(filename);
        my_puterror("' for reading: No such file or directory\n");
        return NULL;
    }
    if (!(buff = malloc(sizeof(char) * nb_chars + 1)))
        return NULL;
    if (read(fd, buff, nb_chars) == -1)
        return NULL;
    close(fd);
    return buff;
}
