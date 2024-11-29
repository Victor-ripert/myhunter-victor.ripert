/*
** EPITECH PROJECT, 2024
** my_hunter
** File description:
** game
*/
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/System/Clock.h>
#include <stdlib.h>
#include <stdio.h>
#include "hunter.h"
#include "structure_hunter.h"

display_t score(display_t DS)
{
    sprintf(DS.score_str, "Score : %d", DS.killed_duck);
    sfText_setFont(DS.score, DS.font);
    sfText_setString(DS.score, DS.score_str);
    return DS;
}
