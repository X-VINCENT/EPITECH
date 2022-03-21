/*
** EPITECH PROJECT, 2022
** Giantman for Antman
** File description:
** Xavier VINCENT - Hugo DUBOIS
*/

#include "giantman.h"

int giantman(const char *file, const int type)
{
    unsigned short *file_data = NULL;
    struct stat st;

    if (!file)
        return ERROR;
    if (stat(file, &st) == -1)
        return my_puterror("File not found.\n");
    if (S_ISDIR(st.st_mode))
        return my_puterror("Giantman can't decompress folder.\n");
    if (!(file_data = load_unsigned_short_file(file)))
        return my_puterror("Load file failed.\n");
    if (choose_algorithm(file_data, type) == ERROR) {
        free(file_data);
        return ERROR;
    }
    free(file_data);
    return SUCCESS;
}

unsigned short *load_unsigned_short_file(const char *file)
{
    struct stat st;
    int fd = 0;
    unsigned short *buff = NULL;

    if (!file)
        return NULL;
    if ((fd = open(file, O_RDONLY)) == -1) {
        my_puterror("File not found.\n");
        return NULL;
    }
    if (stat(file, &st) == -1)
        return NULL;
    if (!(buff = malloc(sizeof(unsigned short) * st.st_size + 1)))
        return NULL;
    if (read(fd, buff, st.st_size) < st.st_size)
        return NULL;
    close(fd);
    return buff;
}

int choose_algorithm(const unsigned short *file_data, const int type)
{
    if (!file_data)
        return ERROR;
    switch (type) {
        case 1:
            if (lzw_decoding(file_data) == ERROR)
                return ERROR;
            break;
        case 2:
            if (lzw_decoding(file_data) == ERROR)
                return ERROR;
            break;
        case 3:
            if (lzw_decoding(file_data) == ERROR)
                return ERROR;
            break;
        default:
            return my_puterror(
                "Invalid Type.\n\nCheck \"./giantman/giantman -h\"");
    }
    return SUCCESS;
}
