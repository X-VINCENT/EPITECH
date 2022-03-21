/*
** EPITECH PROJECT, 2022
** Init Popup Menu for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void init_popup_menu(game_t *game)
{
    sfIntRect rect = init_rect(1250, 320, 650, 295);
    sfVector2f pos = init_pos(960, 520);
    sfVector2f origin = {325.00, 147.50};
    sfVector2f scale = init_scale(1, 1);

    game->assets->popup_menu = malloc(sizeof(popup_menu_t));
    game->assets->popup_menu->popup = create_sprite(
        "assets/pictures/buttons/buttons.png", rect, pos, scale);
    sfSprite_setOrigin(game->assets->popup_menu->popup, origin);
    game->assets->popup_menu->clock = sfClock_create();
    init_buttons_popup_menu(game);
}

void init_buttons_popup_menu(game_t *game)
{
    popup_menu_t *menu = game->assets->popup_menu;
    const char path[] = "assets/pictures/buttons/buttons.png";
    sfIntRect r_yes_off = init_rect(552, 0, 166, 55);
    sfIntRect r_yes_on = init_rect(745, 0, 166, 55);
    sfIntRect r_no_off = init_rect(552, 67, 166, 55);
    sfIntRect r_no_on = init_rect(745, 67, 166, 55);
    sfVector2f p_yes = {760.00, 600.00};
    sfVector2f p_no = {994.00, 600.00};
    sfVector2f scale = init_scale(1, 1);

    menu->yes_off = create_sprite(path, r_yes_off, p_yes, scale);
    menu->yes_on = create_sprite(path, r_yes_on, p_yes, scale);
    menu->no_off = create_sprite(path, r_no_off, p_no, scale);
    menu->no_on = create_sprite(path, r_no_on, p_no, scale);
}
