/*
** EPITECH PROJECT, 2022
** my lib
** File description:
** my lib
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_putstr(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        my_putchar(str[i]);
    }
}

int my_put_nbr(int nb)
{
    long nbr = nb;

    if (nbr < 0) {
        my_putchar('-');
        nbr = -nbr;
    }

    if (nbr > 9) {
        my_put_nbr(nbr / 10);
    }

    my_putchar(48 + (nbr % 10));
}

int my_get_nbr_len(int nb)
{
    int count = 0;

    while (nb > 9) {
        count++;
        nb = nb / 10;
    }

    return (count + 1);
}

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i += 1;
    }

    return i;
}
