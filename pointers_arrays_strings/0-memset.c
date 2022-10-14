#include "main.h"
/**
 * *cap_string - Description 'coppy arrays'.
 * @a: - it is a pointer called dest
 * Return: - Always 'a'
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
