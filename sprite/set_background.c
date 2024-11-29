/*
** EPITECH PROJECT, 2024
** analyse_events
** File description:
** analyse events
*/
#include <SFML/Graphics.h>
#include <stdlib.h>
#include "hunter.h"

sfSprite *set_background(sfSprite *sprite, sfTexture *texture)
{
    sfVector2f pos = {-1, -1};
    sfVector2f scale = {0.65, 0.51};

    texture = sfTexture_createFromFile("sprite/background.jpg", NULL);
    sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setScale(sprite, scale);
    sfSprite_setPosition(sprite, pos);
    return sprite;
}
