#include "main.h"
/**
 * print_most_numbers - a function that prints 0 to 9 without 2 and 4
 *
 * Return: o to show success
 */

void print_most_numbers(void)
{
	int i = '0';

	for (; i <= '9'; i++)
	{
		if (i != '2' && i != '4')
			_putchar(i);
	}
	_putchar('\n');
}
