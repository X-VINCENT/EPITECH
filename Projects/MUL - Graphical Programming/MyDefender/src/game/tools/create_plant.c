/*
** EPITECH PROJECT, 2022
** Create Plant for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

plant_t *create_peashooter(sfVector2f pos)
{
    plant_t *plant = malloc(sizeof(plant_t));
    const char path[] = "assets/pictures/game.png";
    sfIntRect rect = init_rect(0, 168, 96, 80);
    sfVector2f new_pos = {pos.x + BLK_SIZE / 2 + 5, pos.y + BLK_SIZE / 2};
    sfVector2f origin = {rect.width / 2, rect.height / 2};
    sfVector2f scale = {0.90, 0.90};

    plant->sprite = create_sprite(path, rect, new_pos, scale);
    sfSprite_setOrigin(plant->sprite, origin);
    plant->area = create_circle_shape(
        sfColor_fromRGBA(255, 0, 0, 64),
        new_pos, PEASHOOTER_RADIUS * BLK_SIZE,
        sfColor_fromRGBA(255, 0, 0, 64));
    plant->damage = PEASHOOTER_DAMAGE;
    plant->speed = PEASHOOTER_SPEED;
    plant->clock_anim = sfClock_create();
    plant->clock_damage = sfClock_create();
    plant->name = PEASHOOTER;
    plant->level = 1;
    return plant;
}

plant_t *create_sunflower(sfVector2f pos)
{
    plant_t *plant = malloc(sizeof(plant_t));
    const char path[] = "assets/pictures/game.png";
    sfIntRect rect = init_rect(0, 277, 96, 85);
    sfVector2f new_pos = {pos.x + BLK_SIZE / 2 + 15, pos.y + BLK_SIZE / 2};
    sfVector2f origin = {rect.width / 2, rect.height / 2};
    sfVector2f scale = init_scale(1, 1);

    plant->sprite = create_sprite(path, rect, new_pos, scale);
    sfSprite_setOrigin(plant->sprite, origin);
    plant->area = create_circle_shape(
        sfColor_fromRGBA(255, 0, 0, 64),
        new_pos, SUNFLOWER_RADIUS * BLK_SIZE,
        sfColor_fromRGBA(255, 0, 0, 64));
    plant->damage = SUNFLOWER_DAMAGE;
    plant->speed = SUNFLOWER_SPEED;
    plant->clock_anim = sfClock_create();
    plant->clock_damage = sfClock_create();
    plant->name = SUNFLOWER;
    plant->level = 1;
    return plant;
}

plant_t *create_torchwood(sfVector2f pos)
{
    plant_t *plant = malloc(sizeof(plant_t));
    const char path[] = "assets/pictures/game.png";
    sfIntRect rect = init_rect(0, 413, 69, 89);
    sfVector2f new_pos = {pos.x + BLK_SIZE / 2, pos.y + BLK_SIZE / 2 - 3};
    sfVector2f origin = {rect.width / 2, rect.height / 2};
    sfVector2f scale = {0.90, 0.90};

    plant->sprite = create_sprite(path, rect, new_pos, scale);
    sfSprite_setOrigin(plant->sprite, origin);
    plant->area = create_circle_shape(
        sfColor_fromRGBA(255, 0, 0, 64),
        new_pos, TORCHWOOD_RADIUS * BLK_SIZE,
        sfColor_fromRGBA(255, 0, 0, 64));
    plant->damage = TORCHWOOD_DAMAGE;
    plant->speed = TORCHWOOD_SPEED;
    plant->clock_anim = sfClock_create();
    plant->clock_damage = sfClock_create();
    plant->name = TORCHWOOD;
    plant->level = 1;
    return plant;
}

plant_t *create_mine_potato(sfVector2f pos)
{
    plant_t *plant = malloc(sizeof(plant_t));
    const char path[] = "assets/pictures/game.png";
    sfIntRect rect = init_rect(0, 594, 96, 52);
    sfVector2f new_pos = {pos.x + BLK_SIZE / 2, pos.y + BLK_SIZE / 2};
    sfVector2f origin = {rect.width / 2, rect.height / 2};
    sfVector2f scale = init_scale(1, 1);

    plant->sprite = create_sprite(path, rect, new_pos, scale);
    sfSprite_setOrigin(plant->sprite, origin);
    plant->area = create_circle_shape(
        sfColor_fromRGBA(255, 0, 0, 64),
        new_pos, MINE_POTATO_RADIUS * BLK_SIZE,
        sfColor_fromRGBA(255, 0, 0, 64));
    plant->damage = MINE_POTATO_DAMAGE;
    plant->speed = MINE_POTATO_SPEED;
    plant->clock_anim = sfClock_create();
    plant->clock_damage = sfClock_create();
    plant->name = MINE_POTATO;
    plant->level = 1;
    return plant;
}

plant_t *create_ice_shooter(sfVector2f pos)
{
    plant_t *plant = malloc(sizeof(plant_t));
    const char path[] = "assets/pictures/game.png";
    sfIntRect rect = init_rect(0, 684, 96, 86);
    sfVector2f new_pos = {pos.x + BLK_SIZE / 2, pos.y + BLK_SIZE / 2};
    sfVector2f origin = {rect.width / 2, rect.height / 2};
    sfVector2f scale = {0.85, 0.85};

    plant->sprite = create_sprite(path, rect, new_pos, scale);
    sfSprite_setOrigin(plant->sprite, origin);
    plant->area = create_circle_shape(
        sfColor_fromRGBA(255, 0, 0, 64),
        new_pos, ICE_SHOOTER_RADIUS * BLK_SIZE,
        sfColor_fromRGBA(255, 0, 0, 64));
    plant->damage = ICE_SHOOTER_DAMAGE;
    plant->speed = ICE_SHOOTER_SPEED;
    plant->clock_anim = sfClock_create();
    plant->clock_damage = sfClock_create();
    plant->name = ICE_SHOOTER;
    plant->level = 1;
    return plant;
}
