/*
** EPITECH PROJECT, 2022
** Palindrome Header
** File description:
** Xavier VINCENT
*/

#ifndef PALINDROME_H_
    #define PALINDROME_H_

// Libs
    #include <unistd.h>

// Macros
    #define SUCCESS 0
    #define ERROR 84

// Palindrome
int palindrome(const char *str);
int check_char(const char a, const char b);
int my_strlen(const char *str);

#endif /* !PALINDROME_H_ */
