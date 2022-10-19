#include <stdlib.h>
#include <stdio.h>

/**
 * main - a program that multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0
 */

int main(int argc, char **argv)
{
	int a, b, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		result = a * b;
		printf("%d\n", result);
		return (0);
	}
}
