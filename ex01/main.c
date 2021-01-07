/*
** EPITECH PROJECT, 2021
** CPP_D01
** File description:
** main.c
*/

#include "menger.h"

bool is_number(char *str, bool canIsNeg)
{
    int offset = 0;

    if (str[0] == '-' && canIsNeg)
        offset = 1;
    for (int ctr = offset; str[ctr] != '\0'; ctr++)
        if (str[ctr] < '0' || str[ctr] > '9')
            return (false);
    return (true);
}

bool check_error(int ac, char **av)
{
    float div;

    if (ac != 3)
        return (true);
    div = atoi(av[1]) / pow(3, atoi(av[2]));
    if (!is_number(av[1], false) || !is_number(av[2], true))
        return (true);
    if (atoi(av[1]) <= 0 || (div > 0 && div < 1))
        return (true);
    return (false);
}

int main(int ac, char **av)
{
    if (check_error(ac, av))
        return (84);
    menger(atoi(av[1]), atoi(av[2]), (int[2]){0, 0}, (int[2]){0, 0});
    return (0);
}