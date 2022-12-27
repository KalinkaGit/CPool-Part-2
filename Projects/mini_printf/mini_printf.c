/*
** EPITECH PROJECT, 2022
** Display Stdargs
** File description:
** Display STDARGS
*/

#include <stdarg.h>
#include <stdlib.h>

void my_putchar(char c);
int my_putstr(char const *str);
int my_put_nbr(int nb);
int my_get_nbr_len(int nb);
int my_strlen(char const *str);

int is_valid_format(char format)
{
    switch (format) {
        case 's':
            return (1);
        case 'c':
            return (1);
        case 'i':
            return (1);
        case 'd':
            return (1);
        case '%':
            return (1);
        default:
            return (0);
    }
}

int print_format(char *format, va_list strings, int i)
{
    if (format[i] == '%' && format[i + 1] == 's') {
        char *newstr = va_arg(strings, char *);
        my_putstr(newstr);
        return (my_strlen(newstr));
    }
    if (format[i] == '%' && format[i + 1] == 'c') {
        my_putchar(va_arg(strings, int));
        return (1);
    }
    if (format[i] == '%' && (format[i + 1] == 'i' || format[i + 1] == 'd')) {
        int newint = va_arg(strings, int);
        my_put_nbr(newint);
        return (my_get_nbr_len(newint));
    }
    if (format[i] == '%' && format[i + 1] == '%') {
        my_putchar('%');
        return (1);
    }
}

int mini_printf(char *format, ...)
{
    va_list strings;
    int count = 0;
    va_start(strings, format);
    for (int i = 0; format[i] != '\0'; i++) {
        if (format[i] == '%' && is_valid_format(format[i + 1])) {
            count += print_format(format, strings, i);
            i++;
            continue;
        }
        if (format[i] != '%') {
            count++;
            my_putchar(format[i]);
        }
        if (format[i] == '%' && is_valid_format(format[i + 1]) == 0) {
            count++;
            my_putchar(format[i]);
        }
    }
    va_end(strings);
    return (count);
}
