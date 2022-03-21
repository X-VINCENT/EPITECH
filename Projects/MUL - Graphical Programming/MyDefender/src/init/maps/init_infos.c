/*
** EPITECH PROJECT, 2022
** Init Infos Maps for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void init_infos(game_t *game)
{
    const char font[] = "assets/fonts/BurbankBigRegular-Bold.otf";
    sfVector2f pos = init_pos(150, 620);
    sfVector2f size = {250, 200};
    sfColor color = sfColor_fromRGBA(255, 128, 128, 128);
    sfColor out_color = sfColor_fromRGBA(255, 128, 128, 128);

    game->maps->info = create_rectangle_shape(pos, size, color, out_color);
    sfRectangleShape_setOrigin(
        game->maps->info, (sfVector2f){size.x / 2, size.y / 2});
    init_texts_infos(game);
}

void init_texts_infos(game_t *game)
{
    const char font[] = "assets/fonts/BurbankBigRegular-Bold.otf";
    sfVector2f pos_name = init_pos(150, 570);
    sfVector2f pos_damage = init_pos(53, 615);
    sfVector2f pos_level = init_pos(53, 650);

    game->maps->info_text_name = create_text(font, sfWhite, 36, "Name : ");
    sfText_setPosition(game->maps->info_text_name, pos_name);
    game->maps->info_text_damage = create_text(font, sfWhite, 24, "Damage : ");
    sfText_setPosition(game->maps->info_text_damage, pos_damage);
    game->maps->info_text_level = create_text(font, sfWhite, 24, "Level : ");
    sfText_setPosition(game->maps->info_text_level, pos_level);
}
