/*
** EPITECH PROJECT, 2022
** LZW for Giantman
** File description:
** Xavier VINCENT - HUGO DUBOIS
*/

#include "giantman.h"

int lzw_decoding(const unsigned short *file_data)
{
    char **d = init_dictionnary(256);
    char *s = NULL;
    char c = '\0';
    unsigned short old = 0;
    unsigned short new = 0;

    if (!file_data)
        return ERROR;
    old = file_data[0];
    print_char(d, old);
    for (unsigned int idx = 0; file_data[idx] != 0; idx += 1) {
        new = (file_data[idx + 1] != '\0') ? file_data[idx + 1] : '\0';
        s = is_dictionnary(d, new) ? my_strncat(
        get_str_in_dict(d, old), &c, 1) : get_str_in_dict(d, new);
        c = s[0];
        my_printf("%s", s);
        d = add_dictionnary(d, my_strncat(get_str_in_dict(d, old), &c, 1));
        old = new;
    }
    return SUCCESS;
}

void print_char(char **dictionnary, const unsigned short code)
{
    unsigned short dictionnary_size = 0;

    if (!dictionnary)
        return;
    while (dictionnary[dictionnary_size] != NULL)
        dictionnary_size += 1;
    dictionnary_size += 1;
    if (code >= dictionnary_size)
        return;
    my_printf("%s", dictionnary[code]);
}
