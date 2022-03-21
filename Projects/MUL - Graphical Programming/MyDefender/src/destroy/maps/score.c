/*
** EPITECH PROJECT, 2022
** Destroy Score Maps for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void destroy_score(score_t *score)
{
    destroy_text(score->score);
    sfClock_destroy(score->clock);
    free(score);
}
