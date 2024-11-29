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

int duck_rules(display_t DS)
{
    sfVector2f sprite_position = sfSprite_getPosition(DS.sprite);
    sfVector2f new_position = {0, 0};

    if (DS.mode.width == 800 && DS.mode.height == 600) {
        if (sprite_position.x > 800 || sprite_position.y > 600 || sprite_position.y < 0) {
            new_position.y = rand()%490;
            sfSprite_setPosition(DS.sprite, new_position);
            return 1;
        }
    }
    if (DS.mode.width == 1920 && DS.mode.height == 1080) {
        if (sprite_position.x > 1920 || sprite_position.y > 1080 || sprite_position.y < 0) {
            new_position.y = rand()%900;
            sfSprite_setPosition(DS.sprite, new_position);
            return 1;
        }
    }
    return 0;
}
