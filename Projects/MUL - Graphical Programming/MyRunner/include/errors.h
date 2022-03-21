/*
** EPITECH PROJECT, 2022
** Errors Header for My Runner
** File description:
** Xavier VINCENT
*/

#ifndef ERRORS_H_
    #define ERRORS_H_

    #include "my_runner.h"

// Check Env
int env(char **arge);
int check_display(char *environment);

// Check File
int check_assets(void);
int check_parallax(void);
int check_pictures(void);
int check_sounds(void);
int is_file(const char *filepath);

// Check Map
int check_map(const char *filepath);

// Help
int print_help(void);

#endif /* !ERRORS_H_ */
