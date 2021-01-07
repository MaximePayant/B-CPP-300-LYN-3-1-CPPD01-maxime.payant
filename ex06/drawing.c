/*
** EPITECH PROJECT, 2021
** CPP_D01
** File description:
** drawing.c
*/

#include "bitmap.h"
#include "drawing.h"

void draw_square(uint32_t **img, const point_t *origin
, size_t size, uint32_t color)
{
    for (uint32_t x = 0; x < size; x += 1)
        for (uint32_t y = 0; y < size; y += 1)
            img[origin->x + x][origin->y + y] = color;
}