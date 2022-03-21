/*
** EPITECH PROJECT, 2021
** Main Function for FinalStumper
** File description:
** Xavier VINCENT - Nathan MOINARD
*/

#include <stdlib.h>
#include <unistd.h>
#include "include/my.h"
#include "include/rush3.h"

int main(void)
{
    char buff[BUFF_SIZE + 1];
    int offset = 0;
    int len = 0;

    while ((len = read(0, buff + offset, BUFF_SIZE - offset)) > 0) {
        offset += len;
    }
    buff[offset] = '\0';
    if (my_strcmp("", buff) == 0)
        return 84;
    if (len < 0)
        return 84;
    rush3(buff);
    return 0;
}
