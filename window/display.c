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

int display(display_t DS)
{
	int shooter = 1;
    while (sfRenderWindow_isOpen(DS.window)) {
		DS.mouse_pos.x = 0;
		DS.mouse_pos.y = 0;
	    while (sfRenderWindow_pollEvent(DS.window, &DS.event)) {
	        DS = analyse_events(DS);
	    }
	    sfRenderWindow_clear(DS.window, sfBlack);
        DS.sprite = duck_movement(DS.sprite, DS.clock_duck_movement, DS.time_duck_movement, shooter);
        DS.rect = clock_animation(DS.rect, DS.time_anim, DS.clock);
		shooter += duck_shoot(DS);
		//DS = score(DS);
		printf("Shooter = %d\n", shooter);
		duck_rules(DS);
        sfSprite_setTextureRect(DS.sprite, DS.rect);
		sfRenderWindow_drawSprite(DS.window, DS.background, NULL);
	    sfRenderWindow_drawSprite(DS.window, DS.sprite, NULL);
		sfRenderWindow_drawText(DS.window, DS.score, NULL);
	    sfRenderWindow_display(DS.window);
    }
}
