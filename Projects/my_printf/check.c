/*
** EPITECH PROJECT, 2022
** Check
** File description:
** Check
*/

/**
 * @brief Check if the char is a valid char modifier.
 *
 * @param c, The char to check.
 * @return int, 1 if the char is a valid char modifier, 0 otherwise.
 */
int check_valid_charmodifiers(char c)
{
    char *valid_charmodifiers = "#0- +";

    for (int i = 0; valid_charmodifiers[i] != '\0'; i++) {
        if (c == valid_charmodifiers[i])
            return (1);
    }

    return (0);
}

/**
 * @brief Check if the char is a valid flag.
 *
 * @param c, The char to check.
 * @return int 1 if the char is a valid flag, 0 otherwise.
 */
int check_valid_flags(char c)
{
    char *valid_flags = "csSidupoxXbfFeEgGaAn%";

    for (int i = 0; valid_flags[i] != '\0'; i++) {
        if (c == valid_flags[i])
            return (1);
    }

    return (0);
}

/**
 * @brief Check if the flag given is valid.
 *
 * @param str, string to check.
 * @param index, index of the flag to check.
 * @param charmodifiers, point to an array of charmodifiers
 * @return 1 if the flag is valid, 0 otherwise.
 */
int is_valid_format(char *str, int index, char *charmodifiers)
{
    char *valid_charmodifiers = "#0- +'";
    char *valid_flags = "csSidupoxXbfFeEgGaAn%";
    int cindex = 0;

    for (int i = index; str[i] != '\0'; i++) {
        if (check_valid_flags(str[i]) == 1)
            return (i);
        if (check_valid_charmodifiers(str[i]) == 1) {
            charmodifiers[cindex] = str[i];
            charmodifiers[cindex + 1] = '\0';
            cindex++;
            continue;
        } else {
            return (0);
        }
    }

    return (0);
}
