/*
** EPITECH PROJECT, 2022
** Antman Header for Antman
** File description:
** Xavier VINCENT
*/

#ifndef ANTMAN_H_
    #define ANTMAN_H_

// Libs
    #include <fcntl.h>
    #include <stdlib.h>
    #include <sys/stat.h>
    #include "../../lib/my/my.h"
    #include "../../lib/my_printf/my_printf.h"

// Headers
    #include "errors.h"

// Macros
    #define SUCCESS 0
    #define ERROR 84

// Giantman
int giantman(const char *file, const int type);
unsigned short *load_unsigned_short_file(const char *file);
int choose_algorithm(const unsigned short *file_data, const int type);

// LZW Dictionnary
char **init_dictionnary(const int size);
int is_dictionnary(char **dictionnary, const int code_to_test);
char **add_dictionnary(char **dictionnary, const char *str);
char *get_str_in_dict(char **dictionnary, const unsigned short old);

// LZW
int lzw_decoding(const unsigned short *file_data);
char *check_dictionnary(
    char **dictionnary, unsigned short old, unsigned short new, char c);
int get_code(const char *str, const int start);
void print_char(char **dictionnary, const unsigned short code);

#endif /* !ANTMAN_H_ */
