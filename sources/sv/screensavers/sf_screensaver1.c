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

void sf_screensaver1(all_t all, framebuffer_t *framebuffer)
{
    while (sfRenderWindow_isOpen(all.window)) {
        while (sfRenderWindow_pollEvent(all.window, &all.event)) {
            event1(all, framebuffer);
        }

        put_pixel(framebuffer, random_point(800), random_point(600), 
                  random_color(0));
        put_pixel(framebuffer, random_point(800), random_point(600), 
                  random_color(0));
        put_pixel(framebuffer, random_point(800), random_point(600), 
                  random_color(0));

        dont_know(all, framebuffer);
    }
}