/*
** EPITECH PROJECT, 2020
** my_putstr
** File description:
** my_putstr
*/

void my_putchar(char c);

char my_putstr(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        my_putchar(str[i]);
    }
}