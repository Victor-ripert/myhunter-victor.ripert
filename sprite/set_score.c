/*
** EPITECH PROJECT, 2024
** analyse_events
** File description:
** analyse events
*/
#include <SFML/Graphics.h>
#include <stdlib.h>
#include "hunter.h"

sfText *set_score(sfText *score)
{
    sfVector2f pos = {50, 50};

    score = sfText_create();
    //sfText_setFont(score, FONT);
    sfText_setCharacterSize(score, 30);
    sfText_setPosition(score, pos);
    return score;
}
