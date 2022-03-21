/*
** EPITECH PROJECT, 2022
** Check File for My Defender
** File description:
** Xavier VINCENT
*/

#include "my_defender.h"

int check_assets(void)
{
    int error = 0;

    error += check_audio();
    error += check_fonts();
    error += check_pictures();
    error += check_maps();
    if (error > 0)
        return ERROR;
    return SUCCESS;
}

int check_audio(void)
{
    int error = 0;

    error += is_file("assets/audio/musics/michael.ogg");
    error += is_file("assets/audio/musics/start_menu.ogg");
    error += is_file("assets/audio/sounds/game_over.ogg");
    error += is_file("assets/audio/sounds/menu.ogg");
    error += is_file("assets/audio/sounds/plants.ogg");
    error += is_file("assets/audio/sounds/score.ogg");
    error += is_file("assets/audio/sounds/shovel.ogg");
    error += is_file("assets/audio/sounds/transplanter.ogg");
    error += is_file("assets/audio/sounds/victory.ogg");
    error += is_file("assets/audio/sounds/zombie.ogg");
    return error;
}

int check_fonts(void)
{
    int error = 0;

    error += is_file("assets/fonts/BurbankBigRegular-Bold.otf");
    error += is_file("assets/fonts/BurbankSmall-Bold.otf");
    error += is_file("assets/fonts/Samdan.ttf");
    return error;
}

int is_file(const char *filepath)
{
    FILE *file;

    if (!filepath)
        return 1;
    if (file = fopen(filepath, "r")) {
        fclose(file);
        return SUCCESS;
    }
    my_printf("File not found: \"%s\"\n", filepath);
    return 1;
}
