/*
** EPITECH PROJECT, 2024
** my
** File description:
** my
*/
#include <SFML/Graphics.h>

#ifndef FILE_H
    #define FILE_H
int my_hunter();
typedef struct mouse_pos_s {
    int x;
    int y;
} mouse_pos_t;
typedef struct duck_gestion_s {
    sfClock *clock_duck_movement;
    sfTime time_duck_movement;
    sfClock *clock_duck_animation;
    sfTime time_anim;
    sfIntRect rect_duck_texture;
    int speed;
} duck_gestion_t;
void close_window(sfRenderWindow *window);
sfIntRect move_rect(sfIntRect rect);
sfIntRect clock_animation(sfIntRect rect, sfTime time_anim, sfClock *clock);
sfSprite *duck_movement(sfSprite *sprite, sfClock *clock_duck_movement, sfTime time_duck_movement, int speed);
sfIntRect set_rect(sfIntRect rect);
sfSprite *set_sprite(sfSprite *sprite, sfTexture *texture);
sfSprite *set_background(sfSprite *sprite, sfTexture *texture);
sfTexture *set_texture(sfTexture *texture);
int error_duck(sfTexture *texture, sfSprite *sprite, sfRenderWindow *window);
#endif /* FILE_H */
