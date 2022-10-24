#include "main.h"
/**
 * *_strdup - prints buffer in hexa
 * @str: it is a pointer called 'str'
 * Return: Pointer or null
 */
char *_strdup(char *str)
{
	int len = 0;
	int i = 0;
	int j = 0;
	char *p;

	if (str == NULL)
	{
		return (NULL);
	}
	for (j = 0; str[j]; j++)
	{
		len++;
	}
	p = malloc((len + 1) * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}
	while (i < len)
	{
		p[i] = str[i];
		i++;
	}
	return (p);
}
