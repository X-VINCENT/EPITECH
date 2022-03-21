/*
** EPITECH PROJECT, 2022
** Init Res Settings Menu for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void init_res_settings_menu(game_t *game)
{
    settings_menu_t *menu = game->assets->settings_menu;
    const char font[] = "assets/fonts/Samdan.ttf";
    sfVector2f pos = init_pos(1614, 597);

    menu->res = malloc(sizeof(sfText *) * 6);
    menu->res[0] = create_text(font, sfWhite, 22, "640x480");
    menu->res[1] = create_text(font, sfWhite, 22, "1280x720");
    menu->res[2] = create_text(font, sfWhite, 22, "1920x1080");
    menu->res[3] = create_text(font, sfWhite, 22, "2560x1440");
    menu->res[4] = create_text(font, sfWhite, 22, "3840x2160");
    menu->res[5] = NULL;
    for (int idx = 0; idx != 5; idx += 1) {
        sfText_setPosition(menu->res[idx], pos);
        sfText_setOrigin(menu->res[idx], (sfVector2f){
            sfText_getGlobalBounds(menu->res[idx]).width / 2,
            sfText_getGlobalBounds(menu->res[idx]).height / 2});
    }
    init_buttons_res_settings_menu(game);
}

void init_buttons_res_settings_menu(game_t *game)
{
    settings_menu_t *menu = game->assets->settings_menu;
    const char path[] = "assets/pictures/buttons/buttons.png";
    sfIntRect r_left = init_rect(151, 24, 28, 32);
    sfIntRect r_right = init_rect(202, 24, 32, 32);
    sfVector2f p_left = init_pos(1418, 588);
    sfVector2f p_right = init_pos(1780, 588);
    sfVector2f scale = {0.80, 0.80};

    menu->res_left = create_sprite(path, r_left, p_left, scale);
    menu->res_right = create_sprite(path, r_right, p_right, scale);
}
