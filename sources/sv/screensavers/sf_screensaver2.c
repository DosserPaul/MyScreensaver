/*
** EPITECH PROJECT, 2020
** screensaver
** File description:
** window
*/

#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Window/Event.h>
#include <SFML/System/Vector2.h>

#include "../sv.h"
#include "../struct/framebuffer.h"

void sf_screensaver2(all_t all, framebuffer_t *framebuffer)
{
    int size[2] = {50, 50};
    int e;

    while (sfRenderWindow_isOpen(all.window)) {
        while (sfRenderWindow_pollEvent(all.window, &all.event)) {
            e = event2(all, framebuffer);
            if (e == 1 && size[0] > 0)
                size[0]--;
            if (e == 2)
                size[0]++;
            if (e == 3 && size[1] > 0)
                size[1]--;
            if (e == 4)
                size[1]++;
        }
        draw_square(framebuffer, size[0], size[1], random_color(0));
        draw_square(framebuffer, size[0], size[1],  color(24, 26, 31, 255));

        dont_know(all, framebuffer);
    }
}