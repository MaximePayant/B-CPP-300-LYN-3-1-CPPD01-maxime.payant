/*
** EPITECH PROJECT, 2021
** CPP_D01
** File description:
** drawing.h
*/

#ifndef DRAWING_H
#define DRAWING_H

#include <stdint.h>
#include <stddef.h>

typedef struct point_s
{
    uint32_t x;
    uint32_t y;
} point_t;

void draw_square(uint32_t **img, const point_t *origin
, size_t size, uint32_t color);

#endif // DRAWING_H