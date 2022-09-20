#include "main.h"
/**
 * print_rev -  function that lets you print a string in reverse
 * @s: an input string
 * Return: nothing
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	while (i)
		_putchar(s[--i]);
	_putchar('\n');
}
