#include"main.h"
/**
 * int _islower(int c) is a function to check for lowercase characters
 *
 * Return - 1 if lowercase and 0 if uppercase
 */
int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a';i <= 'z';i++)
	{
		if (1 == c)
			lower = 1;
	}
	return (lower);
}
