/*
** ShipWreck engine, 2020
** drawing.c
*/

#include "bitmap.h"
#include "drawing.h"

void draw_square(uint32_t **img, const point_t *origin
, size_t size, uint32_t color)
{
    for (uint32_t x = origin->x; x < size; x += 1)
        for (uint32_t y = origin->y; y < size; y += 1)
            img[x][y] = color;
}