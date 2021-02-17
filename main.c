/*
** EPITECH PROJECT, 2020
** SVv2
** File description:
** main
*/

#include "sv.h"

static int choice(int ac, char **av)
{
    if (av[1][0] == '-' && av[1][1] == 'd')
        option();

    if (av[1][0] == '-' && av[1][1] == 'h')
        presentation();

    if (av[1][0] != '-') {
        int nb = av[1][0] - '0';

        if (nb >= 1 && nb <=  2)
            sv_main(nb);

        if (nb < 0 || nb > 2) {
            error3();
            return 84;
        }
    }

    return 0;    
}

int main(int ac, char **av)
{
    int result;

    if (ac < 2) {
        error1();
        return 84;
    }

    if (ac > 2) {
        error2();
        return 84;
    }

    if (ac == 2)
        result = choice(ac, av);
        return result;

    return 0;
}