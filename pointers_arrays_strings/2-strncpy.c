#include "main.h"
/**
 * *_strncat - Description 'coppy arrays'.
 * @dest: - it is a pointer called dest
 * @src: - it is a pointer called src
 * @n: - it is an integer called n
 * Return: - Always dest as return
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (*(src + j) != '\0' && i < n)
	{
		*(dest + j) = *(src + i);
		i++;
		j++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}
