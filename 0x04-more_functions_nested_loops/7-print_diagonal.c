#include "main.h"
/**
 * print_diagonal - is a function that lets you draw a diagonal line
 * @n: an input integer
 * Return: 0 to sow sucess
 */

void print_diagonal(int n)
{
	int i = 0, j;

	if (n > 0)
	{
		for (; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');

}
