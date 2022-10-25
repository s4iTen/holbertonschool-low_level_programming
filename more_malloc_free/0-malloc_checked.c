#include "main.h"

void *malloc_checked(unsigned int b)
{
    int *p;

    p = malloc(b);
    if (p == NULL)
    {
        return (NULL);
        free(p);
    }
    free(p);
    return (p);
}