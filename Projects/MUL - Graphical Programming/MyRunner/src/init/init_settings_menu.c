/*
** EPITECH PROJECT, 2022
** Init Settings Menu for My Runner
** File description:
** Xavier VINCENT
*/

#include "my_runner.h"

void init_settings_menu(game_t *game)
{
    sfIntRect *rect = init_rect(0, 0, 1920, 1080);
    sfVector2f pos = {0.00, 0.00};
    sfVector2f scale = {1.00, 1.00};

    if (!game)
        return;
    game->assets->settings_menu = malloc(sizeof(settings_menu_t));
    game->assets->settings_menu->bg = create_sprite(
        "assets/pictures/background/settings.png", rect, pos, scale);
    game->assets->settings_menu->clock = sfClock_create();
    init_text_settings_menu(game);
    init_buttons_settings_menu(game);
}

void init_text_settings_menu(game_t *game)
{
    const char font[] = "assets/fonts/GreatVibes-Regular.otf";
    settings_menu_t *settings_menu = game->assets->settings_menu;
    sfVector2f pos_settings = {860.00, 20.00};
    sfVector2f pos_res = {385.00, 200.00};
    sfVector2f pos_fps = {1340.00, 200.00};

    if (!game)
        return;
    settings_menu->text_settings = create_text(font, sfBlack, 64, "Settings");
    sfText_setPosition(settings_menu->text_settings, pos_settings);
    sfText_setStyle(settings_menu->text_settings, sfTextBold);
    settings_menu->text_res = create_text(font, sfBlack, 48, "Resolution");
    sfText_setPosition(settings_menu->text_res, pos_res);
    settings_menu->text_fps = create_text(font, sfBlack, 48, "Refresh Rate");
    sfText_setPosition(settings_menu->text_fps, pos_fps);
}

void init_buttons_settings_menu(game_t *game)
{
    const char path[] = "assets/pictures/buttons/settings.png";
    sfIntRect *rect = init_rect(439, 771, 335, 132);
    sfVector2f pos = {960.00, 950.00};
    sfVector2f origin = {167.50, 66.00};
    sfVector2f scale = {1.00, 1.00};

    if (!game)
        return;
    game->assets->settings_menu->back = create_sprite(path, rect, pos, scale);
    sfSprite_setOrigin(game->assets->settings_menu->back, origin);
    sfSprite_setPosition(game->assets->settings_menu->back, pos);
    init_res_buttons(game);
    init_fps_buttons(game);
}

void init_res_buttons(game_t *game)
{
    const char path[] = "assets/pictures/buttons/settings.png";
    settings_menu_t *settings_menu = game->assets->settings_menu;
    sfIntRect *rect_res1 = init_rect(161, 120, 335, 132);
    sfIntRect *rect_res2 = init_rect(161, 331, 335, 132);
    sfIntRect *rect_res3 = init_rect(165, 560, 335, 132);
    sfVector2f pos_res1 = {460.00, 366.00};
    sfVector2f pos_res2 = {460.00, 566.00};
    sfVector2f pos_res3 = {460.00, 766.00};
    sfVector2f origin = {167.50, 66.00};
    sfVector2f scale = {1.00, 1.00};

    settings_menu->res_1 = create_sprite(path, rect_res1, pos_res1, scale);
    settings_menu->res_2 = create_sprite(path, rect_res2, pos_res2, scale);
    settings_menu->res_3 = create_sprite(path, rect_res3, pos_res3, scale);
    sfSprite_setOrigin(settings_menu->res_1, origin);
    sfSprite_setOrigin(settings_menu->res_2, origin);
    sfSprite_setOrigin(settings_menu->res_3, origin);
    sfSprite_setPosition(settings_menu->res_1, pos_res1);
    sfSprite_setPosition(settings_menu->res_2, pos_res2);
    sfSprite_setPosition(settings_menu->res_3, pos_res3);
}

void init_fps_buttons(game_t *game)
{
    const char path[] = "assets/pictures/buttons/settings.png";
    settings_menu_t *settings_menu = game->assets->settings_menu;
    sfIntRect *rect_fps1 = init_rect(709, 119, 335, 132);
    sfIntRect *rect_fps2 = init_rect(714, 329, 335, 132);
    sfIntRect *rect_fps3 = init_rect(711, 555, 335, 132);
    sfVector2f pos_fps1 = {1460.00, 366.00};
    sfVector2f pos_fps2 = {1460.00, 566.00};
    sfVector2f pos_fps3 = {1460.00, 766.00};
    sfVector2f origin = {167.50, 66.00};
    sfVector2f scale = {1.00, 1.00};

    settings_menu->fps_1 = create_sprite(path, rect_fps1, pos_fps1, scale);
    settings_menu->fps_2 = create_sprite(path, rect_fps2, pos_fps2, scale);
    settings_menu->fps_3 = create_sprite(path, rect_fps3, pos_fps3, scale);
    sfSprite_setOrigin(settings_menu->fps_1, origin);
    sfSprite_setOrigin(settings_menu->fps_2, origin);
    sfSprite_setOrigin(settings_menu->fps_3, origin);
    sfSprite_setPosition(settings_menu->fps_1, pos_fps1);
    sfSprite_setPosition(settings_menu->fps_2, pos_fps2);
    sfSprite_setPosition(settings_menu->fps_3, pos_fps3);
}
