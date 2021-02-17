/*
** EPITECH PROJECT, 2020
** SVv2
** File description:
** color
*/

#include <SFML/Graphics.h>
#include <stdlib.h>

#include "struct/framebuffer.h"
#include "sv.h"

sfColor color(int r, int g, int b, int a)
{
    sfColor c;

    c.r = r;
    c.g = g;
    c.b = b;
    c.a = a;

    return c;
}

sfColor random_color(int booll)
{
    sfColor c;

    c.r = random_point(255);
    c.g = random_point(255);
    c.b = random_point(255);
    c.a = 255;

    if (booll == 1)
        c.a = random_point(255);

    return c;
}