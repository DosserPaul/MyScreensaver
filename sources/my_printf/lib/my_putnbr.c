/*
** EPITECH PROJECT, 2020
** my_put_nbr
** File description:
** my_put_nbr
*/

void my_putchar(char c);

int my_putnbr(int nb)
{
    if (nb == 0) {
        my_putchar('0');
        return (0);
    }
    if (nb < 0) {
        nb = -nb;
        nb = nb % 10;
        my_putchar('-');
        my_putchar(nb + '0');
    } else if (nb > 0 && nb <= 9) {
        my_putchar(nb + '0');
        return (0);
    } else {
        my_putnbr(nb / 10);
        nb = (nb % 10);
        my_putchar(nb + '0');
        return (0);
    }
}