/*
** EPITECH PROJECT, 2022
** my_put_float
** File description:
** my_put_float
*/

#include "my.h"

// NO MORE SPACE
void float2(double nb, int left, int right, int count)
{
    int stop = right == 0 ? 1 : 0;
    if ((my_get_nbr_len(right) > 5 && ((int)((nb - left) * 10000000) % 10) >= 5)
        || (my_get_nbr_len(right) <= 5 && right % 10 >= 5))
        right++;
    my_put_nbr(left, "");
    my_putchar('.');
    for (int i = count; i >= 1; i--) {
        if (stop == 1) {
            my_putstr("000000", "");
            return;
        }
        my_putchar('0');
    }
    my_put_nbr(right, "");
    if (right == 0 && nb - left > 0.000001)
        my_putstr("00000", "");
}

/**
 * @brief Print a float.
 *
 * @param nb, The float to print.
 * @param modifiers, Charsmodifiers
 * @return int, error code.
 */
int my_put_float(double nb, char *modifiers)
{
    int left = nb;
    int right = (nb - left) * 1000000;
    double tmp = nb - left;
    int count = 0;
    if (nb == 0.0) {
        if (1 / nb == -1 / 0.0)
            my_putchar('-');
        my_putstr("0.000000", "");
        return (0);
    }
    while ((count == 0 || tmp < 0.1)) {
        tmp *= 10;
        count++;
    }
    if (nb < 0) {
        my_putchar('-');
        nb = -nb;
    }
    float2(nb, left, right, count);
    return (0);
}
