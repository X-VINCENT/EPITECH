/*
** EPITECH PROJECT, 2021
** Main for Palindrome
** File description:
** Xavier VINCENT
*/

#include "palindrome.h"

int main(int argc, char **argv)
{
    if (!argv)
        return ERROR;
    if (argc >= 2 && argv[1][0] == '-' && argv[1][1] == 'h') {
        write(1, "USAGE\n    ./palindrome [-h] your_word\n", 38);
        return SUCCESS;
    }
    if (argc < 2) {
        write(2, "Error: missing arguments.\n", 26);
        return ERROR;
    }
    if (argc > 2) {
        write(2, "Error: too much arguments.\n", 27);
        return ERROR;
    }
    if (palindrome(argv[1]) == ERROR)
        return ERROR;
    return SUCCESS;
}
