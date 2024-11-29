/*
** EPITECH PROJECT, 2024
** close_window.c
** File description:
** colse the window when called
*/
#include <SFML/Graphics.h>
#include <stdlib.h>
#include "structure_hunter.h"
display_t resize_window(display_t DS)
{
    sfVector2u big_size = {1920, 1080};
    sfVector2f small_size = {800, 600};

    printf("Window resized !\n");
    if (DS.mode.height == 800 && DS.mode.width == 600)
    {
        sfRenderWindow_setSize(DS.window, big_size);
    }
    if (DS.mode.height == 1920 && DS.mode.width == 1080)
    {
        sfRenderWindow_setSize(DS.window, big_size);
    }
    return DS;
}
