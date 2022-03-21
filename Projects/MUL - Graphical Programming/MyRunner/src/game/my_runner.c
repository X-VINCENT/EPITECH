/*
** EPITECH PROJECT, 2021
** My Runner File for My Runner
** File description:
** Xavier VINCENT
*/

#include "my_runner.h"

int my_runner(const char *map_path)
{
    game_t *game = init_game();

    if (!game || !map_path)
        return ERROR;
    init_map(game, map_path);
    while (sfRenderWindow_isOpen(game->window)) {
        event(game);
        sfRenderWindow_clear(game->window, sfBlack);
        select_game_stage(game);
        select_game_stage_2(game);
        display_cursor(game);
        sfRenderWindow_display(game->window);
    }
    save_best_score(game->score->score);
    destroy_all(game);
    return SUCCESS;
}

void display_cursor(game_t *game)
{
    sfVector2i mouse_pos = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse_pos, NULL);

    if (!game)
        return;
    sfSprite_setPosition(game->assets->cursor, coords);
    sfRenderWindow_drawSprite(game->window, game->assets->cursor, NULL);
}

void select_game_stage(game_t *game)
{
    if (!game)
        return;
    switch (game->stage) {
        case 0:
            display_home_menu(game);
            play_music(game->assets->home_menu->music);
            break;
        case 1:
            check_contact(game);
            display(game);
            play_music(game->assets->game_music);
            break;
        case 2:
            display_pause_menu(game);
            break;
        default:
            break;
    }
}

void select_game_stage_2(game_t *game)
{
    if (!game)
        return;
    switch (game->stage) {
        case 3:
            display_settings_menu(game);
            break;
        case 4:
            edit_text_results_menu(game);
            display_results_menu(game);
            break;
        default:
            break;
    }
}
