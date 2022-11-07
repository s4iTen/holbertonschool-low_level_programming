#include "variadic_functions.h"
/**
 * print_all - function that print all
 * @format: it is a contant pointer called 'format'
 */
void print_all(const char *const format, ...)
{
	va_list vl;
	int i = 0;
	int j = strlen(format);

	va_start(vl, format);
	while (format[i] != '\0')
	{
		struct Printable_t
		{
			int i;
			float f;
			char c;
			char *s;
		} Printable;
		switch (format[i])
		{
		case 'i':
			Printable.i = va_arg(vl, int);
			printf("%i", Printable.i);
			break;
		case 'f':
			Printable.f = va_arg(vl, double);
			printf("%f", Printable.f);
			break;
		case 'c':
			Printable.c = (va_arg(vl, int));
			printf("%c", Printable.c);
			break;
		case 's':
			Printable.s = (va_arg(vl, char *));
			if (Printable.s[0] == '\0')
				printf("(nil)");
			printf("%s", Printable.s);
			break;
		default:
			break;
		}
		if (i < (j - 1))
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(vl);
}
