#include "main.h"
/**
 * _strcpy - Description 'coppy arrays'.
 * @dest: - it is a pinter called dest
 * @src: - it is a pinter called src
 * Return: - Always dest as return
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int len = strlen(src);

	for (i = 0; i <= len; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
