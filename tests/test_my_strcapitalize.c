/*
** EPITECH PROJECT, 2020
** UNIT TEST
** File description:
** NO DESCRIPTION
*/

#include<criterion/criterion.h>

char *my_strcapitalize(char *str);

char *my_strcopy(char *dest, char const *src);

Test(my_strcapitalize, test_caps)
{
    char dest[48] = {0};
    char *result = ("Hey, How Are You? 42words Forty-Two; Fifty+One");

    my_strcopy(dest, result);
    cr_assert_str_eq(my_strcapitalize(dest), result);
}

Test(my_strcapitalize, test_full_caps)
{
    char dest[12] = {0};

    my_strcopy_4(dest, "HELLO WORLD");
    cr_assert_str_eq(my_strcapitalize(dest), "Hello World");
}
