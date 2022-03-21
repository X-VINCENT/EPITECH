/*
** EPITECH PROJECT, 2022
** Draw Infos Maps for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void draw_infos(game_t *game, map_t *map)
{
    for (int idx = 0; map->plants[idx] != NULL; idx += 1) {
        if (map->plants[idx]->is_hover == 1) {
            sfRenderWindow_drawRectangleShape(
                game->window, game->maps->info, NULL);
            draw_texts_infos(game, map, idx);
        }
    }
}

void draw_texts_infos(game_t *game, map_t *map, int idx)
{
    char *damage_text = my_strcat(
            "Damage : ", my_put_nbr_in_str(map->plants[idx]->damage));
    char *level_text = my_strcat(
            "Level : ", my_put_nbr_in_str(map->plants[idx]->level));

    level_text[9] = '\0';
    damage_text[my_strlen(damage_text)] = '\0';
    draw_name_text_info(game, map, idx);
    sfText_setString(game->maps->info_text_damage, damage_text);
    sfRenderWindow_drawText(game->window, game->maps->info_text_damage, NULL);
    sfText_setString(game->maps->info_text_level, level_text);
    sfRenderWindow_drawText(game->window, game->maps->info_text_level, NULL);
    free(level_text);
}

void draw_name_text_info(game_t *game, map_t *map, int idx)
{
    sfText *text = game->maps->info_text_name;

    if (map->plants[idx]->name == PEASHOOTER)
            sfText_setString(text, "PEASHOOTER");
    if (map->plants[idx]->name == SUNFLOWER)
            sfText_setString(text, "SUNFLOWER");
    if (map->plants[idx]->name == TORCHWOOD)
            sfText_setString(text, "TORCHWOOD");
    if (map->plants[idx]->name == MINE_POTATO)
            sfText_setString(text, "MINE POTATO");
    if (map->plants[idx]->name == ICE_SHOOTER)
            sfText_setString(text, "ICE SHOOTER");
    sfText_setOrigin(game->maps->info_text_name, (sfVector2f)
        {sfText_getGlobalBounds(text).width / 2,
        sfText_getGlobalBounds(text).height / 2});
    sfRenderWindow_drawText(game->window, text, NULL);
}
