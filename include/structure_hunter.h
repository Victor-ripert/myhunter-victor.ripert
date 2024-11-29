/*
** EPITECH PROJECT, 2024
** my
** File description:
** my
*/
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/System/Clock.h>
#include <stdlib.h>
#include <stdio.h>
#include "hunter.h"

#ifndef HUNTER_STRUCTURE_H
    #define HUNTER_STRUCTURE_H
typedef struct display_s {
    sfVideoMode mode;
    sfRenderWindow* window;
    sfTexture *texture;
    sfSprite *sprite;
    sfSprite *background;
    sfTexture *background_texture;
    sfEvent event;
    sfClock *clock;
    sfTime time_anim;
    sfClock *clock_duck_movement;
    sfTime time_duck_movement;
    sfIntRect rect;
    sfVector2f start_pos;
    sfVector2f duck_pos;
    int missed_duck;
    int killed_duck;
    sfVector2f mouse_pos;
    sfText *score;
    sfFont *font;
    char *score_str;
} display_t;
display_t structure_init(void);
int display(display_t DS);
int duck_rules(display_t DS);
display_t analyse_events(display_t DS);
display_t manage_mouse_click(display_t DS);
int duck_shoot(display_t DS);
display_t resize_window(display_t DS);
sfText *set_score(sfText *score);
display_t score(display_t DS);
#endif /* HUNTER_STRUCTURE_H */
