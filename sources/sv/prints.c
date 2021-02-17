/*
** EPITECH PROJECT, 2020
** SVv2
** File description:
** presentation
*/

#include "../my_printf/my_printf.h"

void presentation(void)
{
    my_printf("1: Displays pixels in a random way, with random colours.\n");
    my_printf("2: Displays the squares randomly, with random colors with");
    my_printf(" the possibility to choose the width and height.\n");
    my_printf("  Action possible, press the key for:\n");
    my_printf("    Q: reduces the width,\n");
    my_printf("    Z: raises the height,\n");
    my_printf("    D: raises the width,\n");
    my_printf("    S: reduces the height.\n");
}

void error1(void)
{
    my_printf("./screensaver: bad arguments: 0 givent but is required.\n");
    my_printf("retry with -h\n");
}

void error2(void)
{
    my_printf("Only one argument is required.\n");
    my_printf("retry with -h\n");
}

void error3(void)
{
    my_printf("Argument does not exist, you can choose between 1 and 2.\n");
    my_printf("retry with -h\n");
}

void option(void)
{
    my_printf("animation rendering in a CSFML window.\n\n");
    my_printf("USAGE\n");
    my_printf("  ./my_screensaver [OPTIONS] animation_id\n");
    my_printf("    animation_id   ID of the animation to process");
    my_printf("between 1 and 2).\n\n");
    my_printf("OPTIONS\n");
    my_printf("  -d\t\tprint the description of all the animations");
    my_printf(" and quit.\n");
    my_printf("  -h\t\tprint the usage and quit.\n\n");
    my_printf("");
    my_printf("USER INTERACTIONS\n");
    my_printf("  LEFT_ARROW\tswitch to the previous animation.\n");
    my_printf("  RIGHT_ARROW\tswitch to the next animation.\n");
    my_printf("  ESCAPE\tclose a window.\n");
}