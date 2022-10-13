#include "main.h"
/**
 * _strcmp - Description 'coppy arrays'.
 * @s1: - it is a pointer called dest
 * @s2: - it is a pointer called src
 *
 * Return: - Always dest as return
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	while (*(s1 + i) != '\0' && *(s2 + j) != '\0')
	{
		if (*s1 == *s2)
		{
			return (0);
			i++;
			j++;
		}
		else
		{
			return (*s1 - *s2);
			i++;
			j++;
		}
	}
	return (*s1 - *s2);
}
