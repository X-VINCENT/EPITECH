/*
** EPITECH PROJECT, 2022
** Engine for My Sokoban
** File description:
** Xavier VINCENT
*/

#include "my_sokoban.h"

int engine(data_t *data)
{
    int input = 0;

    while (input != 'q') {
        clear();
        if (check_input(data, input) == ERROR)
            return ERROR;
        move_player(data, input);
        if (win_condition(data) == ERROR)
            return ERROR;
        if (loose_condition(data) == ERROR)
            return ERROR;
        if (display_map(data) == ERROR)
            return ERROR;
        input = getch();
        refresh();
    }
    endwin();
}

int win_condition(data_t *data)
{
    int nb_done = 0;

    if (!data)
        return ERROR;
    for (int idx = 0; data->objectives[idx] != NULL; idx += 1) {
        for (int idx2 = 0; data->boxes[idx2] != NULL; idx2 += 1) {
            nb_done += (data->objectives[idx]->x == data->boxes[idx2]->x &&
                data->objectives[idx]->y == data->boxes[idx2]->y) ? 1 : 0;
        }
    }
    if (nb_done == data->map_data->nb_objectives) {
        usleep(2000);
        endwin();
        destroy_data(data);
        exit(SUCCESS);
    }
    return SUCCESS;
}

int loose_condition(data_t *data)
{
    int nb_blocked_boxes = 0;

    if (!data)
        return ERROR;
    if ((nb_blocked_boxes = get_nb_blocked_boxes(data)) == -1)
        return ERROR;
    if (data->map_data->nb_boxes <= nb_blocked_boxes) {
        usleep(2000);
        endwin();
        destroy_data(data);
        exit(1);
    }
    return SUCCESS;
}

int check_input(data_t *data, int input)
{
    if (!data)
        return ERROR;
    switch (input) {
        case ' ':
            reload_data(data);
            break;
        default:
            break;
    }
    return SUCCESS;
}

void reload_data(data_t *data)
{
    if (!data)
        return;
    free(data->map_data->map);
    for (int idx = 0; data->boxes[idx] != NULL; idx += 1)
        free(data->boxes[idx]);
    free(data->boxes);
    for (int idx = 0; data->objectives[idx] != NULL; idx += 1)
        free(data->objectives[idx]);
    free(data->objectives);
    data->map_data->map = backup_map(data->map_data->backup_map);
    get_player_position(data->map_data->map, data->player);
    init_boxes(data);
    init_objectives(data);
}
