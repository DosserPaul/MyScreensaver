/*
** EPITECH PROJECT, 2020
** SVv2
** File description:
** sf_event1
*/

#include <SFML/Window/Event.h>

#include "../struct/framebuffer.h"
#include "../sv.h"

static void square(framebuffer_t *framebuffer)
{
    for (int i = 0; i < 800; i++){
        for (int y = 0; y < 600; y++) {
            put_pixel(framebuffer, 0 + i, 0 + y, color(24, 26, 31, 255));
        }
    }
}

static void exchange(all_t all, framebuffer_t *framebuffer)
{
    if ((all.event.type == sfEvtKeyPressed) && (all.event.key.code == sfKeyEscape))
        sfRenderWindow_close(all.window);

    if ((all.event.type == sfEvtKeyPressed) && (all.event.key.code == sfKeyLeft)) {
        square(framebuffer);
        sf_screensaver2(all, framebuffer);
    }

    if ((all.event.type == sfEvtKeyPressed) && (all.event.key.code == sfKeyRight)) {
        square(framebuffer);
        sf_screensaver2(all, framebuffer);
    }
}

void event1(all_t all, framebuffer_t *framebuffer)
{
    if (all.event.type == sfEvtClosed)
        sfRenderWindow_close(all.window);

        exchange(all, framebuffer);
}
