/*
** EPITECH PROJECT, 2024
** analyse_events
** File description:
** analyse events
*/
#include <SFML/Graphics.h>
#include <SFML/System/Clock.h>
#include <stdlib.h>
#include "hunter.h"

sfSprite *duck_gestion(sfSprite *sprite, duck_gestion_t *duck)
{
    sprite = duck_movement(sprite, duck->clock_duck_movement, duck->time_duck_movement, 10);
    duck->rect_duck_texture = clock_animation(duck->rect_duck_texture, duck->time_anim, duck->clock_duck_animation);
    sfSprite_setTextureRect(sprite, duck->rect_duck_texture);
    return sprite;
}
