/*
** EPITECH PROJECT, 2022
** my_put_scient
** File description:
** my_put_scient
*/

int my_putchar(char c);
int my_putstr(char const *str);
int my_put_nbr(int nb, char *modifiers);
int my_put_float(double nb, char *modifiers);

/**
 * @brief Convert a float to scientific notation.
 *
 * @param nb, The float to convert.
 * @param modifiers, Charsmodifiers
 * @return int, Error code.
 */
int my_put_scient(double nb, char *modifiers)
{
    int i = 0;

    for (i = 0; nb > 10 || nb < -10; i++) {
        nb /= 10;
    }

    my_put_float(nb, "");

    my_putstr("e+");

    if (i < 10)
        my_putchar('0');

    my_put_nbr(i, "");

    return (0);
}

int my_put_scient_maj(double nb, char *modifiers)
{
    int i = 0;

    for (i; nb > 10 || nb < -10; i++) {
        nb /= 10;
    }

    my_put_float(nb, "");

    my_putstr("E+");

    if (i < 10)
        my_putchar('0');

    my_put_nbr(i, "");

    return (0);
}
