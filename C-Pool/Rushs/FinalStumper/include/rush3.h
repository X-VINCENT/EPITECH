/*
** EPITECH PROJECT, 2021
** rush3.h
** File description:
** Header file for FinalStumper
*/

#include <unistd.h>
#include "my.h"

#ifndef RUSH3_H_
    #define RUSH3_H_

#ifndef BUFF_SIZE
    #define BUFF_SIZE (sizeof(char) * 2048)
#endif

int my_print_specific_result(int x, int y);
int my_print_result(int x, int y, char *str);
int rush3(char *buff);

#endif
