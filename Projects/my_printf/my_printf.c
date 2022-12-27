/*
** EPITECH PROJECT, 2022
** my_printf
** File description:
** my_printf
*/

#include <stdarg.h>
#include "include/printf.h"
#include "include/my.h"

// NO MORE SPACE.
void create_ptr2(print_fncts ptr)
{
    ptr['a'] = my_put_a;
    ptr['A'] = my_put_a_maj;
    ptr['n'] = my_put_length;
    ptr['%'] = my_put_percent;
}

/**
 * @brief Create a function pointer array.
 *
 * @param ptr, The array of function pointers.
 */
void create_ptr(print_fncts ptr)
{
    ptr['c'] = (void *)my_putchar;
    ptr['s'] = my_putstr;
    ptr['S'] = my_putstr_special;
    ptr['i'] = my_put_nbr;
    ptr['d'] = my_put_nbr;
    ptr['u'] = my_put_unbr;
    ptr['p'] = my_put_pointer;
    ptr['o'] = my_put_uoctal;
    ptr['x'] = my_put_hexa;
    ptr['X'] = my_put_hexa_maj;
    ptr['b'] = my_put_binary;
    ptr['f'] = my_put_float;
    ptr['F'] = my_put_float;
    ptr['e'] = my_put_scient;
    ptr['E'] = my_put_scient_maj;
    ptr['g'] = my_put_g;
    ptr['G'] = my_put_g_maj;
    create_ptr2(ptr);
}

/**
 * @brief Check the flag & execute fnct depending the type.
 *
 * @param format, The flag to check.
 * @param ptr, Array of functions pointers.
 * @param strings, The arguments to print.
 * @return Error code.
 */
int check_flags(char format, print_fncts ptr, va_list strings, char *modifiers)
{
    switch (format) {
        case 'f': case 'a': case 'e': case 'E':
            return (ptr[format](va_arg(strings, double), modifiers));
        case '%':
            return (ptr[format]());
        case 'n':
            return (ptr[format](va_arg(strings, int *)));
        default:
            return (ptr[format](va_arg(strings, void *), modifiers));
    }
}

/**
 * @brief Print the given string with the given flags.
 *
 * @param {char *} format, The string to print.
 * @param {*} ..., Arguments to use.
 * @return {int} Error code.
 */
int my_printf(char *format, ...)
{
    if (format == 0)
        return (84);
    va_list strings;
    print_fncts ptr;
    int exec_code = 0;
    create_ptr(ptr);
    va_start(strings, format);
    for (int i = 0; format[i] != '\0'; i++) {
        char charsmodif[64];
        int index = is_valid_format(format, i + 1, charsmodif);
        if (format[i] == '%' && index != 0) {
            exec_code = check_flags(format[index], ptr, strings, charsmodif);
            i += index - i;
        } else {
            *charsmodif = 0;
            my_putchar(format[i]);
        }
    }
    va_end(strings);
    return (exec_code == 0 ? my_putchar(-1) : exec_code);
}

// TODO: %a %A
// TODO: fix %f %F
// TODO: fix %e %E
