/*
** EPITECH PROJECT, 2022
** Init FPS Settings Menu for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void init_fps_settings_menu(game_t *game)
{
    settings_menu_t *menu = game->assets->settings_menu;
    const char font[] = "assets/fonts/Samdan.ttf";
    sfVector2f pos = init_pos(1614, 551);

    menu->fps = malloc(sizeof(sfText *) * 6);
    menu->fps[0] = create_text(font, sfWhite, 22, "30");
    menu->fps[1] = create_text(font, sfWhite, 22, "60");
    menu->fps[2] = create_text(font, sfWhite, 22, "144");
    menu->fps[3] = create_text(font, sfWhite, 22, "240");
    menu->fps[4] = create_text(font, sfWhite, 22, "Unlimited");
    menu->fps[5] = NULL;
    for (int idx = 0; idx != 5; idx += 1) {
        sfText_setPosition(menu->fps[idx], pos);
        sfText_setOrigin(menu->fps[idx], (sfVector2f){
            sfText_getGlobalBounds(menu->fps[idx]).width / 2,
            sfText_getGlobalBounds(menu->fps[idx]).height / 2});
    }
    init_buttons_fps_settings_menu(game);
}

void init_buttons_fps_settings_menu(game_t *game)
{
    settings_menu_t *menu = game->assets->settings_menu;
    const char path[] = "assets/pictures/buttons/buttons.png";
    sfIntRect r_left = init_rect(151, 24, 28, 32);
    sfIntRect r_right = init_rect(202, 24, 32, 32);
    sfVector2f p_left = init_pos(1418, 540);
    sfVector2f p_right = init_pos(1780, 540);
    sfVector2f scale = {0.80, 0.80};

    menu->fps_left = create_sprite(path, r_left, p_left, scale);
    menu->fps_right = create_sprite(path, r_right, p_right, scale);
}
