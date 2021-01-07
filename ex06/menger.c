/*
** EPITECH PROJECT, 2021
** CPP_D01
** File description:
** menger.c
*/

#include "drawing.h"
#include "menger.h"

static uint32_t take_color(int level)
{
    uint32_t color;
    unsigned char *byts = (unsigned char *)&color;

    byts[0] = 0;
    byts[1] = 0xFF / level;
    byts[2] = 0xFF / level;
    byts[3] = 0xFF / level;
    #if __BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__
    color = __bswap_32(color);
    #endif
    return (color);
}

void menger(int param[2], int pos[2], int offset[2], unsigned **img)
{
    point_t point = {param[SIZE] / 3 + pos[X] + offset[X]
                    , param[SIZE] / 3 + pos[Y] + offset[Y]};

    if (param[SIZE] / 3 <= 0 || param[LEVEL] == 0
        || ((pos[X] >= param[SIZE] && pos[X] < param[SIZE] * 2)
        && (pos[Y] >= param[SIZE] && pos[Y] < param[SIZE] * 2)))
        return;
    draw_square(img, &point, param[SIZE] / 3, take_color(param[LEVEL]));
    for (int x = 0; x < param[SIZE]; x += param[SIZE] / 3)
        for (int y = 0; y < param[SIZE]; y += param[SIZE] / 3)
            menger((int[2]){param[SIZE] / 3, param[LEVEL] - 1}, (int[2]){x, y}
            , (int[2]){pos[X] + offset[X], pos[Y] + offset[Y]}, img);
}