/*
** EPITECH PROJECT, 2020
** MY_STRNCPY
** File description:
** No Description
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;
    
    while (src[i] && i < n) {
        dest[i] = src[i];
        i = i + 1;
    }
    if (!src[n - 1] == '\0')
        dest[i] = '\0';
    return (dest);
}
