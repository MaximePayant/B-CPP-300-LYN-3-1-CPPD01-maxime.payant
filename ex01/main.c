/*
** C++ Seminar Day01, 2020
** Ex01 menger
** main.c
*/

#include "menger.h"

bool isNumber(char *str, bool canIsNeg)
{
    int offset = 0;

    if (str[0] == '-' && canIsNeg)
        offset = 1;
    for (int ctr = offset; str[ctr] != '\0'; ctr++)
        if (str[ctr] < '0' || str[ctr] > '9')
            return (false);
    return (true);
}

bool checkError(int ac, char **av)
{
    float lol = atoi(av[1]) / pow(3, atoi(av[2]));

    if (ac != 3)
        return (true);
    if (!isNumber(av[1], false) || !isNumber(av[2], true))
        return (true);
    if (atoi(av[1]) <= 0 || (lol > 0 && lol < 1))
        return (true);
    return (false);
}

int main(int ac, char **av)
{
    if (checkError(ac, av))
        return (84);
    menger(atoi(av[1]), atoi(av[2]), (int[2]){0, 0}, (int[2]){0, 0});
    return (0);
}