#include "main.h"
/**
 * *string_toupper - Description 'coppy arrays'.
 * @a: - it is a pointer called dest
 * Return: - Always 'a'
 */
char *cap_string(char *a)
{
	int i = 0;

	while (*(a + i) != '\0')
	{
		if (i == 0 && (*(a + i) > 96 && *(a + i) < 123))
		{
			*(a + i) = *(a + i) - ' ';
			i++;
		}
		if (*(a + i - 1) == ' '
		|| *(a + i - 1) == '\t'
		|| *(a + i - 1) == '\n'
		|| *(a + i - 1) == ','
		|| *(a + i - 1) == ';'
		|| *(a + i - 1) == '.'
		|| *(a + i - 1) == '!'
		|| *(a + i - 1) == '?'
		|| *(a + i - 1) == '"'
		|| *(a + i - 1) == '('
		|| *(a + i - 1) == ')'
		|| *(a + i - 1) == '{'
		|| *(a + i - 1) == '}')
		{
			if (*(a + i) < 123 && *(a + i) > 96)
			{
				*(a + i) = *(a + i) - ' ';
			}
		}
		i++;
	}
	return (a);
}
