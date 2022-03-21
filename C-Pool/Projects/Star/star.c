/*
** EPITECH PROJECT, 2021
** Star
** File description:
** Program that display stars in different size according to input number
*/

void star_1(void);
void first_last_asterix(int n);
void first_branch(int branch_size);
void second_branch(int branch_size);
void middle_line(int branch_size);
void third_branch(int branch_size);
void fourth_branch(int branch_size);

void star(unsigned int size)
{
    if (size == 0)
        return;
    if (size == 1) {
        star_1();
    } else {
        first_last_asterix(size);
        first_branch(size);
        full_line(size);
        second_branch(size);
        middle_line(size);
        third_branch(size);
        full_line(size);
        fourth_branch(size);
        first_last_asterix(size);
    }
}
