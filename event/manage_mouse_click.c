/*
** EPITECH PROJECT, 2024
** manage_mouse_click
** File description:
** manage mouse click sfMouseButtonEvent event
*/
#include <SFML/Graphics.h>
#include "hunter.h"
#include <stdio.h>
#include "structure_hunter.h"

//DS.event.mouseButton.x, DS.event.mouseButton.y

display_t manage_mouse_click(display_t DS)
{
    int x = DS.event.mouseButton.x;
    int y = DS.event.mouseButton.y;

    DS.mouse_pos.x = x;
    DS.mouse_pos.y = y;
    printf("Mouse x=%d; y=%d;\n", x, y);
    return DS;
}
