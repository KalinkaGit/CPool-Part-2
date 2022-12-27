/*
** EPITECH PROJECT, 2022
** My put str
** File description:
** my_put_str
*/

#include <unistd.h>

int my_putchar(char c);

/**
 * @brief Print a string.
 *
 * @param str, The string to print.
 * @return int, error code.
 */
int my_putstr(char const *str, char *modifiers)
{
    if (str == 0) {
        my_putstr("(null)", "");
        return (0);
    }

    for (int i = 0; str[i] != '\0'; i++) {
        my_putchar(str[i]);
    }

    return (0);
}
