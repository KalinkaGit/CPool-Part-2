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
 * @brief Add chars modifiers
 *
 * @param nb, eheh
 * @param modifiers, Char modifiers
 */
void add_charmodif(int nb, char *modifiers)
{
    int charmodifplus = 0;
    int charmodifspace = 0;
    for (int i = 0; modifiers[i] != '\0'; i++) {
        if (modifiers[i] == '+' && nb > 0)
            charmodifplus = 1;
        if (modifiers[i] == ' ' && nb > 0)
            charmodifspace = 1;
    }
    if (charmodifspace == 1 && charmodifplus == 0)
        my_putchar(' ');
    if (charmodifplus == 1)
        my_putchar('+');
}

/**
 * @brief Print a number.
 *
 * @param nb, The number to print.
 * @param modifiers, Charsmodifiers
 * @return int, error code.
 */
int my_put_nbr(int nb, char *modifiers)
{
    long nbr = nb;

    if (nbr < 0) {
        my_putchar('-');
        nbr = -nbr;
    }

    if (modifiers != "")
        add_charmodif(nb, modifiers);

    if (nbr > 9) {
        my_put_nbr(nbr / 10, "");
    }

    my_putchar(48 + (nbr % 10));
    return (0);
}
