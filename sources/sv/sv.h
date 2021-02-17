/*
** EPITECH PROJECT, 2020
** SVv2
** File description:
** sv
*/

#include "struct/framebuffer.h"

#ifndef SV_H_
#define SV_H_

void presentation(void);
void error1(void);
void error2(void);
void error3(void);
void option(void);
framebuffer_t *framebuffer_create(unsigned int width, unsigned int height);
void framebuffer_destroy(framebuffer_t *framebuff);
all_t all_structs();
void sf_clear(all_t all, framebuffer_t *framebuffer);
void sf_screensaver1(all_t all, framebuffer_t *framebuffer);
void sf_screensaver2(all_t all, framebuffer_t *framebuffer);
void sf_screensaver3(all_t all, framebuffer_t *framebuffer);
int random_point(int point);
sfColor color(int r, int g, int b, int a);
sfColor random_color(int booll);
void put_pixel(framebuffer_t *framebuff, unsigned x, unsigned y,
               sfColor color);
void event1(all_t all, framebuffer_t *framebuffer);
int event2(all_t all, framebuffer_t *framebuffer);
void dont_know(all_t all, framebuffer_t *framebuffer);
void draw_square(framebuffer_t *framebuffer, unsigned int with, 
                 unsigned int height, sfColor c);
int sv_main(int nb);

#endif /* !SV_H_ */