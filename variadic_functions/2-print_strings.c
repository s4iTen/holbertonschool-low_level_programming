#include "variadic_functions.h"

void print_strings(const char *separator, const unsigned int n, ...)
{
    va_list list;
	unsigned int i = 0;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
        if ((va_arg(list, char*)) != NULL)
		    printf("%s", va_arg(list, char*));
        else
            printf("(nil)");
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
