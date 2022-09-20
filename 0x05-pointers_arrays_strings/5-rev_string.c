#include "main.h"
/**
 * rev_string -  a function that reverses strings
 * @s: an input string
 * Return: nothing
 */

void rev_string(char *s)
{
	int len = 0;

	while (str[len] != '\0')
		len++;

	while (len)
		_putchar(str[--len]);

}
