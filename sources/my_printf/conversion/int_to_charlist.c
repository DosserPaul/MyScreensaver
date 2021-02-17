/*
** EPITECH PROJECT, 2020
** int_to_charlist.c
** File description:
** Int to char*
*/

#include <stdlib.h>
#include "../my_printf.h"

static int count(int nb)
{
    int count = 0;
    int tmp;
    while (nb > 0) {
        tmp = nb % 10;
        nb = nb / 10;
        count++;
    }
    return count;
}

char *int_to_charlist(int nb)
{
    int nb_digit = count(nb);
    char *char_int = malloc(sizeof(char) * (nb_digit + 1));
    int tmp;

    for (int i = 0; nb > 0; i++) {
        tmp = nb % 10;
        nb = nb / 10;
        char_int[i] = tmp + '0';
    }

    char *revers = malloc(sizeof(char) * (nb_digit));
    int j = 0;

    while (j < nb_digit + 1) {
        revers[j] = char_int[nb_digit - 1 - j];
        j++;
    }
    revers[j] = '\0';
    free(char_int);
    return revers;
}