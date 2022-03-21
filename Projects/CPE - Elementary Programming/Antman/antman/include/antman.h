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

// Antman
int antman(const char *file, const int type);
int choose_algorithm(const char *file_text, const int type);

// LZW
int lzw_encoding(const char *file_data);
char **init_dictionnary(const int size);
int is_dictionnary(char **dictionnary, const char *to_test);
int print_code(char **dictionnary, const char *to_print);
char **add_dictionnary(char **dictionnary, const char *str);

// LZW2
int print_and_free(char **dictionnary, char *to_print);

// RLE
void rle_encoding(const char *file_data);

#endif /* !ANTMAN_H_ */
