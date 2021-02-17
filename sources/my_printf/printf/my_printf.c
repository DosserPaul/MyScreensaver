/*
** EPITECH PROJECT, 2020
** my_printf.c
** File description:
** my printf
*/

#include <stdarg.h>
#include "../my_printf.h"

static void numberr(char s, va_list number_list)
{
    if (s == 'i' || s == 'd')
        my_putnbr(va_arg(number_list, int));
    if (s == 'c')
        my_putchar(va_arg(number_list, int));
    if (s == 'u')
        my_put_unnbr(va_arg(number_list, unsigned int));
    if (s == 'o')
        decimal_to_octal(va_arg(number_list, int));
    if (s == 'b')
        decimal_to_binary(va_arg(number_list, int));
    if (s == 'x')
        decimal_to_hex(va_arg(number_list, int));
    if (s == 'X')
        decimal_to_hexm(va_arg(number_list, int));
}

static void no_number(char s, va_list no_number_list)
{
    if (s == 's')
        my_putstr(va_arg(no_number_list, char *));
    if (s == '%')
        my_putchar('%');
}

void my_printf(char *s, ...)
{
    va_list printf_list;
    va_start(printf_list, s);
    int i = 0;
    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] != '%')
            my_putchar(s[i]);
        
        if (s[i] == '%') {
            i++;
            if (s[i] == 'i' || s[i] == 'd' || s[i] == 'o' || s[i] == 'X')
                numberr(s[i], printf_list);
            if (s[i] == 'l')
                my_putlongnbr(va_arg(printf_list, long int));
            if (s[i] == 's' || s[i] == '%')
                no_number(s[i], printf_list);
        }
    }
    va_end(printf_list);
}
