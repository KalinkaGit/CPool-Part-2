/*
** EPITECH PROJECT, 2022
** my_put_hexa
** File description:
** my_put_hexa
*/

#include <unistd.h>
#include <stdio.h>

int my_putchar(char c);

/**
 * @brief Convert an int to hexa and print it.
 *
 * @param nb, The number to convert.
 * @param modifiers, Charsmodifiers
 * @return int, error code.
 */
int my_put_hexa(int nb, char *modifiers)
{
    int i = 0;
    int hexa[8] = {0, 0, 0, 0, 0, 0, 0, 0};
    char *str = "0123456789abcdef";

    if (nb < 0) {
        nb = nb * -1;
        my_putchar('-');
    }
    while (nb > 0) {
        hexa[i] = nb % 16;
        nb = nb / 16;
        i++;
    }
    for (int j = i - 1; j >= 0; j--) {
        my_putchar(str[hexa[j]]);
    }
    return (0);
}

int my_put_hexa_maj(int nb)
{
    int i = 0;
    int hexa[8] = {0, 0, 0, 0, 0, 0, 0, 0};
    char *str = "0123456789ABCDEF";

    if (nb < 0) {
        nb = nb * -1;
        my_putchar('-');
    }
    while (nb > 0) {
        hexa[i] = nb % 16;
        nb = nb / 16;
        i++;
    }
    for (int j = i - 1; j >= 0; j--) {
        my_putchar(str[hexa[j]]);
    }
    return (0);
}
