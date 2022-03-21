/*
** EPITECH PROJECT, 2021
** Header File for My Runner
** File description:
** Xavier VINCENT
*/

#ifndef MY_RUNNER_H_
    #define MY_RUNNER_H_

// Libs
    #include <fcntl.h>
    #include <stdlib.h>
    #include "../lib/my/my.h"
    #include "../lib/my_printf/my_printf.h"

// CSFML
    #include "csfml.h"

// My Runner
    #include "data.h"
    #include "destroy.h"
    #include "errors.h"
    #include "game.h"
    #include "init.h"

// Macros
    #define SUCCESS 0
    #define ERROR 84

    // Stage
    #define START_STAGE 0
    #define HOME_STAGE 1
    #define MAPS_STAGE 2
    #define PLANTS_STAGE 3
    #define STATS_STAGE 4
    #define HOWTOPLAY_STAGE 5
    #define SETTINGS_STAGE 6

    #define MAX_STAGE 6

    #define PAUSE_STAGE 7
    #define RESULT_STAGE 42

    // Game
    #define MAP_1_STAGE 10

    // Popup
    #define OFF_POPUP 0
    #define QUIT_POPUP 1

    // Map
    #define NB_LINES 9
    #define NB_COLS 20
    #define BLK_SIZE 96
    #define BLK_PATH "assets/pictures/maps/blocks.png"
    #define PATH_MAP_1 "assets/maps/map1"
    #define PATH_MAP_2 "assets/maps/map2"
    #define PATH_MAP_3 "assets/maps/map3"
    #define PATH_MAP_4 "assets/maps/map4"
    #define PATH_MAP_5 "assets/maps/map5"
    #define INVALID_MAP "Invalid Map.\nSize needed : x = 20, y = 9\n"

    #define NB_WAVES 5

    #define START_MONEY 100

    // Zombies
    #define HUGO_HEALTH 200
    #define HUGO_SPEED 200
    #define HUGO_ANIM_SPEED 1
    #define HUGO_OFFSET 64
    #define HUGO_MAX_VALUE 401

    #define MAX_HEALTH 300
    #define MAX_SPEED 200
    #define MAX_ANIM_SPEED 1
    #define MAX_OFFSET 70
    #define MAX_MAX_VALUE 480

    #define GAUTIER_HEALTH 400
    #define GAUTIER_SPEED 200
    #define GAUTIER_ANIM_SPEED 1
    #define GAUTIER_OFFSET 75
    #define GAUTIER_MAX_VALUE 520

    #define MICHAEL_HEALTH 1000
    #define MICHAEL_SPEED 400
    #define MICHAEL_ANIM_SPEED 10
    #define MICHAEL_OFFSET 96
    #define MICHAEL_MAX_VALUE 1675

    // Plants
    #define PEASHOOTER 0
    #define PEASHOOTER_RADIUS 2
    #define PEASHOOTER_DAMAGE 5
    #define PEASHOOTER_DAMAGE_UP_1 5
    #define PEASHOOTER_DAMAGE_UP_2 5
    #define PEASHOOTER_SPEED 1
    #define PEASHOOTER_ANIM_SPEED 3
    #define PEASHOOTER_PRICE 100
    #define PEASHOOTER_OFFSET 96
    #define PEASHOOTER_MAX_VALUE 2200

    #define SUNFLOWER 1
    #define SUNFLOWER_RADIUS 0
    #define SUNFLOWER_DAMAGE 0
    #define SUNFLOWER_SPEED 0
    #define SUNFLOWER_ANIM_SPEED 3
    #define SUNFLOWER_PRICE 50
    #define SUNFLOWER_OFFSET 96
    #define SUNFLOWER_MAX_VALUE 2380

    #define TORCHWOOD 2
    #define TORCHWOOD_RADIUS 1.5
    #define TORCHWOOD_DAMAGE 5
    #define TORCHWOOD_DAMAGE_UP_1 5
    #define TORCHWOOD_DAMAGE_UP_2 5
    #define TORCHWOOD_SPEED 1
    #define TORCHWOOD_ANIM_SPEED 4
    #define TORCHWOOD_PRICE 150
    #define TORCHWOOD_OFFSET 69
    #define TORCHWOOD_MAX_VALUE 548

    #define MINE_POTATO 3
    #define MINE_POTATO_RADIUS 0.1
    #define MINE_POTATO_DAMAGE 200
    #define MINE_POTATO_DAMAGE_UP_1 150
    #define MINE_POTATO_DAMAGE_UP_2 150
    #define MINE_POTATO_SPEED 0
    #define MINE_POTATO_ANIM_SPEED 10
    #define MINE_POTATO_PRICE 50
    #define MINE_POTATO_OFFSET 96
    #define MINE_POTATO_MAX_VALUE 2780

    #define ICE_SHOOTER 4
    #define ICE_SHOOTER_RADIUS 3
    #define ICE_SHOOTER_DAMAGE 25
    #define ICE_SHOOTER_DAMAGE_UP_1 15
    #define ICE_SHOOTER_DAMAGE_UP_2 15
    #define ICE_SHOOTER_SPEED 1
    #define ICE_SHOOTER_ANIM_SPEED 4
    #define ICE_SHOOTER_PRICE 100
    #define ICE_SHOOTER_OFFSET 96
    #define ICE_SHOOTER_MAX_VALUE 864

    #define TRANSPLANTER_PRICE 0
    #define FERTILIZER_PRICE 100

#endif /* !MY_RUNNER_H_ */
