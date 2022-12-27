/*
** EPITECH PROJECT, 2022
** my_putchar
** File description:
** my_putchar
*/

#include <unistd.h>
#include <stdarg.h>

/**
 * @brief Print a char.
 *
 * @param c, The char to print.
 * @return int, error code/number of printed chars.
 */
int my_putchar(char c)
{
    static int count = 0;
    if (c == -1)
        return (count);
    write(1, &c, 1);
    count++;
    return (0);
}
