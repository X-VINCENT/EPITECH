/*
** EPITECH PROJECT, 2021
** Init Runner for My Runner
** File description:
** Xavier VINCENT
*/

#include "my_runner.h"

void init_runner(game_t *game)
{
    sfVector2f fps_pos = {1875.00, 5.00};

    if (!game)
        return;
    game->assets->parallax = init_parallax();
    game->assets->character = init_character();
    game->assets->game_music = create_music("assets/sounds/musics/game.ogg");
    game->assets->fps = create_text(
    "assets/fonts/SourceSansPro-Regular.otf", sfGreen, 32, "0");
    sfText_setPosition(game->assets->fps, fps_pos);
}

parallax_t *init_parallax(void)
{
    parallax_t *parallax = malloc(sizeof(parallax_t));
    sfIntRect *r = init_rect(0, 0, 1920, 1080);
    sfVector2f p = {0.00, 0.00};
    sfVector2f s = {1.00, 1.00};

    parallax->speed = 1;
    parallax->clock = sfClock_create();
    parallax->sky = create_sprite("assets/parallax/sky.png", r, p, s);
    parallax->bg = create_sprite("assets/parallax/bg.png", r, p, s);
    parallax->middle = create_sprite("assets/parallax/middle.png", r, p, s);
    parallax->fg = create_sprite("assets/parallax/fg.png", r, p, s);
    parallax->g1 = create_sprite("assets/parallax/g1.png", r, p, s);
    parallax->g2 = create_sprite("assets/parallax/g2.png", r, p, s);
    parallax->snow = create_sprite("assets/parallax/snow.png", r, p, s);
    free(r);
    return parallax;
}

character_t *init_character(void)
{
    character_t *character = malloc(sizeof(character_t));
    sfIntRect *r = init_rect(0, 0, 48, 48);
    sfVector2f p = {960.00, 800.00};
    sfVector2f s = {2.00, 2.00};

    character->clock = sfClock_create();
    character->clock_jump = sfClock_create();
    character->attack = create_sprite(
        "assets/pictures/character/attack.png", r, p, s);
    character->hurt = create_sprite(
        "assets/pictures/character/hurt.png", r, p, s);
    character->run = create_sprite(
        "assets/pictures/character/run.png", r, p, s);
    character->jump = 0;
    character->jump_sound = create_sound("assets/sounds/jump.ogg");
    character->death = create_sound("assets/sounds/death.ogg");
    free(r);
    return character;
}
