/*
** EPITECH PROJECT, 2020
** screensaver
** File description:
** draw_square
*/

#include "struct/framebuffer.h"
#include "sv.h"

void draw_square(framebuffer_t *framebuffer, unsigned int with, 
                 unsigned int height, sfColor c)
{
    sfVector2i p;

    p.x = random_point(800);
    p.y = random_point(600);

    for (int i = 0; i < with; i++){
        for (int y = 0; y < height; y++) {
            put_pixel(framebuffer, p.x + i, p.y + y, c);
        }
    }
}