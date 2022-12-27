/*
** EPITECH PROJECT, 2022
** my_put_uoctal
** File description:
** my_put_uoctal
*/

int my_putchar(char c);

// TOO LONG
void print_dumb(char *str, int *octal)
{
    if (str[octal[2]] != '0')
        my_putchar(str[octal[2]]);
    my_putchar(str[octal[1]]);
    my_putchar(str[octal[0]]);
}

/**
 * @brief Convert an unsigned int to octal and print it.
 *
 * @param nb, The number to convert.
 * @param modifiers, Charsmodifiers
 * @return int, Error code.
 */
int my_put_uoctal(unsigned int nb, char *modifiers)
{
    unsigned long nbr = nb;
    int i = 0;
    int octal[3] = {0, 0, 0};
    char *str = "01234567";
    for (int i = 0; modifiers[i] != '\0'; i++)
        if (modifiers[i] == '#') {
            my_putchar('0');
            break;
        }
    if (nbr < 0) {
        nbr = nbr * -1;
        my_putchar('-');
    }
    while (nbr > 0) {
        octal[i] = nbr % 8;
        nbr = nbr / 8;
        i++;
    }
    print_dumb(str, octal);
    return (0);
}
