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

char *nbr_to_str(int nb)
{
    char *str = malloc(sizeof(char) * 12);
    char *score = "Score : 000";
    float nb_float = (float)nb;
    int nb_int = 0;

    for (int i = 0; score[i] != '\0'; i++) {
        str[i] = score[i];
    }
    nb_float = nb_float / 100;
    for (int i = 8; i < 11; i++) {
        str[i] = (int)nb_float + '0';
        nb_int = (int)nb_float;
        nb_float = nb_float - nb_int;
        nb_float *= 10;
    }
    str[11] = '\0';
    return str;
}

display_t score(display_t DS)
{
    DS.score_str = nbr_to_str(DS.killed_duck);
    printf("DS killed duck = %d\n", DS.killed_duck);
    printf("score = %s\n", DS.score_str);
    sfText_setFont(DS.score, DS.font);
    sfText_setString(DS.score, DS.score_str);
    free(DS.score_str);
    return DS;
}
