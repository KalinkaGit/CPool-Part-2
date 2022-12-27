/*
** EPITECH PROJECT, 2022
** my_put_length
** File description:
** my_put_length
*/

int my_putchar(char c);

/**
 * @brief %n flag (put in a pointer the number of characters printed).
 *
 * @param ptr, The pointer to put the number of characters printed.
 * @return int, Error code.
 */
int my_put_length(int *ptr)
{
    *ptr = my_putchar(-1);
    return (0);
}
