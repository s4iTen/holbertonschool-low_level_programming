#include <stdio.h>
/**
 * main - function that print the number of arguments
 * @argc: - counter of argv
 * @argv: - its a pointer of array
 * Return: - return always 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i != argc)
	{
		i++;
		argv++;
	}
	printf("%d", i);
	return (0);
}
