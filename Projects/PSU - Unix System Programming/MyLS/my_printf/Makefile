##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Xavier VINCENT
##

NAME			=			libmy.a

SRC				=			my_edit_str.c				\
							my_put_get.c				\
							modstr.c					\
							my_printf.c					\
							my_printf2.c				\
							my_printf3.c

SRC_TESTS		=			tests/tests_my_printf.c

OBJ				=			$(SRC:.c=.o)

all: $(NAME)

$(NAME):		$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:			clean
	rm -f $(NAME)

re:				fclean all