#include "main.h"
/**
 * *_strncat - Description 'coppy arrays'.
 * @dest: - it is a pinter called dest
 * @src: - it is a pinter called src
 * @n: - it is an integer called n
 * Return: - Always dest as return
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}
	while (*(src + j) != '\0' && j < n)
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	return (dest);
}
