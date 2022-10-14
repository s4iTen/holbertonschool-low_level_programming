#include "main.h"
/**
 * *_memcpy - Description 'coppy arrays'.
 * @dest: - it is a pointer called dest
 * @src: - it is a pointer called src
 * @n: - it is an integer called n
 * Return: - Always 's'
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
