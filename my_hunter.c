/*
** EPITECH PROJECT, 2024
** my_hunter
** File description:
** game
*/
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/System/Clock.h>
#include <stdlib.h>
#include <stdio.h>
#include "hunter.h"
#include "structure_hunter.h"

int my_hunter()
{
    display_t DS = structure_init();

    DS.window = sfRenderWindow_create(DS.mode, "My Hunter", sfResize | sfClose, NULL);
    sfRenderWindow_setFramerateLimit(DS.window, 60);
    if (error_duck(DS.texture, DS.sprite, DS.window) == EXIT_FAILURE) {
        return EXIT_FAILURE;
    }
    display(DS);
    sfClock_destroy(DS.clock_duck_movement);
    sfClock_destroy(DS.clock);
    sfSprite_destroy(DS.sprite);
    sfTexture_destroy(DS.texture);
    sfRenderWindow_destroy(DS.window);
    return EXIT_SUCCESS;
}
