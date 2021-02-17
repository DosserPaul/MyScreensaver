/*
** EPITECH PROJECT, 2020
** SVv2
** File description:
** dont_know
*/

#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics/Texture.h>

#include "struct/framebuffer.h"
#include "sv.h"

void dont_know(all_t all, framebuffer_t *framebuffer)
{
    sfRenderWindow_clear(all.window, color(24, 26, 31, 255));
    sfTexture_updateFromPixels(all.texture, framebuffer->pixels,
                               800, 600, 0, 0);
    sfRenderWindow_drawSprite(all.window, all.sprite, NULL);
    sfRenderWindow_display(all.window);
}