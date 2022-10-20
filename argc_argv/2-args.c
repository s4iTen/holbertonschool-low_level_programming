#include <stdio.h>
/**
 * main - function that print '\n' after every arg
 * @argc: - counter of argv
 * @argv: - its a pointer of array
 * Return: - return always 0
 */
int main(int argc, char *argv[])
{
	int i;
	for (i = 0; i < argc; i++)
	{

		printf("%s\n", argv[i]);
	}

	return (0);
}
