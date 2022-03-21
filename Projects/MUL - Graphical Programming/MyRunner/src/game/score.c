/*
** EPITECH PROJECT, 2022
** Score for My Runner
** File description:
** Xavier VINCENT
*/

#include "my_runner.h"

void save_best_score(int score)
{
    int fd = open(".save", O_RDONLY);
    int fd2 = open(".save", O_WRONLY);
    char *last_best_score_str = malloc(sizeof(char) * 10);
    char *score_str = my_put_nbr_in_str(score);
    int last_best_score = 0;

    if (fd == -1)
        return;
    read(fd, last_best_score_str, 10);
    last_best_score = my_getnbr(last_best_score_str);
    if (last_best_score >= score) {
        free(last_best_score_str);
        free(score_str);
        close(fd);
        return;
    }
    free(last_best_score_str);
    write(fd2, score_str, my_getnbsize(score));
    free(score_str);
    close(fd2);
}

int get_best_score_from_file(void)
{
    int fd = open(".save", O_RDONLY);
    int best_score = 0;
    char *best_score_str = malloc(sizeof(char) * 10);

    if (fd == -1)
        return 0;
    read(fd, best_score_str, 10);
    best_score = my_getnbr(best_score_str);
    free(best_score_str);
    return best_score;
}
