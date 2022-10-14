#include "main.h"
/**
 * *cap_string - Description 'coppy arrays'.
 * @s: - it is a pointer called s
 * @b: - it is an integer called b
 * @n: - it is an integer called n
 * Return: - Always 's'
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
