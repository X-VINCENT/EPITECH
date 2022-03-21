/*
** EPITECH PROJECT, 2022
** Destroy Header for My Runner
** File description:
** Xavier VINCENT
*/

#ifndef DESTROY_H_
    #define DESTROY_H_

    #include "my_runner.h"

// Destroy Home Menu
void destroy_home_menu(home_menu_t *home_menu);

// Destroy Map
void destroy_map(map_t *map);

// Destroy Pause Menu
void destroy_pause_menu(pause_menu_t *pause_menu);

// Destroy Results Menu
void destroy_results_menu(results_menu_t *results_menu);

// Destroy Settings Menu
void destroy_settings_menu(settings_menu_t *settings_menu);

// Destroy
void destroy_all(game_t *game);
void destroy_parallax(parallax_t *parallax);
void destroy_character(character_t *character);
void destroy_score(score_t *score);
void destroy_event(event_t *event);

#endif /* !DESTROY_H_ */
