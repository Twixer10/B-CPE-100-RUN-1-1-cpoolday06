/*
** EPITECH PROJECT, 2020
** UNIT TEST MY STR N CPY
** File description:
** NO DESCRIPTION
*/

#include  </usr/local/include/criterion/criterion.h>

char *my_strncpy(char *dest , char  const *src , int n);

Test(my_strncpy , copy_five_characters_in_empty_array)
{
    char  dest [6] = {0};

    my_strncpy(dest , "HelloWorld", 5);
    cr_assert_str_eq(dest , "Hello");
}
