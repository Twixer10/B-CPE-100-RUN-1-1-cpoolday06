/*
** EPITECH PROJECT, 2020
** MY STR INPRINTABLE
** File description:
** NO DESCRIPTION
*/

int my_str_isprintable(char  const *str)
{
    int i = 0;
    while (str[i]) {
        if (!(str[i] >= 32 && str[i] < 127))
            return (0);
        i = i + 1;
    }
    return (1);
}
