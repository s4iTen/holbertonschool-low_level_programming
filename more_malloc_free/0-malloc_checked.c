#include "main.h"

void *malloc_checked(unsigned int b)
{
    int *p;

    if (b == 0)
    {
        return (NULL);
    }
    p = malloc(b * sizeof(int));
    if (p == NULL)
    {
        return (NULL);
    }
    return (p);
    free(p);
}