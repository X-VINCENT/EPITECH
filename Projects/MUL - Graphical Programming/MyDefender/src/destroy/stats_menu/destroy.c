/*
** EPITECH PROJECT, 2022
** Destroy Stats Menu for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void destroy_stats_menu(stats_menu_t *menu)
{
    destroy_sprite(menu->bg);
    destroy_text(menu->text_time_played);
    destroy_text(menu->text_best_score);
    destroy_text(menu->text_damage_caused);
    destroy_text(menu->text_zombies_killed);
    destroy_text(menu->text_suns_picked_up);
    destroy_text(menu->text_plants_planted);
}
