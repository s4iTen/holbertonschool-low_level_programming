#include "main.h"
/**
 * *_strchr - Description 'count lenght of pointer'.
 * @s: - it is a pinter called s
 * @c: - it is an character called c
 * Return: - Always s or null
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s = s + 1;
	}
	if (*s == c)
	{
		return (s);
	}
	else
		return (NULL);
}
