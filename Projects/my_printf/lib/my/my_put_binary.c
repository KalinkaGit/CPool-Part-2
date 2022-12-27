/*
** EPITECH PROJECT, 2022
** my_put_nbr
** File description:
** my_put_nbr
*/

#include <unistd.h>
#include <stdio.h>

int my_putchar(char c);

/**
 * @brief Convert an int to binary and print it.
 *
 * @param nb, The number to convert.
 * @param modifiers, Charsmodifiers
 * @return int, error code.
 */
int my_put_binary(int nb, char *modifiers)
{
    int i = 0;
    int binary[32] = {
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0
    };
    char *str = "01";
    if (nb < 0) {
        nb = nb * -1;
        my_putchar('-');
    }
    while (nb > 0) {
        binary[i] = nb % 2;
        nb = nb / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--) {
        my_putchar(str[binary[j]]);
    }
    return (0);
}
