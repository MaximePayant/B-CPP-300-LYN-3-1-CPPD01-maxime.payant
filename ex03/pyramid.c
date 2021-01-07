/*
** EPITECH PROJECT, 2021
** CPP_D01
** File description:
** pyramid.c
*/

int pyramid_path(int size, const int **map)
{
    int path[size];

    for (int lvl = 0; lvl < size; lvl++)
        path[lvl] = map[size - 1][lvl];
    for (int lvl = size - 2; lvl >= 0; lvl -= 1)
        for (int room = 0; room <= lvl; room += 1)
            path[room] = (path[room] < path[room + 1] ?
            map[lvl][room] + path[room] : map[lvl][room] + path[room + 1]);
    return (path[0]);
}