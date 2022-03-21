/*
** EPITECH PROJECT, 2021
** Init Game Structure fo My Runner
** File description:
** Xavier VINCENT
*/

#include "my_runner.h"

game_t *init_game(void)
{
    game_t *game = malloc(sizeof(game_t));

    game->assets = malloc(sizeof(assets_t));
    game->stage = 0;
    init_window(game);
    game->event = init_event();
    game->score = init_score();
    init_home_menu(game);
    init_runner(game);
    init_pause_menu(game);
    init_settings_menu(game);
    init_results_menu(game);
    return game;
}

void init_window(game_t *game)
{
    sfIntRect *cursor_rect = init_rect(0, 0, 64, 64);
    sfVector2f cursor_pos = {0.00, 0.00};
    sfVector2f cursor_scale = {0.50, 0.50};

    if (!game)
        return;
    game->clock_fps = sfClock_create();
    game->window = create_window("My Runner", 1920, 1080);
    sfRenderWindow_setFramerateLimit(game->window, 0);
    sfRenderWindow_setMouseCursorVisible(game->window, sfFalse);
    set_icon_window(game->window, "assets/pictures/icons/window_icon.png");
    game->assets->cursor = create_sprite(
        "assets/pictures/icons/cursor_icon.png",
        cursor_rect, cursor_pos, cursor_scale);
    free(cursor_rect);
}

event_t *init_event(void)
{
    event_t *event = malloc(sizeof(event_t));

    event->event = malloc(sizeof(sfEvent));
    event->clock = sfClock_create();
    event->click_button = create_sound("assets/sounds/click_button.ogg");
    return event;
}

score_t *init_score(void)
{
    score_t *score = malloc(sizeof(score_t));
    sfIntRect *r = init_rect(0, 0, 200, 176);
    sfVector2f p = {817.00, -28.00};
    sfVector2f s = {1.50, 1.50};

    score->sign = create_sprite("assets/pictures/objects/sign.png", r, p, s);
    score->best_score = get_best_score_from_file();
    score->score = 0;
    score->text = create_text(
        "assets/fonts/GreatVibes-Regular.otf", sfBlack, 64,
        my_put_nbr_in_str(score->score));
    sfText_setStyle(score->text, sfTextBold);
    score->clock = sfClock_create();
    free(r);
    return score;
}
