#include "main.h"
/**
 * *_strcat - Description 'coppy arrays'.
 * @dest: - it is a pinter called dest
 * @src: - it is a pinter called src
 * Return: - Always dest as return
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (*(dest + i) != '\0')
	{
		i++;
	}
	while (*(src + j) != '\0')
	{
		i++;
		j++;
	}
	return (dest);
}
