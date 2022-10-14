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

	while (*(s1 + i) != '\0' && *(s2 + i) != '\0')
	{
		if (*(s1 + i) != *(s2 + i))
		{
			return (*(s1 + i) - *(s2 + i));
				}
		i++;
	}
	return (0);
}
