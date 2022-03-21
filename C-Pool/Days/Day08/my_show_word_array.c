/*
** EPITECH PROJECT, 2021
** my_show_word_array
** File description:
** Function my_show_word_array
*/

char *my_putstr(char *str);
void my_putchar(char c);

int my_show_word_array(char * const *tab)
{
    int i = 0;

    while (tab[i] != 0) {
        my_putstr(tab[i]);
        my_putchar('\n');
        i += 1;
    }
}
