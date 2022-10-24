#include "main.h"

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
    while (j < len)
    {
        p[j] = str[i];
        j++;
        i++;
    }
    
    return (p);
}