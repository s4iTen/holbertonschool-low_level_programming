#include <stdlib.h>
#include "3-calc.h"
/**
 * main - check the code
 * @argc: it is a variable called 'argc'
 * @argv: it is a pointer called 'argv'
 * Return: always error or 0
 */
int main(int argc, char *argv[])
{
	int a, b, result;
	char op;
	int (*calc)(int, int);

	op = *(argv[2]);
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	calc = get_op_func(&op);
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if (calc == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((op == '/' && b == 0) || (op == '%' && b == 0))
	{
		printf("Error\n");
		exit(100);
	}
	result = calc(a, b);
	printf("%d\n", result);
	return (0);
}
