#include "main.h"
/**
 * *_strpbrk - Description 'Display reverse string'.
 * @s: - it is a pinter called s
 * @accept: - it is a pinter called accept
 * Return: - Always return 's + i' or 'NULL'
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j;
	int k = 0;

	while (*(s + i) != '\0')
	{
		j = 0;
		while (*(s + i) != *(accept + j) && *(accept + j) != '\0')
		{
			j++;
		}

		if (*(accept + j) != '\0')
		{
			k = 1;
			break;
		}
		i++;
	}

	if (k == 1)
		return ((s + i));
	else
		return (NULL);
}
