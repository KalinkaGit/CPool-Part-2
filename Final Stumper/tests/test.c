/*
** EPITECH PROJECT, 2022
** TEST
** File description:
** TEST
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#define BUFF_SIZE 4096


Test(rush3_test, rush1_1_test_one, .init=cr_redirect_stdout)
{
    char dabuff[3];
    dabuff[0] = 'o';
    dabuff[1] = '\n';
    dabuff[2] = '\0';
    rush3(dabuff);
    cr_assert_stdout_eq_str("[rush1-1] 1 1\n");
}

Test(rush3_test, rush1_1_test_two, .init=cr_redirect_stdout)
{
    char *dabuff = "o----o\n\0";
    rush3(dabuff);
    cr_assert_stdout_eq_str("[rush1-1] 6 1\n");
}

Test(rush3_test, rush1_1_test_three, .init=cr_redirect_stdout)
{
    char *dabuff = "\n\0";
    rush3(dabuff);
    cr_assert_stdout_eq_str("none\n");
}

Test(rush3_test, rush2_2_test_one, .init=cr_redirect_stdout)
{
    char *dabuff = "*\n\0";
    rush3(dabuff);
    cr_assert_stdout_eq_str("[rush1-2] 1 1\n");
}

Test(rush3_test, rush1_2_test_two, .init=cr_redirect_stdout)
{
    char *dabuff = "/******\\\n\0";
    rush3(dabuff);
    cr_assert_stdout_eq_str("[rush1-2] 8 1\n");
}

Test(rush3_test, rush1_3_test_three, .init=cr_redirect_stdout)
{
    char *dabuff = "B\n\0";
    rush3(dabuff);
    cr_assert_stdout_eq_str("[rush1-3] 1 1 || [rush1-4] 1 1 || [rush1-5] 1 1\n");
}

Test(rush3_test, rush1_3_test_four, .init=cr_redirect_stdout)
{
    char *dabuff = "ABBBBBA\n\0";
    rush3(dabuff);
    cr_assert_stdout_eq_str("[rush1-3] 7 1\n");
}

Test(rush3_test, rush1_4_test_one, .init=cr_redirect_stdout)
{
    char *dabuff = "ABBBBBC\nA     B\nABBBBBC\n\0";
    rush3(dabuff);
    cr_assert_stdout_eq_str("[rush1-4] 7 3\n");
}

Test(rush3_test, rush1_5_test_one, .init=cr_redirect_stdout)
{
    char *dabuff = "ABBBBBC\nA     B\nCBBBBBA\n\0";
    rush3(dabuff);
    cr_assert_stdout_eq_str("[rush1-5] 7 3\n");
}

Test(rush3_test, rush1_5_test_two, .init=cr_redirect_stdout)
{
    char *dabuff = "ABBBBBBBBC\nB        B\nCBBBBBBBBA\n\0";
    rush3(dabuff);
    cr_assert_stdout_eq_str("[rush1-5] 10 3\n");
}
