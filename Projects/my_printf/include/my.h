/*
** EPITECH PROJECT, 2022
** jsp
** File description:
** dffsfd
*/

#ifndef BLOCKF
    #define BLOCKF
    int my_putchar(char c);
    int my_putstr(char const *str, char *modifiers);
    int my_putstr_special(char const *str, char *modifiers);
    int my_put_percent(void);
    int my_put_nbr(int nb, char *modifiers);
    int my_put_unbr(unsigned int nb, char *modifiers);
    int my_put_hexa(int nb, char *modifiers);
    int my_put_hexa_maj(int nb, char *modifiers);
    int my_put_octal(char c, char *modifiers);
    int my_put_binary(int nb, char *modifiers);
    int my_put_pointer(void *ptr, char *modifiers);
    int my_compute_power_rec(int nb, int p);
    int my_get_nbr_len(int nb);
    int my_put_float(double nb, char *modifiers);
    int my_put_scient(double nb, char *modifiers);
    int my_put_scient_maj(double nb, char *modifiers);
    int my_put_uoctal(unsigned int nb, char *modifiers);
    int my_put_g(double nb, char *modifiers);
    int my_put_g_maj(double nb, char *modifiers);
    int my_put_a(double nb, char *modifiers);
    int my_put_a_maj(double nb, char *modifiers);
    int is_valid_format(char *str, int index, char *modifiers);
    int my_put_length(int *);
#endif
