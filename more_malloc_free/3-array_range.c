#include "main.h"

int *array_range(int min, int max)
{
    int *p;
    int i;
    int j = 0;
    int k = max - min;

    if (min > max)
        return (NULL);
    p = malloc((k + 1) * sizeof(int));
    if (p == NULL)
        return (NULL);
    for (i = min; i < (max + 1); i++)
    {
        p[j] = i;
        j++;
    }
    return (p);
}