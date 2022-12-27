/*
** EPITECH PROJECT, 2022
** my_putstr_special
** File description:
** my_putstr_special
*/

#include <unistd.h>
#include <stdio.h>

int my_putstr(char const *str, char *modifiers);
int my_putchar(char c);

int my_put_octal(char c, char *modifiers);

/**
 * @brief If the string contains an unprintable char, print it in octal.
 *
 * @param str, The string to print.
 * @param modifiers, Charsmodifiers.
 * @return int, error code.
 */
int my_putstr_special(char const *str, char *modifiers)
{
    int i = 0;

    if (str == 0)
        return (84);
    while (str[i] != '\0') {
        if (str[i] < 32 || str[i] >= 127) {
            my_put_octal(str[i], "");
        } else {
            my_putchar(str[i]);
        }
        i++;
    }
    return (0);
}
