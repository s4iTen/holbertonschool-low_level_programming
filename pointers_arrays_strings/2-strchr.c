#include "main.h"

char *_strchr(char *s, char c)
{
    while (*s != '\0')
    {
        if(*s == c)
            return (s);
        s = s + 1;
    }
    if (*s == c)
    {
        return (s);
    }
    else
        return (NULL);
    
}