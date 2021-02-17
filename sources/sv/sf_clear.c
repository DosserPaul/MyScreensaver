/*
** EPITECH PROJECT, 2020
** screensaver
** File description:
** sf_clear
*/

#include "sv.h"
#include "struct/framebuffer.h"

void sf_clear(all_t all, framebuffer_t *framebuffer)
{
    framebuffer_destroy(framebuffer);
    sfSprite_destroy(all.sprite);
    sfTexture_destroy(all.texture);
    sfRenderWindow_destroy(all.window);
}