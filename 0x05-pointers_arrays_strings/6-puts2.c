#include "main.h"
/**
 * puts2 - a function that prints every character of a string
 * @str: an input string
 * Return: nothing
 */

void puts2(char *str)
{
	int len = 0, i = 0;

	while (str[len] != '\0')
		len++;
	len -= 1;

	for (; i <= len; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
