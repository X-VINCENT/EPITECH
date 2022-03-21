/*
** EPITECH PROJECT, 2022
** Palindrome for Palindrome
** File description:
** Xavier VINCENT
*/

#include "palindrome.h"

int palindrome(const char *str)
{
    int i = 0;
    int j = 0;

    if (!str)
        return ERROR;
    j = my_strlen(str) - 1;
    while (i < (my_strlen(str) / 2 + 1)) {
        if (check_char(str[i], str[j]) == 0) {
            write(1, "not a palindrome.\n", 18);
            return SUCCESS;
        }
        i += 1;
        j -= 1;
    }
    write(1, "palindrome!\n", 12);
    return SUCCESS;
}

int check_char(const char a, const char b)
{
    if (a == b)
        return 1;
    if (a >= 'A' && a <= 'Z' && (a + 32) == b)
        return 1;
    if (a >= 'a' && a <= 'z' && (a - 32) == b)
        return 1;
    return 0;
}

int my_strlen(const char *str)
{
    int len = 0;

    if (!str)
        return -1;
    while (str[len] != '\0')
        len += 1;
    return len;
}
