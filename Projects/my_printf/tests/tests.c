/*
** EPITECH PROJECT, 2022
** test
** File description:
** testing things
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

int my_printf(char *format, ...);

Test(my_printf, invalid_format, .init = cr_redirect_stdout) {
    
    my_printf("%m\n");
    cr_assert_stdout_eq_str("%m\n", "");
}

Test(my_printf, my_putchar, .init = cr_redirect_stdout) {

    my_printf("%c\n", 'H');
    cr_assert_stdout_eq_str("H\n", "");
}
Test(my_printf, my_putstr, .init = cr_redirect_stdout) {
    
    my_printf("%s\n", "Hello");
    cr_assert_stdout_eq_str("Hello\n", "");
}

Test(my_printf, my_putstr_special, .init = cr_redirect_stdout) {
    
    my_printf("%S\n", "Bonjour");
    cr_assert_stdout_eq_str("Bonjour\n", "");
}

Test(my_printf, my_put_nbr, .init = cr_redirect_stdout) {
    
    my_printf("%i\n", 145);
    cr_assert_stdout_eq_str("145\n", "");
}

Test(my_printf, my_put_nbr2, .init = cr_redirect_stdout) {
    
    my_printf("%d\n", 146);
    cr_assert_stdout_eq_str("146\n", "");
}

Test(my_printf, my_put_percent, .init = cr_redirect_stdout) {
    
    my_printf("%%\n");
    cr_assert_stdout_eq_str("%\n", "");
}

Test(my_printf, my_put_float, .init = cr_redirect_stdout) {
    
    my_printf("%f", 4);
    cr_assert_stdout_eq_str("0.000000", "");
}

Test(my_printf, format_0, .init = cr_redirect_stdout) {
    int res = my_printf(0);
    cr_assert_eq(res, 84);
}

//gcc -o unit_tests test.c ../my_printf.c ../lib/my/*.c --coverage -lcriterion