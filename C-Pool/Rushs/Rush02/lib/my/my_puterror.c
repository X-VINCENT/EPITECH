/*
** EPITECH PROJECT, 2021
** my_puterror
** File description:
** Function that prints a str on the error output
*/

void my_putchar(char c);

int my_puterror(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        write(2, &str[i], 1);
        i++;
    }
}
