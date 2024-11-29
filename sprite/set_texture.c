/*
** EPITECH PROJECT, 2024
** analyse_events
** File description:
** analyse events
*/
#include <SFML/Graphics.h>
#include <stdlib.h>
#include "hunter.h"

sfTexture *set_texture(sfTexture *texture)
{
    texture = sfTexture_createFromFile("sprite/duck_sprite.png", NULL);
    return texture;
}
