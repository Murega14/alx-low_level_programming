#include"main.h"
/**
 * print_alphabet_x10 - prints the alphabet in lowercase 10 times
 *
 * Return - always 0(success)
 */

void print_alphabet_x10(void)
{
	int alpha;
	int alpha2;

	for (alpha=0; alpha <= 9; alpha++)
	{
		for (alpha2 = 'a'; alpha <= 'z'; alpha2++)
		{
			_putchar(alpha2);
		}
		_putchar('\n');
	}
}