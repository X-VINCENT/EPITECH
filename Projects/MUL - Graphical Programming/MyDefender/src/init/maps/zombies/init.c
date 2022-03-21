/*
** EPITECH PROJECT, 2022
** Init Zombies Maps for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

zombie_t *init_zombie_hugo(sfVector2f position)
{
    zombie_t *zombie = malloc(sizeof(zombie_t));
    const char path[] = "assets/pictures/game.png";
    const char font[] = "assets/fonts/BurbankSmall-Bold.otf";
    sfIntRect rect = init_rect(0, 1085, 64, 102);
    sfVector2f pos_health_text = {
        position.x + rect.width / 2, position.y + rect.height + 15};
    sfVector2f scale = init_scale(1, 1);

    zombie->sprite = create_sprite(path, rect, position, scale);
    zombie->health = HUGO_HEALTH;
    zombie->speed = HUGO_SPEED;
    zombie->default_speed = HUGO_SPEED;
    zombie->anim_speed = HUGO_ANIM_SPEED;
    zombie->name = HUGO;
    zombie->clock_move = sfClock_create();
    zombie->clock_animate = sfClock_create();
    zombie->health_text = create_text(
        font, sfBlack, 24, my_put_nbr_in_str(HUGO_HEALTH));
    sfText_setPosition(zombie->health_text, pos_health_text);
    return zombie;
}

zombie_t *init_zombie_max(sfVector2f position)
{
    zombie_t *zombie = malloc(sizeof(zombie_t));
    const char path[] = "assets/pictures/game.png";
    const char font[] = "assets/fonts/BurbankSmall-Bold.otf";
    sfIntRect rect = init_rect(0, 1195, 65, 121);
    sfVector2f pos_health_text = {
        position.x + rect.width / 2, position.y + rect.height + 10};
    sfVector2f scale = init_scale(1, 1);

    zombie->sprite = create_sprite(path, rect, position, scale);
    zombie->health = MAX_HEALTH;
    zombie->speed = MAX_SPEED;
    zombie->default_speed = MAX_SPEED;
    zombie->anim_speed = MAX_ANIM_SPEED;
    zombie->name = MAX;
    zombie->clock_move = sfClock_create();
    zombie->clock_animate = sfClock_create();
    zombie->health_text = create_text(
        font, sfBlack, 24, my_put_nbr_in_str(MAX_HEALTH));
    sfText_setPosition(zombie->health_text, pos_health_text);
    return zombie;
}

zombie_t *init_zombie_gautier(sfVector2f position)
{
    zombie_t *zombie = malloc(sizeof(zombie_t));
    const char path[] = "assets/pictures/game.png";
    const char font[] = "assets/fonts/BurbankSmall-Bold.otf";
    sfIntRect rect = init_rect(0, 1319, 69, 118);
    sfVector2f pos_health_text = {
        position.x + rect.width / 2, position.y + rect.height + 15};
    sfVector2f scale = init_scale(1, 1);

    zombie->sprite = create_sprite(path, rect, position, scale);
    zombie->health = GAUTIER_HEALTH;
    zombie->speed = GAUTIER_SPEED;
    zombie->default_speed = GAUTIER_SPEED;
    zombie->anim_speed = GAUTIER_ANIM_SPEED;
    zombie->name = GAUTIER;
    zombie->clock_move = sfClock_create();
    zombie->clock_animate = sfClock_create();
    zombie->health_text = create_text(
        font, sfBlack, 24, my_put_nbr_in_str(GAUTIER_HEALTH));
    sfText_setPosition(zombie->health_text, pos_health_text);
    return zombie;
}

zombie_t *init_zombie_michael_jackson(sfVector2f position)
{
    zombie_t *zombie = malloc(sizeof(zombie_t));
    const char path[] = "assets/pictures/game.png";
    const char font[] = "assets/fonts/BurbankSmall-Bold.otf";
    sfIntRect rect = init_rect(0, 791, 96, 96);
    sfVector2f pos_health_text = {
        position.x + rect.width / 2, position.y + rect.height + 15};
    sfVector2f scale = init_scale(1, 1);

    zombie->sprite = create_sprite(path, rect, position, scale);
    zombie->health = MICHAEL_HEALTH;
    zombie->speed = MICHAEL_SPEED;
    zombie->default_speed = MICHAEL_SPEED;
    zombie->anim_speed = MICHAEL_ANIM_SPEED;
    zombie->name = MICHAEL_JACKSON;
    zombie->clock_move = sfClock_create();
    zombie->clock_animate = sfClock_create();
    zombie->health_text = create_text(
        font, sfBlack, 24, my_put_nbr_in_str(MICHAEL_HEALTH));
    sfText_setPosition(zombie->health_text, pos_health_text);
    return zombie;
}
