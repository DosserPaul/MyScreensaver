/*
** EPITECH PROJECT, 2020
** framebuffer
** File description:
** framebuffer
*/

#include <SFML/Graphics/Color.h>
#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics/Texture.h>
#include <SFML/Graphics/Sprite.h>

#ifndef FRAMEBUFFER_H_
#define FRAMEBUFFER_H_

typedef struct framebuffer {
    sfUint8 *pixels;
    unsigned int width;
    unsigned int height;
} framebuffer_t;

typedef struct all
{
    sfRenderWindow  *window;
    sfTexture       *texture;
    sfSprite        *sprite;
    sfEvent         event;
    int error;
} all_t;

#endif /* FRAMEBUFFER_H_ */