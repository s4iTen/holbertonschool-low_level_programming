#include "main.h"

void *_calloc(unsigned int nmemb, unsigned int size)
{
    int **p;
    int i = 0;

    if (nmemb == 0 || size == 0)
    {
        return (NULL);
    }
    p = malloc(nmemb);
    if (p == NULL)
    {
        return (NULL);
    }
    while (p[i])
    {
        p[i] = malloc(size);
        if (p[i] == NULL)
        {
            return (NULL);
        }
        i++;
    }
    return (p);
}
