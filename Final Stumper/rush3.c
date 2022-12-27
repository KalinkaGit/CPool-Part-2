/*
** EPITECH PROJECT, 2022
** RUSH3
** File description:
** RUSH3
*/

#include "rush3.h"


void print_unknown_rush(int cols, int lines)
{
    my_putstr("[rush1-3] ");
    my_put_nbr(cols);
    my_putchar(' ');
    my_put_nbr(lines);
    my_putstr(" || [rush1-4] ");
    my_put_nbr(cols);
    my_putchar(' ');
    my_put_nbr(lines);
    my_putstr(" || [rush1-5] ");
    my_put_nbr(cols);
    my_putchar(' ');
    my_put_nbr(lines);
}

void print_rush(char *buff, int cols, int lines)
{
    switch (buff[0]) {
        case 'o':
            my_putstr("[rush1-1] ");
            print_cols_lines(cols, lines);
            break;
        case '*': case '/':
            my_putstr("[rush1-2] ");
            print_cols_lines(cols, lines);
            break;
        case 'B':
            print_unknown_rush(cols, lines);
            break;
        default:
            my_putstr("none");
    }
}

void print_rush_multiple(char *b, int c, int total)
{
    if (b[0] == 'o' && b[c - 1] == 'o') {
        my_putstr("[rush1-1] ");
        return;
    }
    if (b[0] == '/' && b[c - 1] == '\\' || (b[0] == '*' && b[c - 1] == '*')) {
        my_putstr("[rush1-2] ");
        return;
    }
    if (b[0] == 'A' && b[c - 1] == 'A' ) {
        my_putstr("[rush1-3] ");
        return;
    }
    if (b[0] == 'A' && b[c - 1] == 'C') {
        if (b[total - c - 1] == 'A')
            my_putstr("[rush1-4] ");
        else
            my_putstr("[rush1-5] ");
        return;
    }
    my_putstr("none");
}

void rush3(char *buff)
{
    int cols = 0;
    int lines = 0;
    int total = 0;
    while (buff[cols] != '\n')
        cols++;
    while (buff[total] != '\0') {
        if (buff[total] == '\n')
            lines++;
        total++;
    }
    if (total <= 2 || cols == 1 || (cols == 2 && lines == 1)) {
        print_rush(buff, cols, lines);
    } else {
        print_rush_multiple(buff, cols, total);
        print_cols_lines(cols, lines);
    }
    my_putchar('\n');
}
