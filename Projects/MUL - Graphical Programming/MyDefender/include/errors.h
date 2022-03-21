/*
** EPITECH PROJECT, 2022
** Errors Header for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#ifndef ERRORS_H_
    #define ERRORS_H_

    #include "my_defender.h"

// Check Env
int env(char **arge);
int check_display(char *environment);

// Check File
int check_assets(void);
int check_audio(void);
int check_fonts(void);
int is_file(const char *filepath);

// Check Pictures
int check_pictures(void);
int check_backgrounds(void);
int check_buttons(void);
int check_icons(void);
int check_maps_backgrounds(void);

// Check Maps
int check_maps(void);

// Help
int print_help(void);

#endif /* !ERRORS_H_ */
