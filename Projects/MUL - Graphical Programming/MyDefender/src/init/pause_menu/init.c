/*
** EPITECH PROJECT, 2022
** Init Pause Menu for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void init_pause_menu(game_t *game)
{
    const char path[] = "assets/pictures/backgrounds/pause_menu.png";
    sfIntRect rect = init_rect(0, 0, 1920, 1080);
    sfVector2f pos = init_pos(0, 0);
    sfVector2f scale = init_scale(1, 1);

    game->assets->pause_menu = malloc(sizeof(pause_menu_t));
    game->assets->pause_menu->bg = create_sprite(path, rect, pos, scale);
    game->assets->pause_menu->buttons_status = malloc(sizeof(int) * 4);
    game->assets->pause_menu->clock = sfClock_create();
    init_buttons_off_pause_menu(game);
    init_buttons_on_pause_menu(game);
}

void init_buttons_off_pause_menu(game_t *game)
{
    pause_menu_t *menu = game->assets->pause_menu;
    const char path[] = "assets/pictures/buttons/buttons.png";
    sfIntRect rect = init_rect(538, 1106, 491, 61);
    sfVector2f pos = init_pos(24 + rect.width / 2, 134 + rect.height / 2);
    sfVector2f origin = {rect.width / 2, rect.height / 2};
    sfVector2f scale = init_scale(1, 1);

    menu->buttons_off = malloc(sizeof(sfSprite *) * 4);
    for (int idx  = 0; idx != 3; idx += 1) {
        menu->buttons_off[idx] = create_sprite(path, rect, pos, scale);
        sfSprite_setOrigin(menu->buttons_off[idx], origin);
        rect.top += 64;
        pos.y += 78;
    }
    menu->buttons_off[3] = NULL;
}

void init_buttons_on_pause_menu(game_t *game)
{
    pause_menu_t *menu = game->assets->pause_menu;
    const char path[] = "assets/pictures/buttons/buttons.png";
    sfIntRect rect = init_rect(0, 1108, 491, 61);
    sfVector2f pos = init_pos(24 + rect.width / 2, 134 + rect.height / 2);
    sfVector2f origin = {rect.width / 2, rect.height / 2};
    sfVector2f scale = init_scale(1, 1);

    menu->buttons_on = malloc(sizeof(sfSprite *) * 4);
    for (int idx  = 0; idx != 3; idx += 1) {
        menu->buttons_on[idx] = create_sprite(path, rect, pos, scale);
        sfSprite_setOrigin(menu->buttons_on[idx], origin);
        rect.top += 64;
        pos.y += 78;
    }
    menu->buttons_on[3] = NULL;
}
