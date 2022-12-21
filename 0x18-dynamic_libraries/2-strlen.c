#include "main.h"
/**
 * _strlen - a function that lets you check length of a string
 * @s: an input string
 * Return: nothing
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
