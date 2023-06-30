#include "main.h"
/**
 *string_toupper - a function that changes all
 *		lowercase letters of a string
 *		to uppercase.
 *
 * @s : pointer to input char
 *
 * Return: @s
 */
char *string_toupper(char *s)
{
        int b = 0;

        while (s[b] != '\0')
        {
                if (s[b] >= 97 && s[b] <= 122)
                        s[b] = s[b] - 32;
                b++;

        }
        return (s);
}
