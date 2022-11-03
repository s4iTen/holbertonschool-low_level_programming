#include "function_pointers.h"
/**
 * print_name - function that print name with funtion of pointer
 * @name: the name that i have to print
 * @f: the function of the pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL || f != NULL)
		(*f)(name);
}
