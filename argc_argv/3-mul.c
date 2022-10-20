#include <stdio.h>
#include <stdlib.h>
/**
 * main - function that print the number of arguments
 * @argc: - counter of argv
 * @argv: - its a pointer of array
 * Return: - return always 0
 */
int main(int argc, char *argv[])
{
	int k;


	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		argc = 1;
		k = atoi(argv[argc]) * atoi(argv[argc + 1]);
		printf("%d\n", k);
		return (0);
	}
}
