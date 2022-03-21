/*
** EPITECH PROJECT, 2022
** Check File for My Runner
** File description:
** Xavier VINCENT
*/

#include "my_runner.h"

int check_assets(void)
{
    int error = 0;

    error += is_file("assets/fonts/GreatVibes-Regular.otf");
    error += is_file("assets/fonts/SourceSansPro-Regular.otf");
    error += check_parallax();
    error += check_pictures();
    error += check_sounds();
    if (error > 0)
        return ERROR;
    return SUCCESS;
}

int check_parallax(void)
{
    int error = 0;

    error += is_file("assets/parallax/bg.png");
    error += is_file("assets/parallax/fg.png");
    error += is_file("assets/parallax/g1.png");
    error += is_file("assets/parallax/g2.png");
    error += is_file("assets/parallax/middle.png");
    error += is_file("assets/parallax/sky.png");
    error += is_file("assets/parallax/snow.png");
    return error;
}

int check_pictures(void)
{
    int error = 0;

    error += is_file("assets/pictures/background/bg.png");
    error += is_file("assets/pictures/background/settings.png");
    error += is_file("assets/pictures/buttons/buttons.png");
    error += is_file("assets/pictures/buttons/settings.png");
    error += is_file("assets/pictures/character/attack.png");
    error += is_file("assets/pictures/character/hurt.png");
    error += is_file("assets/pictures/character/run.png");
    error += is_file("assets/pictures/character/snowman.png");
    error += is_file("assets/pictures/icons/cursor_icon.png");
    error += is_file("assets/pictures/icons/window_icon.png");
    error += is_file("assets/pictures/objects/box.png");
    error += is_file("assets/pictures/objects/sign.png");
    return error;
}

int check_sounds(void)
{
    int error = 0;

    error += is_file("assets/sounds/musics/game.ogg");
    error += is_file("assets/sounds/musics/home_menu.ogg");
    error += is_file("assets/sounds/click_button.ogg");
    error += is_file("assets/sounds/coin.ogg");
    error += is_file("assets/sounds/death.ogg");
    error += is_file("assets/sounds/jump.ogg");
    error += is_file("assets/sounds/loose.ogg");
    error += is_file("assets/sounds/open_pause_menu.ogg");
    error += is_file("assets/sounds/win.ogg");
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
