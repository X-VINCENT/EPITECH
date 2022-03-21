/*
** EPITECH PROJECT, 2021
** Animation for My Runner
** File description:
** Xavier VINCENT
*/

#include "my_runner.h"

void animate_parallax(parallax_t *parallax)
{
    if (!parallax)
        return;
    if (sfTime_asSeconds(sfClock_getElapsedTime(parallax->clock)) > 0.01) {
        move_sprite(parallax->sky, (1 * parallax->speed), 1920);
        move_sprite(parallax->bg, (2 * parallax->speed), 1920);
        move_sprite(parallax->middle, (4 * parallax->speed), 1920);
        move_sprite(parallax->fg, (6 * parallax->speed), 1920);
        move_sprite(parallax->g1, (8 * parallax->speed), 1920);
        move_sprite(parallax->g2, (12 * parallax->speed), 1920);
        move_sprite(parallax->snow, (150 * parallax->speed), 1920);
        sfClock_restart(parallax->clock);
    }
}

void animate_character(character_t *character)
{
    if (!character)
        return;
    move_sprite(character->run, 48, 288);
    sfClock_restart(character->clock);
}

void character_jump(character_t *character)
{
    sfVector2f run_pos = sfSprite_getPosition(character->run);

    if (!character)
        return;
    if (character->jump == 1) {
        if (run_pos.y > 600)
            run_pos.y -= 10;
        else
            character->jump = 0;
    } else if (character->jump == 0)
        run_pos.y += (run_pos.y < 800) ? 10 : 0;
    sfSprite_setPosition(character->run, run_pos);
    sfClock_restart(character->clock_jump);
}

void button_hover(sfSprite *sprite, sfClock *clock,
    sfFloatRect *global_bounds, sfVector2f coords)
{
    sfVector2f scale = sfSprite_getScale(sprite);

    if (!sprite || !clock || !global_bounds)
        return;
    if (sfFloatRect_contains(global_bounds, coords.x, coords.y) &&
        sfTime_asSeconds(sfClock_getElapsedTime(clock)) > 0.01) {
        if (scale.x < 1.10) {
            scale.x += 0.02;
            scale.y += 0.02;
            sfSprite_setScale(sprite, scale);
            sfClock_restart(clock);
        }
    } else if (scale.x > 1.00 &&
        sfTime_asSeconds(sfClock_getElapsedTime(clock)) > 0.01) {
        scale.x -= 0.02;
        scale.y -= 0.02;
        sfSprite_setScale(sprite, scale);
        sfClock_restart(clock);
    }
}

void button_hover_little(sfSprite *sprite, sfClock *clock,
    sfFloatRect *global_bounds, sfVector2f coords)
{
    sfVector2f scale = sfSprite_getScale(sprite);

    if (!sprite || !clock || !global_bounds)
        return;
    if (sfFloatRect_contains(global_bounds, coords.x, coords.y) &&
        sfTime_asSeconds(sfClock_getElapsedTime(clock)) > 0.01) {
        if (scale.x < 0.60) {
            scale.x += 0.015;
            scale.y += 0.015;
            sfSprite_setScale(sprite, scale);
            sfClock_restart(clock);
        }
    } else if (scale.x > 0.50 &&
        sfTime_asSeconds(sfClock_getElapsedTime(clock)) > 0.01) {
        scale.x -= 0.015;
        scale.y -= 0.015;
        sfSprite_setScale(sprite, scale);
        sfClock_restart(clock);
    }
}
