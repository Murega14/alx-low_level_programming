#include "main.h"
/**
 * print_diagonal - is a function that lets you draw a diagonal line
 * @n: an input integer
 * Return: 0 to sow sucess
 */

void print_diagonal(int n)
{
	int i = 0;

	if (n > 0)
	{
		for (; i < n; i++)
			_putchar('\');
	}
	_putchar('\n');
}
