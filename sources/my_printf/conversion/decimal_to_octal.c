/*
** EPITECH PROJECT, 2020
** int_to_octal
** File description:
** int_to_octal
*/

#include <stdlib.h>
#include "../my_printf.h"

static int count(int nb)
{
    int nb_count = 0;
    int octal;

    for (int i = 0; nb != 0; i++) {
        octal = nb;
        octal %= 8;
        nb /= 8;
        nb_count++;
    }

    return nb_count;
}

void decimal_to_octal(int nb)
{
    int len = count(nb);
    char *nb_octal = malloc(sizeof(char) * (len + 1));
    int octal = 0;
    int i;

    if (nb <= 6) {
        my_putnbr(nb);
    } else {
        for (i = 0; nb != 0; i++) {
            octal = nb;
            octal %= 8;
            nb /= 8;
            nb_octal[i] = octal + '0';
        }
    }
    nb_octal[i] = '\0';

    char *str = revers(nb_octal);
    my_putstr(str);
}
