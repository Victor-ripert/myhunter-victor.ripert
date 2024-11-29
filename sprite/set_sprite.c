/*
** EPITECH PROJECT, 2024
** analyse_events
** File description:
** analyse events
*/
#include <SFML/Graphics.h>
#include <stdlib.h>
#include "hunter.h"

sfSprite *set_sprite(sfSprite *sprite, sfTexture *texture)
{
    sfVector2f pos = {50, 50};
    sfVector2f scale = {1, 1};

    texture = sfTexture_createFromFile("sprite/duck_sprite.png", NULL);
    sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setScale(sprite, scale);
    sfSprite_setPosition(sprite, pos);
    return sprite;
}
