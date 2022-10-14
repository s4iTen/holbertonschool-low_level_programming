#include "main.h"
/**
 * *_memcpy - Description 'coppy arrays'.
 * @a: - it is a pointer called dest
 * Return: - Always 'a'
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
