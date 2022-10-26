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
	unsigned int len = 0;
	unsigned int len2 = 0;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
		len++;
	for (i = 0; s2[i]; i++)
	{
		len2++;
	}
	if (n > len2)
	{
		n = len2;
	}
	p = malloc((len + n + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		p[i] = s1[i];
	}
	for (; i < (len + n); i++)
	{
		p[i] = s2[j];
		j++;
	}
	p[i] = '\0';
	return (p);
}
