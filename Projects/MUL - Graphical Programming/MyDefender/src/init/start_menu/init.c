/*
** EPITECH PROJECT, 2022
** Init Start Menu for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void init_start_menu(game_t *game)
{
    const char path[] = "assets/pictures/backgrounds/start_menu.png";
    sfIntRect rect = init_rect(0, 0, 1920, 1080);
    sfVector2f pos = init_pos(0, 0);
    sfVector2f scale = init_scale(1, 1);

    if (!game)
        return;
    game->assets->start_menu = malloc(sizeof(start_menu_t));
    game->assets->start_menu->bg = create_sprite(path, rect, pos, scale);
    game->assets->start_menu->music = create_music(
        "assets/audio/musics/start_menu.ogg");
    game->assets->start_menu->clock = sfClock_create();
    init_buttons_start_menu(game);
}

void init_buttons_start_menu(game_t *game)
{
    sfIntRect r_play = init_rect(0, 0, 57, 45);
    sfIntRect r_quit = init_rect(0, 0, 139, 112);
    sfVector2f p_play = init_pos(915, 908);
    sfVector2f p_quit = init_pos(1850, 1025);
    sfVector2f o_play = {28.50, 22.50};
    sfVector2f o_quit = {79.50, 56.00};
    sfVector2f s_play = {1.00, 1.00};
    sfVector2f s_quit = {0.50, 0.50};

    game->assets->start_menu->play = create_sprite(
        "assets/pictures/buttons/play.png", r_play, p_play, s_play);
    game->assets->start_menu->quit = create_sprite(
        "assets/pictures/buttons/quit.png", r_quit, p_quit, s_quit);
    sfSprite_setOrigin(game->assets->start_menu->play, o_play);
    sfSprite_setOrigin(game->assets->start_menu->quit, o_quit);
}
