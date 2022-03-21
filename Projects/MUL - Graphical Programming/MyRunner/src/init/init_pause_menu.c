/*
** EPITECH PROJECT, 2021
** Init Pause Menu for My Runner
** File description:
** Xavie VINCENT
*/

#include "my_runner.h"

void init_pause_menu(game_t *game)
{
    sfIntRect *rect = init_rect(0, 0, 1920, 1080);
    sfVector2f pos = {0.00, 0.00};
    sfVector2f scale = {1.00, 1.00};

    if (!game)
        return;
    game->assets->pause_menu = malloc(sizeof(pause_menu_t));
    game->assets->pause_menu->bg = create_sprite(
        "assets/pictures/background/bg.png", rect, pos, scale);
    game->assets->pause_menu->open_pause_menu = create_sound(
        "assets/sounds/open_pause_menu.ogg");
    game->assets->pause_menu->clock = sfClock_create();
    init_text_pause_menu(game);
    init_buttons_pause_menu(game->assets->pause_menu);
    init_buttons_2_pause_menu(game->assets->pause_menu);
    free(rect);
}

void init_text_pause_menu(game_t *game)
{
    const char font[] = "assets/fonts/GreatVibes-Regular.otf";
    pause_menu_t *pause_menu = game->assets->pause_menu;
    sfVector2f pos = {1700.00, 1000.00};

    if (!game)
        return;
    pause_menu->pause = create_text(
        "assets/fonts/SourceSansPro-Regular.otf", sfBlack, 116, "PAUSE");
    setting_up_pause_pause_menu(pause_menu);
    pause_menu->score = create_text(font, sfBlack, 32, "0");
    sfText_setStyle(pause_menu->score, sfTextBold);
    pause_menu->creator = create_text(font, sfBlack, 32, "Xavier Vincent");
    sfText_setPosition(pause_menu->creator, pos);
    sfText_setStyle(pause_menu->creator, sfTextBold);
}

void setting_up_pause_pause_menu(pause_menu_t *pause_menu)
{
    sfFloatRect rect = sfText_getLocalBounds(pause_menu->pause);
    sfVector2f origin = {rect.left + rect.width / 2.00,
        rect.top + rect.height / 2.00};
    sfVector2f pos = {960.00, 150.00};

    if (!pause_menu)
        return;
    sfText_setOrigin(pause_menu->pause, origin);
    sfText_setPosition(pause_menu->pause, pos);
    sfText_setStyle(pause_menu->pause, sfTextBold);
}

void init_buttons_pause_menu(pause_menu_t *pause_menu)
{
    const char path[] = "assets/pictures/buttons/buttons.png";
    sfIntRect *rect_play = init_rect(159, 102, 335, 132);
    sfIntRect *rect_quit = init_rect(159, 958, 335, 132);
    sfIntRect *rect_rs = init_rect(883, 801, 153, 124);
    sfVector2f pos_play = {960.00, 550.00};
    sfVector2f pos_quit = {960.00, 750.00};
    sfVector2f pos_rs = {883.50, 900.00};
    sfVector2f origin = {167.50, 66.00};
    sfVector2f scale = {1.00, 1.00};

    if (!pause_menu)
        return;
    pause_menu->play = create_sprite(path, rect_play, pos_play, scale);
    pause_menu->quit = create_sprite(path, rect_quit, pos_quit, scale);
    pause_menu->restart = create_sprite(path, rect_rs, pos_rs, scale);
    sfSprite_setOrigin(pause_menu->play, origin);
    sfSprite_setOrigin(pause_menu->quit, origin);
    free(rect_play);
    free(rect_quit);
    free(rect_rs);
}

void init_buttons_2_pause_menu(pause_menu_t *pause_menu)
{
    const char path[] = "assets/pictures/buttons/buttons.png";
    sfIntRect *rect_s = init_rect(641, 620, 153, 124);
    sfIntRect *rect_mute = init_rect(641, 447, 153, 124);
    sfIntRect *rect_unmute = init_rect(887, 452, 153, 124);
    sfVector2f pos_s = {10.00, 1070.00};
    sfVector2f pos_mute = {1910.00, 10.00};
    sfVector2f origin_s = {0.00, 124.00};
    sfVector2f origin_mute = {153.00, 0.00};
    sfVector2f scale = {0.50, 0.50};

    pause_menu->settings = create_sprite(path, rect_s, pos_s, scale);
    pause_menu->mute = create_sprite(path, rect_mute, pos_mute, scale);
    pause_menu->unmute = create_sprite(path, rect_unmute, pos_mute, scale);
    sfSprite_setOrigin(pause_menu->settings, origin_s);
    sfSprite_setOrigin(pause_menu->mute, origin_mute);
    sfSprite_setOrigin(pause_menu->unmute, origin_mute);
    free(rect_s);
    free(rect_mute);
    free(rect_unmute);
}
