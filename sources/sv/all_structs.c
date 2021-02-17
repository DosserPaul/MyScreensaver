/*
** EPITECH PROJECT, 2020
** screensaver
** File description:
** all
*/

#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics/Texture.h>
#include <SFML/Graphics/Sprite.h>

#include "struct/framebuffer.h"

#include "sv.h"

all_t all_structs()
{
    sfVideoMode mode = {800, 600, 32};
    sfRenderWindow  *window = sfRenderWindow_create(mode, "window", 
                              sfDefaultStyle, NULL);
    sfTexture       *texture = sfTexture_create(800, 600);
    sfSprite        *sprite = sfSprite_create();
    sfEvent         event;

    int exit = 0;

    if (!texture || !window)
        exit = 84;

    all_t all;
    all.window      = window;
    all.texture     = texture;
    all.sprite      = sprite;
    all.event       = event;
    all.error       = exit;

    return all;
}