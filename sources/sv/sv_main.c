/*
** EPITECH PROJECT, 2020
** SVv2
** File description:
** sv_main
*/

#include <SFML/Graphics.h>

#include "struct/framebuffer.h"
#include "sv.h"

static void choice(int nb, all_t all, framebuffer_t *framebuffer)
{
    if (nb == 1) {
        sf_screensaver1(all, framebuffer);
    }
    if (nb == 2) {
        sf_screensaver2(all, framebuffer);
    }
}

int sv_main(int nb)
{
    all_t all = all_structs();

    if (all.error == 84)
        return 84;

    framebuffer_t *framebuffer;
    framebuffer = framebuffer_create(800, 600);

    sfSprite_setTexture(all.sprite, all.texture, sfTrue);
    sfRenderWindow_setFramerateLimit(all.window, 30);

    choice(nb, all, framebuffer);

    sf_screensaver1(all, framebuffer);
    sf_clear(all, framebuffer);
}