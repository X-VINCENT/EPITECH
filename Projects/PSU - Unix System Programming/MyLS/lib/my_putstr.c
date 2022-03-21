/*
** EPITECH PROJECT, 2021
** my_putstr
** File description:
** Function my_putstr
*/

#include "my_ls.h"

void my_putstr(char const *str)
{
    for (int i = 0; str[i] != '\0'; i += 1)
        my_putchar(str[i]);
}
