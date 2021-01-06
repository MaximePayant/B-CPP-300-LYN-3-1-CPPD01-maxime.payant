/*
** C++ Seminar Day01, 2020
** Ex01 menger
** menger.c
*/

#include "menger.h"

void menger(int size, int level, int xOffset, int yOffset)
{
    if (size / 3 <= 0 || level == 0)
        return;
    printf("%03i ", size / 3);
    printf("%03i ", size / 3 + xOffset);
    printf("%03i\n", size / 3 + yOffset);
    for (int x = 0; x < size ; x += size / 3)
        for (int y = 0; y < size; y += size / 3)
            menger(size / 3, level - 1, x, y);
}