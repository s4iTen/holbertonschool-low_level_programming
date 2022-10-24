#include "main.h"

char *str_concat(char *s1, char *s2)
{
    int i = 0;
    int j = 0;
    int k;
    int l = 0;
    int len1 = 0;
    int len2 = 0;
    char *p;

    for (i = 0; s1[i]; i++)
    {
        len1++;
    }
    for (j = 0; s2[j] ; j++)
    {
        len2++;
    }
    k = len1 + len2;
    if (s1 == NULL)
    {
        return (NULL);
    }
    if (s2 == NULL)
    {
        return (NULL);
    }
    i = 0;
    p = malloc(k * sizeof(char));
    if (p == NULL)
    {
        return (NULL);
    }
    while (l < len1)
    {
        p[l] = s1[l];
        l++;
    }
    while (i <= len2)
    {
        p[l] = s2[i];
        l++;
        i++;
    }
    return (p);
}