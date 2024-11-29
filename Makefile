##
## EPITECH PROJECT, 2024
## Makefile
## File description:
## make units tests
##

SRC =	main.c\
	my_hunter.c\
	window/structure_init.c	\
	window/display.c	\
	window/score.c	\
	event/analyse_events.c\
	event/manage_mouse_click.c	\
	event/close_window.c	\
	event/resize_window.c	\
	sprite/animation/move_rect.c	\
	sprite/animation/clock_animation.c	\
	sprite/set_rect.c	\
	sprite/set_texture.c	\
	sprite/set_sprite.c	\
	sprite/set_background.c	\
	sprite/set_score.c	\
	moving/duck_movement.c	\
	moving/duck_rules.c	\
	moving/duck_shoot.c	\
	error_duck/error_duck.c

NAME	=	my_hunter

OBJ	=	$(SRC:.c=.o)

all:		$(NAME)

GRAPHIC = -l csfml-graphics

WINDOW = -l csfml-window

SYSTEM = -l csfml-system

$(NAME):
	gcc -o $(NAME) $(SRC) $(WINDOW) $(GRAPHIC) $(SYSTEM) -I./include

clean:
	rm -f $(NAME)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

clean_all: fclean
	cd src && make fclean && cd ..
