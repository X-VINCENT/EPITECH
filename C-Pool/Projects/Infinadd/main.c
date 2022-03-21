/*
** EPITECH PROJECT, 2021
** Main
** File description:
** Main function for infinadd
*/

#include <stdlib.h>
#include "include/my.h"

int infinadd(char *first_str, char *second_str);
int test_errors(char *first_str, char *second_str);

int main(int argc, char **argv)
{
    char *first_str;
    char *second_str;

    if (argc != 3) {
        my_puterror("Incorrect number of arguments");
        return 84;
    }
    if (test_errors(argv[1], argv[2]) == 84)
        return 84;
    else {
        first_str = malloc(sizeof(char) * my_strlen(argv[1]) + 1);
        second_str = malloc(sizeof(char) * my_strlen(argv[2]) + 1);
        my_strcpy(first_str, argv[1]);
        my_strcpy(second_str, argv[2]);
        infinadd(first_str, second_str);
    }
    return 0;
}
