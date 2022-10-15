#include "main.h"
/**
 * _strspn - Description 'Display reverse string'.
 * @s: - it is a pinter called s
 * @accept: - it is a pinter called accept
 * Return: - Always return i
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int j;
	int k;

	while (*s != '\0')
	{
		k = 0;
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*s == *(accept + j))
				k = 1;
		}
		j = 0;
		if (k == 0)
			break;
		i = i + 1;
		s++;
	}
	return (i);
}
