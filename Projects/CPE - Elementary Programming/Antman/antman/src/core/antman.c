/*
** EPITECH PROJECT, 2022
** Antman for Antman
** File description:
** Xavier VINCENT - Hugo DUBOIS
*/

#include "antman.h"

int antman(const char *file, const int type)
{
    char *file_text = NULL;
    struct stat st;

    if (!file)
        return ERROR;
    if (stat(file, &st) == -1)
        return my_puterror("File not found.\n");
    if (S_ISDIR(st.st_mode))
        return my_puterror("Antman can't compress folder.\n");
    if (!(file_text = my_load_file_in_mem(file)))
        return ERROR;
    if (choose_algorithm(file_text, type) == ERROR) {
        free(file_text);
        return ERROR;
    }
    free(file_text);
    return SUCCESS;
}

int choose_algorithm(const char *file_text, const int type)
{
    if (!file_text)
        return ERROR;
    switch (type) {
        case 1:
            if (lzw_encoding(file_text) == ERROR)
                return ERROR;
            break;
        case 2:
            if (lzw_encoding(file_text) == ERROR)
                return ERROR;
            break;
        case 3:
            if (lzw_encoding(file_text) == ERROR)
                return ERROR;
            break;
        default:
            return my_puterror(
                "Invalid Type.\n\nCheck \"./antman/antman -h\"");
    }
    return SUCCESS;
}
