/*
** EPITECH PROJECT, 2021
** Manage Events in My Hunter
** File description:
** Xavier VINCENT
*/

#include "my_hunter.h"

data_myh_t manage_mouse_click(data_myh_t data_myh, sfMouseButtonEvent m_event)
{
    int pos_x = m_event.x;
    int pos_y = m_event.y;

    if (pos_x >= data_myh.resources.textures.bird_r.pos_x &&
        pos_x <= data_myh.resources.textures.bird_r.pos_x + 271 &&
        pos_y >= data_myh.resources.textures.bird_r.pos_y &&
        pos_y <= data_myh.resources.textures.bird_r.pos_y + 299) {
        sfSound_play(data_myh.resources.sounds.kill);
        data_myh.resources.textures.bird_r.base.x = 3839;
    }
    if (pos_x >= data_myh.resources.textures.bird_l.pos_x - 49 &&
        pos_x <= data_myh.resources.textures.bird_l.pos_x + 271 &&
        pos_y >= data_myh.resources.textures.bird_l.pos_y &&
        pos_y <= data_myh.resources.textures.bird_l.pos_y + 250) {
        sfSound_play(data_myh.resources.sounds.kill);
        data_myh.resources.textures.bird_l.base.x = -131;
    }
    return data_myh;
}

data_myh_t analyse_events(data_myh_t data_myh)
{
    while (sfRenderWindow_pollEvent(data_myh.resources.window,
        &data_myh.events.event)) {
        if (data_myh.events.event.type == sfEvtMouseButtonPressed) {
            sfSound_play(data_myh.resources.sounds.shoot);
            data_myh = manage_mouse_click(data_myh,
            data_myh.events.event.mouseButton);
        }
        if (data_myh.events.event.key.code == sfKeyM ||
            data_myh.events.event.key.code == sfKeyPause)
            sfMusic_pause(data_myh.resources.sounds.music);
        if (data_myh.events.event.key.code == sfKeyEscape ||
            data_myh.events.event.type == sfEvtClosed)
            sfRenderWindow_close(data_myh.resources.window);
    }
    return data_myh;
}
