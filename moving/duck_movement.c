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

sfSprite *duck_movement(sfSprite *sprite, sfClock *clock_duck_movement, sfTime time_duck_movement, int speed)
{
    time_duck_movement = sfClock_getElapsedTime(clock_duck_movement);
    sfVector2f movement;
    float velocity = 10 / speed;

    movement.x = 5 + speed;
    movement.y = 0;
    if  (time_duck_movement.microseconds >= 1) {
        sfSprite_move(sprite, movement);
        sfClock_restart(clock_duck_movement);
    }
    return sprite;
}
