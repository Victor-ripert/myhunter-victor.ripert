/*
** EPITECH PROJECT, 2024
** analyse_events
** File description:
** analyse events
*/
#include <SFML/Graphics.h>
#include <stdlib.h>
#include "hunter.h"

sfIntRect clock_animation(sfIntRect rect, sfTime time_anim, sfClock *clock)
{
    time_anim = sfClock_getElapsedTime(clock);
    if (time_anim.microseconds >= 300000) {
        time_anim.microseconds = 0;
        sfClock_restart(clock);
        rect = move_rect(rect);
    }
    return rect;
}
