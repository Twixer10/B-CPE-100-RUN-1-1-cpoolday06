/*
** EPITECH PROJECT, 2020
** UNIT TEST
** File description:
** NO DESCRIPTION
*/

#include<criterion/criterion.h>

char *my_strstr(char *str, char const *to_find);

Test(my_strstr, check_for_single_char_occurence)
{
    cr_assert_str_eq(my_strstr("Hello", "lo"), "lo");
}

Test(my_strstr, check_for_multiple_chars_occurence)
{
    cr_assert_str_eq(my_strstr("HelloWorld", "Hello"), "HelloWorld");
}

Test(my_strstr, check_for_no_occurence)
{
    cr_assert_eq(my_strstr("HelloWorld", "Foobar"), NULL);
}
