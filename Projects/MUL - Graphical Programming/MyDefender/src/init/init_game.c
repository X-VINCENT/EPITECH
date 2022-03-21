/*
** EPITECH PROJECT, 2022
** Init Game Structure for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

game_t *init_game(void)
{
    game_t *game = NULL;

    if (!(game = malloc(sizeof(game_t))))
        return NULL;
    game->stage = START_STAGE;
    game->last_stage = START_STAGE;
    game->popup = OFF_POPUP;
    game->fps = 60;
    game->res = 1080;
    game->speed = 1;
    game->trans_selected = 0;
    game->is_plant_selected = 0;
    if (init_maps(game) == ERROR)
        return NULL;
    init_window(game);
    init_event(game);
    init_assets(game);
    init_stats(game);
    return game;
}

void init_window(game_t *game)
{
    game->window = create_window("My Defender",
        game->res * 16 / 9, game->res);
    sfRenderWindow_setFramerateLimit(game->window, game->fps);
    sfRenderWindow_setMouseCursorVisible(game->window, sfFalse);
    set_icon_window(game->window, "assets/pictures/icons/window_icon.png");
    sfRenderWindow_setKeyRepeatEnabled(game->window, sfFalse);
}

void init_event(game_t *game)
{
    event_t *event = NULL;

    if (!game)
        return;
    game->event = malloc(sizeof(event_t));
    game->event->event = malloc(sizeof(sfEvent));
    game->event->click = create_sound("assets/audio/sounds/shovel.ogg");
}

int init_maps(game_t *game)
{
    if (!game)
        return ERROR;
    game->maps = malloc(sizeof(maps_t));
    if (!(game->maps->map1 = init_map("assets/maps/map1")))
        return ERROR;
    game->maps->map1->zombie_death = create_sound(
        "assets/audio/sounds/zombie.ogg");
    init_sun(game);
    init_infos(game);
    game->maps->michael_music = create_music(
        "assets/audio/musics/michael.ogg");
    init_texts(game);
    game->maps->clock_wave_text = sfClock_create();
    game->maps->money = START_MONEY;
    return SUCCESS;
}
