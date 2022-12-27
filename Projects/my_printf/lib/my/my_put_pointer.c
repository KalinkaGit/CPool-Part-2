/*
** EPITECH PROJECT, 2022
** my_putstr_special
** File description:
** my_putstr_special
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int my_putchar(char c);

/**
 * @brief Print a pointer address.
 *
 * @param ptr, The pointer to print.
 * @param modifiers, Charsmodifiers
 * @return int, Error code.
 */
int my_put_pointer(void *ptr, char *modifiers)
{
    int i = 0;
    int j = 0;
    char *hexa = "0123456789abcdef";
    char *hexa_ptr = malloc(sizeof(char) * 16);
    long long int nb = (long long int)ptr;

    if (hexa_ptr == NULL)
        return (84);
    hexa_ptr[0] = '0';
    hexa_ptr[1] = 'x';
    for (i = 15; i > 3; i--) {
        hexa_ptr[i] = hexa[nb % 16];
        nb = nb / 16;
    }
    for (j = 0; j < 16; j++) {
        my_putchar(hexa_ptr[j]);
    }
    free(hexa_ptr);
    return (0);
}
