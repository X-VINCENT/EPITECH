##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Xavier VINCENT
##

all:
	@make -C antman re
	@make -C giantman re

clean:
	@make -C antman clean
	@make -C giantman clean

fclean:
	@make -C antman fclean
	@make -C giantman fclean

re:			clean all

tests_run:
	@make -C antman tests_run
	@make -C giantman tests_run

cover:
	@make -C antman cover
	@make -C giantman cover

my_tests:
	@make -C antman my_tests
	@make -C giantman my_tests

.PHONY: 		all $(NAME) clean fclean re tests_run cover my_tests
