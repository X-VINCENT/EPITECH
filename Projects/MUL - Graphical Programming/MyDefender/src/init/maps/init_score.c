/*
** EPITECH PROJECT, 2022
** Init Score Map for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void init_score_map(map_t *map)
{
    const char font[] = "assets/fonts/BurbankBigRegular-Bold.otf";
    sfVector2f pos_text = init_pos(1850, 30);

    map->score = malloc(sizeof(score_t));
    map->score->score = create_text(font, sfWhite, 48, "0");
    sfText_setPosition(map->score->score, pos_text);
    map->score->clock = sfClock_create();
}
