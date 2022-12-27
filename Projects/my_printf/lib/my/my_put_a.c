/*
** EPITECH PROJECT, 2022
** my_put_a
** File description:
** my_put_a
*/

#include <unistd.h>
#include <stdio.h>

int my_putchar(char c);

/**
 * @brief TODO
 *
 * @param nb
 * @param modifiers
 * @return int
 */
int my_put_a(double nb, char *modifiers)
{
    int i = 0;
    int binary[32] = {
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0
    };
    char *str = "0123456789abcdef";
    if (nb < 0) {
        nb = nb * -1;
        my_putchar('-');
    }
    while (nb > 0) {
        binary[i] = (int)nb % 16;
        nb = nb / 16;
        i++;
    }
    for (int j = i - 1; j >= 0; j--) {
        my_putchar(str[binary[j]]);
    }
    return (0);
}

int my_put_a_maj(double nb, char *modifiers)
{
    int i = 0;
    int binary[32] = {
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0
    };
    char *str = "0123456789ABCDEF";
    if (nb < 0) {
        nb = nb * -1;
        my_putchar('-');
    }
    while (nb > 0) {
        binary[i] = (int)nb % 16;
        nb = nb / 16;
        i++;
    }
    for (int j = i - 1; j >= 0; j--) {
        my_putchar(str[binary[j]]);
    }
    return (0);
}
