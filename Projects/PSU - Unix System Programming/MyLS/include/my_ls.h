/*
** EPITECH PROJECT, 2021
** Header FIle for my_ls
** File description:
** Xavier VINCENT
*/

#ifndef MY_LS_H_
    #define MY_LS_H_

    #include <dirent.h>
    #include <sys/stat.h>
    #include <sys/types.h>
    #include <pwd.h>
    #include <grp.h>
    #include <time.h>
    #include "my_lib.h"
    #include "my_printf.h"

    #define ERROR_FILE 84
    #define SUCCESS 0

typedef struct data_ls {
    int f_a;
    int f_l;
    int f_br;
    int f_d;
    int f_r;
    int f_t;
    int nb_paths;
    char **paths;
} data_ls_t;

void print_help(void);
void init_struct(data_ls_t *data_ls);
void init_flags(data_ls_t *data_ls, char **argv);
void init_paths(data_ls_t *data_ls, char **argv);
void check_paths(data_ls_t *data_ls);
void my_ls(data_ls_t *data_ls);
void ls(data_ls_t *data_ls, int i);
void ls_a(data_ls_t *data_ls, int i);
void ls_l(data_ls_t *data_ls, int i);
void ls_d(data_ls_t *data_ls, int i);
void ls_r(data_ls_t *data_ls, int i);
void basic_ls_none(char const *path);
void basic_ls_a(char const *path);
void basic_ls_l(char *path);
void basic_ls_r(char *path);
void sort_paths(data_ls_t *data_ls);
void reverse_sort_paths(data_ls_t *data_ls);
char **sort_filenames(char **filenames, int size);
char **reverse_sort_filenames(char **filenames, int size);

#endif /* !MY_LS_H_ */
