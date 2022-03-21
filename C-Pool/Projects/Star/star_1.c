/*
** EPITECH PROJECT, 2021
** star_1
** File description:
** Function that displays a size 1 star
*/

void my_putchar(char c);
int my_putstr(char const *str);

void star_1(void)
{
    char lines_1_5[5] = "   *";
    char lines_2_4[8] = "*** ***";
    char line_3[7] = " *   *";

    my_putstr(lines_1_5);
    my_putchar('\n');
    my_putstr(lines_2_4);
    my_putchar('\n');
    my_putstr(line_3);
    my_putchar('\n');
    my_putstr(lines_2_4);
    my_putchar('\n');
    my_putstr(lines_1_5);
    my_putchar('\n');
}
