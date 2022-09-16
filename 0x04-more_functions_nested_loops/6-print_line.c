#include "main.h"
/**
 * print_line - function that lets you draw a straight line
 * @n: an input integer
 * Return: 0 to show success
 */

void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		for (; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
