/*
** EPITECH PROJECT, 2022
** my_put_g
** File description:
** my_put_g
*/

int my_put_float(double nb, char *modifiers);
int my_put_scient(double nb, char *modifiers);
int my_put_scient_maj(double nb, char *modifiers);

/**
 * @brief %g flag I forgot what it does.
 *
 * @param nb ????
 * @param modifiers ????
 * @return int, Error code.
 */
int my_put_g(double nb, char *modifiers)
{
    int i = 0;

    for (i; nb > 10 || nb < -10; i++) {
        nb /= 10;
    }

    if (i < 4 || i >= 6) {
        my_put_scient(nb, "");
    } else {
        my_put_float(nb, "");
    }

    return (0);
}

int my_put_g_maj(double nb, char *modifiers)
{
    int i = 0;

    for (i; nb > 10 || nb < -10; i++) {
        nb /= 10;
    }

    if (i < 4 || i >= 6) {
        my_put_scient_maj(nb, "");
    } else {
        my_put_float(nb, "");
    }

    return (0);
}
