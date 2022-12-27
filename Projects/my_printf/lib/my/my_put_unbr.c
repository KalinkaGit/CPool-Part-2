/*
** EPITECH PROJECT, 2022
** my_put_unbr
** File description:
** my_put_unbr
*/

#include <unistd.h>
#include <stdio.h>

int my_putchar(char c);

/**
 * @brief Print an unsigned int.
 *
 * @param c, The unsigned int to print.
 * @param modifiers, Charsmodifiers
 * @return int, error code.
 */
int my_put_unbr(unsigned int nb, char *modifiers)
{
    unsigned long nbr = nb;

    if (nbr > 9) {
        my_put_unbr(nbr / 10, "");
    }

    my_putchar(48 + (nbr % 10));
    return (0);
}
