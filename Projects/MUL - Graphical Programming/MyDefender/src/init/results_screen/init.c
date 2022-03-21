/*
** EPITECH PROJECT, 2022
** Init Results Screen for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void init_results_screen(game_t *game)
{
    game->assets->results_screen = malloc(sizeof(results_screen_t));
    game->assets->results_screen->clock = sfClock_create();
    init_backgrounds_results_screen(game);
    init_texts_results_screen(game);
    init_sounds_results_screen(game);
}

void init_backgrounds_results_screen(game_t *game)
{
    results_screen_t *screen = game->assets->results_screen;
    const char path_win[] = "assets/pictures/backgrounds/win.png";
    const char path_loose[] = "assets/pictures/backgrounds/loose.png";
    sfIntRect r_win = init_rect(0, 0, 653, 367);
    sfIntRect r_loose = init_rect(0, 0, 1920, 1080);
    sfVector2f pos = init_pos(0, 0);
    sfVector2f s_win = init_scale(3, 3);
    sfVector2f s_loose = init_scale(1, 1);

    screen->win_bg = create_sprite(path_win, r_win, pos, s_win);
    screen->loose_bg = create_sprite(path_loose, r_loose, pos, s_loose);
}

void init_texts_results_screen(game_t *game)
{
    results_screen_t *screen = game->assets->results_screen;
    const char font[] = "assets/fonts/Samdan.ttf";
    sfVector2f pos = {960, 900};

    screen->win_text = create_text(
        font, sfWhite, 80, "PRESS ENTER TO RETURN TO HOME MENU");
    sfText_setPosition(screen->win_text, pos);
    sfText_setOrigin(screen->win_text, (sfVector2f){
        sfText_getGlobalBounds(screen->win_text).width / 2,
        sfText_getGlobalBounds(screen->win_text).height / 2});
}

void init_sounds_results_screen(game_t *game)
{
    results_screen_t *screen = game->assets->results_screen;

    screen->win_sound = create_sound("assets/audio/sounds/victory.ogg");
    screen->loose_sound = create_sound("assets/audio/sounds/game_over.ogg");
}
