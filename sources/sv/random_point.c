/*
** EPITECH PROJECT, 2020
** screensaver
** File description:
** random
*/

#include <stdlib.h>

int random_point(int point)
{
    int nb = 0;

    for (int i = 1; i <= point; i++) {
        nb = rand() % point + 1;
    }

    return nb;
}