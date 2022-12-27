/*
** EPITECH PROJECT, 2022
** My_Compute_Power_Rec
** File description:
** My_Compute_Power_Rec
*/

/**
 * @brief Compute the power of a number.
 *
 * @param nb, The number to compute.
 * @param p, The power.
 * @return int, The result of the computation.
 */
int my_compute_power_rec(int nb, int p)
{
    if (p < 0)
        return (0);
    if (p == 0)
        return (1);
    if (p == 1)
        return (nb);
    return (nb * my_compute_power_rec(nb, p - 1));
}
