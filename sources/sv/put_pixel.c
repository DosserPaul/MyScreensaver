/*
** EPITECH PROJECT, 2020
** put_pixel
** File description:
** display a pixel
*/

#include <SFML/Graphics/Color.h>

#include "struct/framebuffer.h"

void put_pixel(framebuffer_t *framebuff, unsigned x, unsigned y, sfColor color)
{
    int width;
    width = 4 * (y * framebuff->width + x);

    framebuff->pixels[width]     = color.r;
    framebuff->pixels[width + 1] = color.g;
    framebuff->pixels[width + 2] = color.b;
    framebuff->pixels[width + 3] = color.a;
}