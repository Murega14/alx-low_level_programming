#include "main.h"
/**
 * print_numbers - function that lets you print numbers 0 to 9
 *
 * Return: 0 to show success
 */

void print_numbers(void);
{
	int i = '0';

	for (; i <= 9; i++)
		_putchar(i);
	_putchar('\n');
}
