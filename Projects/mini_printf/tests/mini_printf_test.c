/*
** EPITECH PROJECT, 2022
** tests
** File description:
** tests
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

int mini_printf(char *format, ...);

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;

    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }

    dest[i] = '\0';

    return (dest);
}

Test(mini_printf_test, my_strcpy_test, .init=cr_redirect_stdout)
{
    char str[6];

    my_strcpy(str, "world");
    mini_printf("Hello %s\n", str);
    cr_assert_stdout_eq_str("Hello world\n", "");
}

Test(mini_printf_test, multiply_test, .init=cr_redirect_stdout)
{
    int nb = 21;

    mini_printf("If you multiple %d by %d, the result is %i.\n", nb, 2, nb * 2);
    cr_assert_stdout_eq_str("If you multiple 21 by 2, the result is 42.\n", "");
}

Test(mini_printf_test, my_strcpy_test_2, .init=cr_redirect_stdout)
{
    char str[8];

    my_strcpy(str, "Epitech");
    mini_printf("The word %%%s%% has %i characters.\n", str, my_strlen(str));
    cr_assert_stdout_eq_str("The word %Epitech% has 7 characters.\n", "");
}

Test(mini_printf_test, format_string, .init=cr_redirect_stdout)
{
    mini_printf("%s", "Bonjour");
    cr_assert_stdout_eq_str("Bonjour", "");
}

Test(mini_printf_test, format_char, .init=cr_redirect_stdout)
{
    mini_printf("%c", 'A');
    cr_assert_stdout_eq_str("A", "");
}

Test(mini_printf_test, format_int_d, .init=cr_redirect_stdout)
{
    mini_printf("%d", 42069);
    cr_assert_stdout_eq_str("42069", "");
}

Test(mini_printf_test, format_int_neg_d, .init=cr_redirect_stdout)
{
    mini_printf("%d", -42069);
    cr_assert_stdout_eq_str("-42069", "");
}

Test(mini_printf_test, format_int_i, .init=cr_redirect_stdout)
{
    mini_printf("%i", 42069);
    cr_assert_stdout_eq_str("42069", "");
}

Test(mini_printf_test, format_int_neg_i, .init=cr_redirect_stdout)
{
    mini_printf("%i", -42069);
    cr_assert_stdout_eq_str("-42069", "");
}

Test(mini_printf_test, format_percent, .init=cr_redirect_stdout)
{
    mini_printf("%%");
    cr_assert_stdout_eq_str("%", "");
}

Test(mini_printf_test, multiple_formats, .init=cr_redirect_stdout)
{
    mini_printf("%s%d%i%c%c%d%s%i", "Bonjour", 33, 1, 'a', 'b', 1, "Blabla", 0);
    cr_assert_stdout_eq_str("Bonjour331ab1Blabla0", "");
}

Test(mini_printf_test, print_str_space, .init=cr_redirect_stdout)
{
    mini_printf("%s", "   ");
    cr_assert_stdout_eq_str("   ", "");
}

Test(mini_printf_test, print_char_space, .init=cr_redirect_stdout)
{
    mini_printf("%c", ' ');
    cr_assert_stdout_eq_str(" ", "");
}

Test(mini_printf_test, print_special_characters, .init=cr_redirect_stdout)
{
    mini_printf("%¨£/.?§°+)=@^ç\\`-('\"~é&");
    cr_assert_stdout_eq_str("%¨£/.?§°+)=@^ç\\`-('\"~é&", "");
}

Test(mini_printf_test, print_alphabet_wo_format, .init=cr_redirect_stdout)
{
    mini_printf("ABCDEFGHIJKLMNOPQRSTUVWXYZ");
    cr_assert_stdout_eq_str("ABCDEFGHIJKLMNOPQRSTUVWXYZ", "");
}

Test(mini_printf_test, printf_length)
{
    int printf_res = printf("%s%d%i%c%c%d%s%i%%", "Bonjour", 33, 1, 'a', 'b', 1, "Blabla", 0);
    int mini_printf_res = mini_printf("%s%d%i%c%c%d%s%i%%", "Bonjour", 33, 1, 'a', 'b', 1, "Blabla", 0);
    cr_assert_eq(printf_res, mini_printf_res);
}

Test(mini_printf_test, printf_length_wo_format)
{
    int printf_res = printf("Bonjour 42069");
    int mini_printf_res = mini_printf("Bonjour 42069");
    cr_assert_eq(printf_res, mini_printf_res);
}