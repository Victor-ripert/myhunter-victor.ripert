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
#include "structure_hunter.h"

int duck_shoot(display_t DS)
{
    sfVector2f sprite_position = sfSprite_getPosition(DS.sprite);
    sfVector2f new_position = {0, 3000};

    if (DS.mouse_pos.x >= sprite_position.x && DS.mouse_pos.x <= sprite_position.x + 110 && DS.mouse_pos.y >= sprite_position.y && DS.mouse_pos.y <= sprite_position.y + 110) {
        printf("Duck reach at (%f, %f)\n", DS.mouse_pos.x, DS.mouse_pos.y);
        sfSprite_setPosition(DS.sprite, new_position);
        return 1;
    }
    return 0;
}
