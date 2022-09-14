#include "main.h"
/**
 * print_alphabet will print the alphabet in lowercase
 *
 * return is 0 to show success
 */

void print_alphabet(void)
{
	char alpha;
	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('/n');
}
