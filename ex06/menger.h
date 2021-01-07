/*
** EPITECH PROJECT, 2021
** CPP_D01
** File description:
** menger.h
*/

#ifndef MENGER_H
#define MENGER_H

#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>

#define X 0
#define Y 1
#define SIZE 0
#define LEVEL 1

void menger(int param[2], int xOffset[2], int yOffset[2], unsigned **img);

#endif // MENGER_H