/*
** EPITECH PROJECT, 2024
** close_window.c
** File description:
** colse the window when called
*/
#include <SFML/Graphics.h>
#include <stdlib.h>
void close_window(sfRenderWindow *window)
{
    sfRenderWindow_close(window);
}
