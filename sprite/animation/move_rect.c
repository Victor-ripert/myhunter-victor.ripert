/*
** EPITECH PROJECT, 2024
** analyse_events
** File description:
** analyse events
*/
#include <SFML/Graphics.h>
#include <stdlib.h>
#include "hunter.h"

sfIntRect move_rect(sfIntRect rect)
{
    rect.left += 110;
	if (rect.left >= 330) {
	    rect.left = 0;
	}
    return rect;
}
