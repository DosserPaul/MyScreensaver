/*
** EPITECH PROJECT, 2020
** reves
** File description:
** revers
*/

#include <stdlib.h>

#include "../my_printf.h"

char *revers(char *str)
{
    int i = 0;
    int nb_char = my_strlen(str);
    char *revers_char = malloc(sizeof(char) * (nb_char + 1));

    while (i < nb_char) {
        revers_char[i] = str[nb_char - 1 - i];
        i++;
    }
    revers_char[i] = '\0';

    return revers_char;
}