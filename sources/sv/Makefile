##
## EPITECH PROJECT, 2020
## Make file my_printf
## File description:
## my_printf
##

NAME = libsv.a

SRC =	prints.c							\
		all_structs.c						\
		sf_clear.c							\
		framebuffer.c						\
		screensavers/sf_screensaver1.c		\
		screensavers/sf_event1.c			\
		screensavers/sf_screensaver2.c		\
		screensavers/sf_event2.c			\
		screensavers/sf_screensaver3.c		\
		random_point.c						\
		color.c								\
		put_pixel.c							\
		dont_know.c							\
		draw_square.c						\
		sv_main.c

OBJ = $(SRC:.c=.o)

HEADER = sv.h

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	cp ../../other/$(HEADER) ../../includes/
	rm -f $(OBJ)

fclean:
	rm -f $(NAME)
	rm -f ../$(NAME)
	rm ../../includes/$(HEADER)

clean:
	rm -f $(OBJ)

re:	fclean all