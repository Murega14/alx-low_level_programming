#include "main.h"

/**
 * main - shows the entry point
 *
 * Return: is zero to show success
 */

int main(void)
{
	char ch[] = "_putchar";

	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(ch[i]);
	}

	_putchar('\n');

	return (0);

}



