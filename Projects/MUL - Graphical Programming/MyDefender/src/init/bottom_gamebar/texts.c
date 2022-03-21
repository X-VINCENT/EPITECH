/*
** EPITECH PROJECT, 2022
** Init Texts Bottom Gamebar for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void init_texts_bottom_gamebar(game_t *game)
{
    bottom_gamebar_t *bar = game->assets->bottom_gamebar;
    const char font[] = "assets/fonts/BurbankBigRegular-Bold.otf";
    sfVector2f pos = {134, 1034};

    bar->suns_available = create_text(font, sfBlack, 32, "0");
    sfText_setPosition(bar->suns_available, pos);
    sfText_setOrigin(bar->suns_available, (sfVector2f){
        sfText_getGlobalBounds(bar->suns_available).width / 2,
        sfText_getGlobalBounds(bar->suns_available).height / 2});
    init_plants_texts_bottom_gamebar(game);
}

void init_plants_texts_bottom_gamebar(game_t *game)
{
    bottom_gamebar_t *bar = game->assets->bottom_gamebar;
    const char font[] = "assets/fonts/BurbankBigRegular-Bold.otf";
    sfVector2f pos = {356, 1026};

    bar->plants_price = malloc(sizeof(sfText *) * 7);
    bar->plants_price[0] = create_text(font, sfBlack, 24, "100");
    bar->plants_price[1] = create_text(font, sfBlack, 24, "50");
    bar->plants_price[2] = create_text(font, sfBlack, 24, "150");
    bar->plants_price[3] = create_text(font, sfBlack, 24, "50");
    bar->plants_price[4] = create_text(font, sfBlack, 24, "100");
    bar->plants_price[5] = create_text(font, sfBlack, 24, "100");
    bar->plants_price[6] = NULL;
    for (int idx = 0; idx != 6; idx += 1) {
        sfText_setPosition(bar->plants_price[idx], pos);
        sfText_setOrigin(bar->plants_price[idx], (sfVector2f){
            sfText_getGlobalBounds(bar->plants_price[idx]).width / 2,
            sfText_getGlobalBounds(bar->plants_price[idx]).height / 2});
        pos.x += 160;
    }
}
