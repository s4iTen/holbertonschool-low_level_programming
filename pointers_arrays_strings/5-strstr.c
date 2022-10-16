#include "main.h"
/**
 * *_strstr - Description 'Display reverse string'.
 * @haystack: - it is a pinter called s
 * @needle: - it is a pinter called accept
 * Return: - Always return 'haystack + i' or 'NULL'
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j;
	int k = 0;
	int l;

	while (*(haystack + i) != '\0')
	{
		j = 0;
		if (*(haystack + i) == *(needle + j))
		{
			l = 0;
			while (*(needle + j) != '\0' && *(haystack + i + l) == *(needle + j + l))
			{
				l++;
			}
			if (*(needle + j + l) == '\0')
			{
				k = 1;
				break;
			}
		}
		i++;
	}

	if (k == 1)
		return ((haystack + i));
	else
		return (NULL);
}
