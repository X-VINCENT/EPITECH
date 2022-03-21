/*
** EPITECH PROJECT, 2022
** Init Texts for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void init_texts(game_t *game)
{
    const char font[] = "assets/fonts/Samdan.ttf";
    sfVector2f pos = {960, 150};

    game->maps->wave_text = create_text(font, sfBlack, 160, "WAVE 0");
    sfText_setStyle(game->maps->wave_text, sfTextBold);
    sfText_setPosition(game->maps->wave_text, pos);
    sfText_setOrigin(game->maps->wave_text, (sfVector2f){
        sfText_getGlobalBounds(game->maps->wave_text).width / 2,
        sfText_getGlobalBounds(game->maps->wave_text).height / 2});
}
