/*
** EPITECH PROJECT, 2022
** Display Stats Menu for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void display_stats_menu(game_t *game)
{
    stats_menu_t *menu = game->assets->stats_menu;

    sfRenderWindow_drawSprite(game->window, menu->bg, NULL);
    set_strings_texts_stats_menu(game);
    display_text_stats_menu(game);
    display_top_bar(game, STATS_STAGE);
}

void set_strings_texts_stats_menu(game_t *game)
{
    stats_menu_t *menu = game->assets->stats_menu;
    char *time = get_time(game);

    sfText_setString(menu->text_time_played, time);
    sfText_setString(menu->text_best_score,
        my_put_nbr_in_str(game->stats->best_score));
    sfText_setString(menu->text_damage_caused,
        my_put_nbr_in_str(game->stats->damage_caused));
    sfText_setString(menu->text_zombies_killed,
        my_put_nbr_in_str(game->stats->zombies_killed));
    sfText_setString(menu->text_suns_picked_up,
        my_put_nbr_in_str(game->stats->suns_picked_up));
    sfText_setString(menu->text_plants_planted,
        my_put_nbr_in_str(game->stats->plants_planted));
    free(time);
    return;
}

void display_text_stats_menu(game_t *game)
{
    stats_menu_t *menu = game->assets->stats_menu;

    sfRenderWindow_drawText(game->window, menu->text_time_played, NULL);
    sfRenderWindow_drawText(game->window, menu->text_best_score, NULL);
    sfRenderWindow_drawText(game->window, menu->text_damage_caused, NULL);
    sfRenderWindow_drawText(game->window, menu->text_zombies_killed, NULL);
    sfRenderWindow_drawText(game->window, menu->text_suns_picked_up, NULL);
    sfRenderWindow_drawText(game->window, menu->text_plants_planted, NULL);
}
