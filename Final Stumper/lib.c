/*
** EPITECH PROJECT, 2022
** LIB
** File description:
** LIB
*/

#include <unistd.h>
#include <stdio.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_put_nbr(int nb)
{
    long nbr = nb;

    if (nbr > 9) {
        my_put_nbr(nbr / 10);
    }

    my_putchar(48 + (nbr % 10));
}

void my_putstr(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        my_putchar(str[i]);
    }
}

void print_cols_lines(int cols, int lines)
{
    my_put_nbr(cols);
    my_putchar(' ');
    my_put_nbr(lines);
}
