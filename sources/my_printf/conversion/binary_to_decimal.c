/*
** EPITECH PROJECT, 2020
** binary_to_deciaml
** File description:
** ninary to deciaml
*/

static int power(int nb, int p)
{
    if (p == 0) {
        return (1);
    }
    if (p > 1) {
        nb = nb * power(nb, (p - 1));
    }
    return (nb);
}

int binary_to_decimal(long long int nb)
{
    int decimal = 0;
    int i = 0;
    int tmp;
    int nb_power;

    while (nb != 0) {
        nb_power = power(2, i);
        tmp = nb % 10;
        nb /= 10;
        decimal += tmp * nb_power;
        i++;
    }

    return decimal;
}