/*
** EPITECH PROJECT, 2020
** screensaver
** File description:
** framebuffer
*/

#include <stdlib.h>

#include "struct/framebuffer.h"

framebuffer_t *framebuffer_create(unsigned int width, unsigned int height)
{
    framebuffer_t *framebuff = malloc(sizeof(framebuffer_t));
    
    framebuff->width = width;
    framebuff->height = height;
    framebuff->pixels = malloc(width * height * 4);

    return framebuff;
}

void framebuffer_destroy(framebuffer_t *framebuff)
{
    free(framebuff->pixels);
    free(framebuff);
}