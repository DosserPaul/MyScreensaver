/*
** EPITECH PROJECT, 2020
** MY
** File description:
** Task02
*/


#ifndef MY_H_
#define MY_H_

void my_putchar(char c);
void my_putstr(char *str);
char my_putstr_error(char *str);
int my_putnbr(int nb);
int my_putlongnbr(long int nb);
int my_put_unnbr(unsigned int nb);
int my_strlen(char *str);
int my_getnbr(char *str);
char *revers(char *str);

//? Library printf

void my_printf(char *s, ...);

//* Function conversion

char *int_to_charlist(int nb);
void decimal_to_octal(int nb);
void decimal_to_binary(int nb);
int binary_to_decimal(long long int nb);
void decimal_to_hex(int nb);
void decimal_to_hexm(int nb);

//* Function number

void number(char s, int nb);
void nb(int nb);


#endif /* !MY_H_ */