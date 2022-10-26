#include "main.h"
/**
 * _calloc - check the code
 * @nmemb: it is a pointer called 'nmemb'
 * @size: it is a pointer called 'size'
 * Return: Always pointer or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
    void *p;
	char *s;
    unsigned int i = 0;

    if (nmemb == 0 || size == 0)
    {
        return (NULL);
    }
    p = malloc(nmemb * size);
    if (p == NULL)
    {
        return (NULL);
    }
	s = p;
    for (i = 0; i < (size * nmemb); i++)
    {
        s[i] = '\0';
    }
    return (p);
}
