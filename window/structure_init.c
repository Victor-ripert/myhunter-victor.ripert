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

display_t structure_init(void)
{
    display_t structure;

    structure.mode.width = 1920;
    structure.mode.height = 1080;
    structure.mode.bitsPerPixel = 32;
    structure.texture = set_texture(structure.texture);
    structure.sprite = set_sprite(structure.sprite, structure.texture);
    structure.background_texture = set_texture(structure.background_texture);
    structure.background = set_background(structure.background, structure.background_texture);
    structure.clock = sfClock_create();
    structure.clock_duck_movement = sfClock_create();
    structure.rect = set_rect(structure.rect);
    structure.start_pos.x = 0;
    structure.start_pos.y = 300;
    structure.missed_duck = 0;
    structure.killed_duck = 1;
    structure.font = sfFont_createFromFile("sprite/font/arial.ttf");
    structure.score = set_score(structure.score, structure.font);
    return structure;
}
