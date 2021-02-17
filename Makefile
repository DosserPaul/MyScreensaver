##
## EPITECH PROJECT, 2020
## Make file my_printf
## File description:
## my_printf
##

NAME	=	my_screensaver

SRC =	main.c

LIB	=	-L sources/sv/ -lsv -L sources/my_printf/ -lprintf -I includes

CSFML	=	-l csfml-graphics -l csfml-window

all:	start

start:
	$(MAKE) -C sources/my_printf/
	$(MAKE) -C sources/sv/
	gcc -o $(NAME) $(SRC) $(LIB) $(CSFML)

fclean:
	$(MAKE) fclean -C sources/my_printf/
	$(MAKE) fclean -C sources/sv/

clean:
	$(MAKE) clean -C sources/my_printf/
	$(MAKE) clean -C sources/sv/

re:
	$(MAKE) re -C sources/my_printf/
	$(MAKE) re -C sources/sv/