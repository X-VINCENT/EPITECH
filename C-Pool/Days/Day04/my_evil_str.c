/*
** EPITECH PROJECT, 2021
** my_evil_str
** File description:
** Function my_evil_str
*/

int my_putstr_1(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
    my_putchar('\n');
}

int my_strlen_1(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return i;
}

char *my_evil_str(char *str)
{
    int i = 0;
    int j = my_strlen_1(str) - 1;
    int a;

    while (i < j) {
        a = str[i];
        str[i] = str[j];
        str[j] = a;
        i++;
        j--;
    }
    return &str[0];
}
