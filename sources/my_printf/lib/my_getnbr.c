/*
** EPITECH PROJECT, 2020
** my_getnbr
** File description:
** my_getnbr
*/

int func(int j, int i, char *str)
{
    int nb = 0;

    while (str[i] != '\0') {
        if ((str[i] >= 'A' && str[i] <= 'z') && str[i] != '-'){
            return (0);
        } else if (str[i] >= '0' && str[i] <= '9') {
            nb = nb * 10;
            nb = nb + str[i] - '0';
            i++;
        } else {
            return (nb * j);
        }
    }
    return (nb);
}

int my_getnbr(char *str)
{

    int j = 1;
    int i = 0;

    for (;str[i] == '+' || str[i] == '-'; i++) {
        if (str[i] == '-') {
            j = j * -1;
        }
    }

    int nb = func(j, i, str);

    return (nb * j);
}