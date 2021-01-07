/*
** EPITECH PROJECT, 2021
** CPP_D01
** File description:
** koalatchi.c
*/

#include <stdio.h>

#include <stdint.h>

const char *type_tab[3] =
{
    "Notification",
    "Request",
    "Error"
};

const char *dom_tab[3] =
{
    "Nutrition",
    "Entertainment",
    "Education"
};

const char *mes_tab[3][3][3] =
{
    {{"Eat", "Defecate", NULL},
    {"Hungry", "Thirsty", NULL},
    {"Indigestion", "Starving", NULL}},
    {{"Ball", "Bite", NULL},
    {"NeedAffection", "WannaPlay", "Hug"},
    {"Bored", NULL, NULL}},
    {{"TeachCoding", "BeAwesome", NULL},
    {"FeelStupid", NULL, NULL},
    {"BrainDamage", NULL, NULL}}
};

int get_type(uint32_t header)
{
    int test = header >> 24 & 0b11111111;
    test = (test == 4 ? 3 : test);
    return (test - 1);
}

int get_domain(uint32_t header)
{
    int test = header >> 16 & 0b11111111;
    test = (test == 4 ? 3 : test);
    return (test - 1);
}

int get_message(uint32_t header)
{
    int test = header & 0b11111111;
    test = (test == 4 ? 3 : test);
    return (test - 1);
}

int prettyprint_message(uint32_t header, const char *content)
{
    int domain = get_domain(header);
    int type = get_type(header);
    int message = get_message(header);

    if (type < 0 || domain < 0 || message < 0)
        return (printf("Invalid message.\n"), 1);
    if (content != NULL)
        printf("%s %s %s %s\n", type_tab[type], dom_tab[domain]
        , mes_tab[domain][type][message], content);
    else
        printf("%s %s %s\n", type_tab[type], dom_tab[domain]
        , mes_tab[domain][type][message]);
    return (0);
}