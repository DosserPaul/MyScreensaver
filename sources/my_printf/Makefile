##
## EPITECH PROJECT, 2020
## Make file my_printf
## File description:
## my_printf
##

NAME = libprintf.a

SRC =	lib/my_putchar.c				\
		lib/my_putstr.c					\
		lib/my_putstr_error.c			\
		lib/my_putnbr.c					\
		lib/my_putlongnbr.c				\
		lib/my_put_unnbr.c				\
		lib/my_strlen.c					\
		lib/my_getnbr.c					\
		lib/revers.c					\
		conversion/int_to_charlist.c	\
		conversion/decimal_to_hex.c		\
		conversion/decimal_to_hexm.c	\
		conversion/decimal_to_binary.c	\
		conversion/decimal_to_octal.c	\
		conversion/binary_to_decimal.c	\
		printf/my_printf.c

OBJ = $(SRC:.c=.o)

HEADER = my_printf.h

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	cp $(HEADER) ../../includes/
	rm -f $(OBJ)

fclean:
	rm -f $(NAME)
	rm -f ../$(NAME)
	rm ../../includes/$(HEADER)

clean:
	rm -f $(OBJ)

re:	fclean all