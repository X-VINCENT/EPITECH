/*
** EPITECH PROJECT, 2022
** Check Pictures for My Defender
** File description:
** Xavier VINCENT
*/

#include "my_defender.h"

int check_pictures(void)
{
    int error = 0;

    error += check_backgrounds();
    error += check_buttons();
    error += check_icons();
    error += check_maps_backgrounds();
    error += is_file("assets/pictures/game.png");
    return error;
}

int check_backgrounds(void)
{
    int error = 0;

    error += is_file("assets/pictures/backgrounds/home_menu.png");
    error += is_file("assets/pictures/backgrounds/howtoplay_menu.png");
    error += is_file("assets/pictures/backgrounds/loading_screen.png");
    error += is_file("assets/pictures/backgrounds/loose.png");
    error += is_file("assets/pictures/backgrounds/maps_menu.png");
    error += is_file("assets/pictures/backgrounds/pause_menu.png");
    error += is_file("assets/pictures/backgrounds/plants_zombies_menu.png");
    error += is_file("assets/pictures/backgrounds/settings_menu.png");
    error += is_file("assets/pictures/backgrounds/start_menu.png");
    error += is_file("assets/pictures/backgrounds/stats_menu.png");
    error += is_file("assets/pictures/backgrounds/win.png");
    return error;
}

int check_buttons(void)
{
    int error = 0;

    error += is_file("assets/pictures/buttons/buttons.png");
    error += is_file("assets/pictures/buttons/description.png");
    error += is_file("assets/pictures/buttons/home.png");
    error += is_file("assets/pictures/buttons/play.png");
    error += is_file("assets/pictures/buttons/quit.png");
    return error;
}

int check_icons(void)
{
    int error = 0;

    error += is_file("assets/pictures/icons/cursor_icon.png");
    error += is_file("assets/pictures/icons/window_icon.png");
    return error;
}

int check_maps_backgrounds(void)
{
    int error = 0;

    error += is_file("assets/pictures/maps/blocks.png");
    error += is_file("assets/pictures/maps/map1.png");
    error += is_file("assets/pictures/maps/map2.png");
    error += is_file("assets/pictures/maps/map3.png");
    error += is_file("assets/pictures/maps/map4.png");
    error += is_file("assets/pictures/maps/map5.png");
    error += is_file("assets/pictures/maps/maps.png");
    return error;
}
