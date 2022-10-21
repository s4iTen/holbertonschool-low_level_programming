#include <stdio.h>
#include <stdlib.h>
/**
 * main - function that print the result of digits inside the array
 * @argc: - counter of argv
 * @argv: - its a pointer of array
 * Return: - it depends on the conditions
 */
int main(int argc, char *argv[])
{
	int i = 1;
	int j = 0;

	if (argc < 1)
	{
		return (0);
	}
	while (i < argc)
	{
		if (atoi(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		j = j + atoi(argv[i]);
		i++;
	}
	printf("%d\n", j);
	return (0);
}
