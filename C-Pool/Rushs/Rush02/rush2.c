/*
** EPITECH PROJECT, 2021
** rush02
** File description:
** rush02
*/

#include "include/my.h"

int print_frequencies(int result_int, int result_dec)
{
    my_putstr(" (");
    my_put_nbr(result_int);
    my_putchar('.');
    if ((result_dec % 100) == 0)
        my_putchar('0');
    else
        my_put_nbr(result_dec % 100);
    my_putstr("%)");
    return 0;
}

int my_put_frequencies(char const *str, int nb_letter)
{
    int i = 0;
    int str_length = 0;
    int result_int = 0;
    int result_dec = 0;

    while (str[i] != '\0') {
        if ((str[i] >= 'a' && str[i] <= 'z')
            || (str[i] >= 'A' && str[i] <= 'Z'))
            str_length += 1;
        i += 1;
    }
    result_int = (nb_letter * 100 / str_length);
    result_dec = ((nb_letter * 10000) / str_length);
    print_frequencies(result_int, result_dec);
    return 0;
}

int get_nb_of_letters(char const *str, char letter)
{
    int i = 0;
    int nb_letter = 0;

    while (str[i] != '\0') {
        if (str[i] == letter || str[i] == letter - 32 )
            nb_letter += 1;
        i += 1;
    }
    my_putchar(letter);
    my_putchar(':');
    if (nb_letter == 0) {
        my_putchar('0');
        my_putstr(" (0.00%)");
        my_putchar('\n');
        return 0;
    }
    my_put_nbr(nb_letter);
    my_put_frequencies(str, nb_letter);
    my_putchar('\n');
    return 0;
}

int step1(int argc, char **argv)
{
    int i = 2;

    if (argc <= 2) {
        my_puterror("Give at least a string and a letter\n");
        return 84;
    }
    my_strupcase(argv[1]);
    while (i < argc) {
        char letter = argv[i][0];
        if (!((letter >= 'a' && letter <= 'z')
            || (letter >= 'A' && letter <= 'Z'))) {
            my_puterror("One of the given argument is not a letter\n");
            return 84;
        }
        get_nb_of_letters(argv[1], letter);
        i += 1;
    }
    return 0;
}
