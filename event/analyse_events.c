/*
** EPITECH PROJECT, 2024
** analyse_events
** File description:
** analyse events
*/
#include <SFML/Graphics.h>
#include <stdlib.h>
#include "hunter.h"
#include "structure_hunter.h"

display_t analyse_events(display_t DS)
{
    if (DS.event.type == sfEvtClosed) {
	    close_window(DS.window);
    }
    if (DS.event.type == sfEvtResized) {
        DS = resize_window(DS);
    }
    if (DS.event.type == sfEvtMouseButtonPressed) {
	DS = manage_mouse_click(DS);
    }
    return DS;
}
