/*
** EPITECH PROJECT, 2020
** int_to_binary
** File description:
** int to binary
*/

#include <stdlib.h>
#include "../my_printf.h"

static int countm(int nb)
{
    int i = 0;
    int rest = 0;

    for (i = 0; nb != 0; i++) {
        rest = nb;
        rest = rest % 2;
        nb = nb / 2;
    }

    return i;
}

void decimal_to_binary(int nb)
{
    int nb_char = countm(nb);
    char *binary = malloc(sizeof(char) * (nb_char + 1));
    int rest = 0;
    int i;
    for (i = 0; i != nb_char; i++) {
        rest = nb;
        rest %= 2;
        nb /= 2;
        binary[i] = rest + '0';
    }
    binary[i] = '\0';

    binary = revers(binary);
    my_putstr(binary);
    free(binary);
}
