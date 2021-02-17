/*
** EPITECH PROJECT, 2020
** my_putstr
** File description:
** my_putstr
*/


#include <unistd.h>

static void my_putchar_error(char c)
{
    write (2, &c, 1);
}

char my_putstr_error(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        my_putchar_error(str[i]);
    }
}