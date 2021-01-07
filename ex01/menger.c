/*
** EPITECH PROJECT, 2021
** CPP_D01
** File description:
** menger.c
*/

#include "menger.h"

void menger(int size, int level, int xOffset[2], int yOffset[2])
{
    if (size / 3 <= 0 || level == 0
        || ((xOffset[0] >= size && xOffset[0] < size * 2)
        && (yOffset[0] >= size && yOffset[0] < size * 2)))
        return;
    printf("%03i ", size / 3);
    printf("%03i ", size / 3 + xOffset[0] + xOffset[1]);
    printf("%03i\n", size / 3 + yOffset[0] + yOffset[1]);
    for (int x = 0; x < size; x += size / 3)
        for (int y = 0; y < size; y += size / 3)
            menger(size / 3, level - 1
            , (int[2]){x, xOffset[0]}, (int[2]){y, yOffset[0]});
}