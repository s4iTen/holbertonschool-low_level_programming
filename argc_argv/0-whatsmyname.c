#include <stdio.h>
/**
 * main - function that print the name
 * @argc: - counter of argv
 * @argv: - its a pointer of array
 * Return: - return always 0
 */
int main(int argc, char *argv[])
{

	printf("%s\n", argv[argc - 1]);

	return (0);
}
