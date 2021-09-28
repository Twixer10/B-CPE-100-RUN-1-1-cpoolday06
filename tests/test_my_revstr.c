/*
** EPITECH PROJECT, 2020
** UNIT TEST
** File description:
** NO DESCRIPTION
*/

#include <criterion/criterion.h>

char *my_revstr(char *str);

char *my_strcopy(char *dest, char const *src);

Test(my_revstr, return_value_is_reversed)
{
    char dest[6] = {0};

    my_strcopy(dest, "Abcde");
    cr_assert_str_eq(my_revstr(dest), "edcbA");
}
