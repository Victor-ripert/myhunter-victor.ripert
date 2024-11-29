/*
** EPITECH PROJECT, 2024
** analyse_events
** File description:
** analyse events
*/
#include <SFML/Graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include "hunter.h"

int error_duck(sfTexture *texture, sfSprite *sprite, sfRenderWindow *window)
{
    if (!texture) {
        printf("Error: Texture not found\n");
        return EXIT_FAILURE;
    }
    if (!sprite) {
        printf("Error: Sprite not created\n");
        return EXIT_FAILURE;
    }
    if (!window) {
        printf("Error: Window not created\n");
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}
