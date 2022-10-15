#include "main.h"
/**
 * _strspn - Description 'Display reverse string'.
 * @s: - it is a pinter called s
 * @accept: - it is a pinter called accept
 * Return: - Always return i
 */
char *_strpbrk(char *s, char *accept)
{
    int i = 0;
    int j = 0;

    while (*(s + i) != '\0')
    {
        if (*(accept) + j == *(s + i))
        {
            return (accept);
        }
        i++;
        j++;
    }
    
    return (NULL);
}