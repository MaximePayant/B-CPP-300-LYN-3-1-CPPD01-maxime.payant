/*
** ShipWreck engine, 2020
** ex05.h
*/

#ifndef EX05_H
#define EX05_H

#include <stdint.h>

typedef union foo_s
{
    struct {
        uint16_t foo;
        union {
            uint16_t foo;
            uint16_t bar;
        } bar;
    } foo;
    uint32_t bar;
} foo_t;

#endif // EX05_H