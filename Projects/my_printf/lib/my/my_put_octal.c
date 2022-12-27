/*
** EPITECH PROJECT, 2022
** my_put_octal
** File description:
** my_put_octal
*/

#include <unistd.h>
#include <stdio.h>

int my_putchar(char c);

/**
 * @brief Convert a char to octal and print it.
 *
 * @param c, The char to convert.
 * @param modifiers, Charsmodifiers
 * @return int, error code.
 */
int my_put_octal(char c, char *modifiers)
{
    int i = 0;
    int octal[3] = {0, 0, 0};
    char *str = "01234567";
    if (c < 0) {
        c = c * -1;
        my_putchar('-');
    }
    while (c > 0) {
        octal[i] = c % 8;
        c = c / 8;
        i++;
    }
    my_putchar('\\');
    my_putchar(str[octal[2]]);
    my_putchar(str[octal[1]]);
    my_putchar(str[octal[0]]);
    return (0);
}
