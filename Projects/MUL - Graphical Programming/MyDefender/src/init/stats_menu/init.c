/*
** EPITECH PROJECT, 2022
** Init Stats Menu for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void init_stats_menu(game_t *game)
{
    const char path[] = "assets/pictures/backgrounds/stats_menu.png";
    sfIntRect rect = init_rect(0, 0, 1920, 1080);
    sfVector2f pos = init_pos(0, 0);
    sfVector2f scale = init_scale(1, 1);

    game->assets->stats_menu = malloc(sizeof(start_menu_t));
    game->assets->stats_menu->bg = create_sprite(path, rect, pos, scale);
    init_texts_stats_menu(game);
    init_texts_stats_menu_2(game);
}

void init_texts_stats_menu(game_t *game)
{
    const char font[] = "assets/fonts/BurbankSmall-Bold.otf";
    stats_menu_t *menu = game->assets->stats_menu;
    sfVector2f pos_time_played = init_pos(1660, 324);
    sfVector2f pos_best_score = init_pos(1660, 368);
    sfVector2f pos_damage_caused = init_pos(1660, 412);

    menu->text_time_played = create_text(font, sfWhite, 24, "__:__");
    sfText_setPosition(menu->text_time_played, pos_time_played);
    menu->text_best_score = create_text(font, sfWhite, 24, "0");
    sfText_setPosition(menu->text_best_score, pos_best_score);
    menu->text_damage_caused = create_text(font, sfWhite, 24, "0");
    sfText_setPosition(menu->text_damage_caused, pos_damage_caused);
}

void init_texts_stats_menu_2(game_t *game)
{
    const char font[] = "assets/fonts/BurbankSmall-Bold.otf";
    stats_menu_t *menu = game->assets->stats_menu;
    sfVector2f pos_zombies_killed = init_pos(1660, 456);
    sfVector2f pos_suns_picked_up = init_pos(1660, 500);
    sfVector2f pos_plants_planted = init_pos(1660, 544);

    menu->text_zombies_killed = create_text(font, sfWhite, 24, "0");
    sfText_setPosition(menu->text_zombies_killed, pos_zombies_killed);
    menu->text_suns_picked_up = create_text(font, sfWhite, 24, "0");
    sfText_setPosition(menu->text_suns_picked_up, pos_suns_picked_up);
    menu->text_plants_planted = create_text(font, sfWhite, 24, "0");
    sfText_setPosition(menu->text_plants_planted, pos_plants_planted);
}
