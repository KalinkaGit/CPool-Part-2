/*
** EPITECH PROJECT, 2022
** my_get_nbr_len
** File description:
** my_get_nbr_len
*/

/**
 * @brief Get the length of a number.
 *
 * @param nb, The number to get the length.
 * @return int, The length of the number.
 */
int my_get_nbr_len(int nb)
{
    int i = 0;

    if (nb < 0) {
        nb = nb * -1;
        i++;
    }

    while (nb > 0) {
        nb = nb / 10;
        i++;
    }

    return (i);
}
