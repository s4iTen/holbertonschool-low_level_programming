#include "main.h"
/**
 * *string_toupper - Description 'coppy arrays'.
 * @a: - it is a pointer called dest
 * Return: - Always 'a'
 */
char *string_toupper(char *a)
{
	int i = 0;

	while (*(a + i) != '\0')
	{
		if (*(a + i) < 123 && *(a + i) > 96)
		{
			*(a + i) = *(a + i) - ' ';
		}
		i++;
	}
	return (a);
}
