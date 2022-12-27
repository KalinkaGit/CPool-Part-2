##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## makefile
##

SRC = 	./lib/my/my_compute_power_rec.c \
		./lib/my/my_get_nbr_len.c \
		./lib/my/my_put_a.c \
		./lib/my/my_put_binary.c \
		./lib/my/my_put_float.c \
		./lib/my/my_put_g.c \
		./lib/my/my_put_hexa.c \
		./lib/my/my_put_nbr.c \
		./lib/my/my_put_octal.c \
		./lib/my/my_put_percent.c \
		./lib/my/my_put_pointer.c \
		./lib/my/my_put_scient.c \
		./lib/my/my_put_unbr.c \
		./lib/my/my_put_uoctal.c \
		./lib/my/my_putchar.c \
		./lib/my/my_putstr.c \
		./lib/my/my_put_length.c \
		./lib/my/my_putstr_special.c \
		check.c \
		my_printf.c

SRCLIB = 	./lib/my/my_compute_power_rec.c \
		./lib/my/my_get_nbr_len.c \
		./lib/my/my_put_a.c \
		./lib/my/my_put_binary.c \
		./lib/my/my_put_float.c \
		./lib/my/my_put_g.c \
		./lib/my/my_put_hexa.c \
		./lib/my/my_put_nbr.c \
		./lib/my/my_put_octal.c \
		./lib/my/my_put_percent.c \
		./lib/my/my_put_pointer.c \
		./lib/my/my_put_scient.c \
		./lib/my/my_put_unbr.c \
		./lib/my/my_put_uoctal.c \
		./lib/my/my_putchar.c \
		./lib/my/my_putstr.c \
		./lib/my/my_put_length.c \
		./lib/my/my_putstr_special.c

OBJ = 	$(SRC:.c=.o)
OBJLIB = $(SRCLIB:.c=.o)
F = -lmy --coverage -lcriterion
pt1 = cd tests/ && gcc -o unit_tests tests.c ../my_printf.c ../check.c

LIB = libmy.a

all: $(LIB)

$(LIB): $(OBJ)
		ar rc libmy.a $(OBJ)
		make clean


compilelib: $(OBJLIB)
		ar rc ./lib/my/libmy.a $(OBJLIB)
	  	cp ./lib/my/my.h ./include/
		cp ./lib/my/libmy.a ./lib/
		make clean

compile:
		make compilelib
		gcc -o my_printf check.c my_printf.c -I./include -L./lib -lmy
		make clean

unit_tests:
		make compilelib
		$(pt1) -I../include/ -L../lib/ $(F)
		cd ../

run_tests:
		make unit_tests
		cd ./tests/ && ./unit_tests
		gcovr

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all
