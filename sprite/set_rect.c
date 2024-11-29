/*
** EPITECH PROJECT, 2024
** analyse_events
** File description:
** analyse events
*/
#include <SFML/Graphics.h>
#include <stdlib.h>
#include "hunter.h"

sfIntRect set_rect(sfIntRect rect)
{
    rect.top = 0;
    rect.left = 0;
    rect.height = 110;
    rect.width = 110;
    return rect;
}
