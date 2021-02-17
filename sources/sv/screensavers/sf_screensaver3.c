/*
** EPITECH PROJECT, 2020
** screensaver
** File description:
** window
*/

#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Window/Event.h>

#include "../sv.h"
#include "../struct/framebuffer.h"

static void test()
{
    /* int nb;

    while (1) {
        nb = 
    } */
}

void sf_screensaver3(all_t all, framebuffer_t *framebuffer)
{
    int nb[2] = {100, 100};
    while (sfRenderWindow_isOpen(all.window)) {
        while (sfRenderWindow_pollEvent(all.window, &all.event)) {
            if (all.event.type == sfEvtClosed)
                sfRenderWindow_close(all.window);
        }

            put_pixel(framebuffer, nb[0], nb[1], sfWhite);

            sfRenderWindow_clear(all.window, color(24, 26, 31, 255));
            sfTexture_updateFromPixels(all.texture, framebuffer->pixels,
                                    800, 600, 0, 0);
            sfRenderWindow_drawSprite(all.window, all.sprite, NULL);
            sfRenderWindow_display(all.window);
    }
}