/*
** EPITECH PROJECT, 2022
** Header File for Countwords
** File description:
** Xavier VINCENT
*/

#ifndef COUNTWORDS_H_
    #define COUNTWORDS_H_

    #include <stdio.h>
    #include <stdlib.h>
    #include <unistd.h>

int countwords(const char *str);
int my_strlen(const char *str);
char **store_words(const char *str);
char *get_word(const char *str, int i);

char *my_strcpy(char *dest, const char *src);

#endif /* !COUNTWORDS_H_ */
