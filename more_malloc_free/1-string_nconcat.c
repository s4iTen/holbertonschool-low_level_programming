#include "main.h"
/**
 * string_nconcat - check the code
 * @s1: it is a pointer called 's1'
 * @s2: it is a pointer called 's2'
 * @n: it is a variable integer called 'n'
 * Return: Always pointer.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	int j = 0;
	unsigned int len;
	char *p;

	for (i = 0; s1[i]; i++)
		len++;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	p = malloc((len + n) * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		p[i] = s1[i];
	}
	for (; i < (len + n + 1); i++)
	{
		p[i] = s2[j];
		j++;
	}
	return (p);
}
