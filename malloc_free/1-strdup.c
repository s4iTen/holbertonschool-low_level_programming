#include "main.h"
/**
 * *_strdup - prints buffer in hexa
 * @str: it is a pointer called 'str'
 * Return: Pointer or null
 */
char *_strdup(char *str)
{
	int len = strlen(str);
	int i = 0;
	int j = 0;
	char *p;

	if (str == NULL)
	{
		return (NULL);
	}
	p = malloc(len * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}
	while (j < len)
	{
		p[j] = str[i];
		j++;
		i++;
	}
	return (p);
}
