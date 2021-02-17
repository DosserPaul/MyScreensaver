/*
** EPITECH PROJECT, 2020
** int_to_hex.c
** File description:
** Converted in to hex
*/

#include <stdlib.h>
#include "../my_printf.h"

static int count(int nb)
{
    int nb_char;
    char decimal_to_hexa[100];
    int i = 0;
    int tmp  = 0;

    for (int i = 0; nb; i++) {
        tmp = nb % 16;

        if (tmp < 10) {
            decimal_to_hexa[i] = tmp + 48;
        } else {
            decimal_to_hexa[i] = tmp + 55;
        }
        nb /= 16;
        nb_char++;
    }

    return nb_char;
}

void decimal_to_hexm(int nb)
{
    int len = count(nb);
    int jsp;
    char *hex = malloc(sizeof(char) * (4 + 1));
    int i;

    for (i = 0; nb != 0; i++) {
        jsp = nb % 16;

        if (jsp < 10) {
            hex[i] = jsp + 48;
        } else {
            hex[i] = jsp + 55;
        }
        nb /= 16;
    }
    hex[i] = '\0';

    char *result = revers(hex);
    my_putstr(result);
    free(result);
    free(hex);
}