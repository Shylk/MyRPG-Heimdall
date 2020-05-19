/*
** EPITECH PROJECT, 2019
** check_pixel_color
** File description:
** contains all loop game functions
*/

#include "include/my.h"

int check_left(all_t *all)
{
    for (int i = 12; i <= 50; i++) {
        if (!(CAVE))
            all->map->pixel = sfImage_getPixel(IMG, X - 34, Y + i);
        else
            all->map->pixel = sfImage_getPixel(TAB, X - 34, Y + i);
        if (R == 254 && G == 0 && B == 0)
            return (84);
    }
    return (0);
}

int check_right(all_t *all)
{
    for (int i = 12; i <= 50; i++) {
        if (!(CAVE))
            all->map->pixel = sfImage_getPixel(IMG, X + 34, Y + i);
        else
            all->map->pixel = sfImage_getPixel(TAB, X + 34, Y + i);
        if (R == 254 && G == 0 && B == 0)
            return (84);
    }
    return (0);
}

int check_up(all_t *all)
{
    for (int i = -28; i <= 28; i++) {
        if (!(CAVE))
            all->map->pixel = sfImage_getPixel(IMG, X + i, Y + 6);
        else
            all->map->pixel = sfImage_getPixel(TAB, X + i, Y + 6);
        if (R == 254 && G == 0 && B == 0)
            return (84);
    }
    return (0);
}

int check_down(all_t *all)
{
    for (int i = -28; i <= 28; i++) {
        if (!(CAVE))
            all->map->pixel = sfImage_getPixel(IMG, X + i, Y + 56);
        else
            all->map->pixel = sfImage_getPixel(TAB, X + i, Y + 56);
        if (R == 254 && G == 0 && B == 0)
            return (84);
    }
    return (0);
}
